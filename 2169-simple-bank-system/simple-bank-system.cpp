class Bank {
public:
    vector<long long> bal;

    Bank(vector<long long>& b) {
        bal = b;
    }

    bool transfer(int a1, int a2, long long m) {
        if (a1 > bal.size() || a2 > bal.size() || bal[a1 - 1] < m) return false;
        bal[a1 - 1] -= m;
        bal[a2 - 1] += m;
        return true;
    }

    bool deposit(int a, long long m) {
        if (a > bal.size()) return false;
        bal[a - 1] += m;
        return true;
    }

    bool withdraw(int a, long long m) {
        if (a > bal.size() || bal[a - 1] < m) return false;
        bal[a - 1] -= m;
        return true;
    }
};