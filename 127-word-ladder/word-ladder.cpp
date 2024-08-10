class Solution {
public:
bool differByOne(const std::string& word1, const std::string& word2) {
    int differences = 0;
    for (size_t i = 0; i < word1.length(); ++i) {
        if (word1[i] != word2[i]) {
            ++differences;
            if (differences > 1) {
                return false;
            }
        }
    }
    return differences == 1;
}
void createAdj(const vector<string>& wordList, vector<string> adj[]) {
    int n = wordList.size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && differByOne(wordList[i], wordList[j])) {
                adj[i].push_back(wordList[j]);
            }
        }
    }
}


    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();
        vector<string> adj[n];
        createAdj(wordList, adj);

    // Add the beginWord to the list and update the adjacency list
    std::vector<std::string> allWords = wordList;
    allWords.push_back(beginWord);
    std::vector<std::string> adjWithBegin[n + 1];
    createAdj(allWords, adjWithBegin);

    // BFS setup
    std::queue<std::pair<int, int>> q;
    std::vector<bool> visited(n + 1, false);

    // Find the index of the beginWord in the allWords list
    int beginIndex = n;  // last element is beginWord
    q.push({beginIndex, 1});
    visited[beginIndex] = true;

    // Perform BFS
    while (!q.empty()) {
        auto [currentIndex, level] = q.front();
        q.pop();

        // If we find the endWord, return the count
        if (allWords[currentIndex] == endWord) {
            return level;
        }

        // Iterate through the neighbors
        for (const auto& neighbor : adjWithBegin[currentIndex]) {
            int neighborIndex = std::distance(allWords.begin(), std::find(allWords.begin(), allWords.end(), neighbor));
            if (!visited[neighborIndex]) {
                visited[neighborIndex] = true;
                q.push({neighborIndex, level + 1});
            }
        }
    }

    // If endWord is not found, return 0
    return 0;
    }
};