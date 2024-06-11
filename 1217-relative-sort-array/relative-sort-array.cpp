class Solution {
public:
    vector<int> relativeSortArray(std::vector<int>& arr1, std::vector<int>& arr2) {
        std::unordered_map<int, int> countMap;
        std::vector<int> result;
        std::vector<int> remaining;

        // Count occurrences of each element in arr1
        for (int num : arr1) {
            countMap[num]++;
        }

        // Place elements of arr1 that are in arr2 in the result array in the order of arr2
        for (int num : arr2) {
            while (countMap[num] > 0) {
                result.push_back(num);
                countMap[num]--;
            }
        }

        // Collect remaining elements not in arr2
        for (auto& entry : countMap) {
            while (entry.second > 0) {
                remaining.push_back(entry.first);
                entry.second--;
            }
        }

        // Sort the remaining elements
        std::sort(remaining.begin(), remaining.end());

        // Append the sorted remaining elements to the result
        result.insert(result.end(), remaining.begin(), remaining.end());

        return result;
    }
};