class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;
        long long sumofarr = 0;

        for (int x : arr) {
            sumofarr += x;
        }

        long long totalsum = n * (n + 1) / 2;

        return totalsum - sumofarr;
    }
};