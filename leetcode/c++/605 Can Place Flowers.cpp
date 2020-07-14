class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        int N = flowerbed.size();
        int res = 0;
        for (int i = 1; i < N - 1; ++i) {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                ++res;
                flowerbed[i] = 1;
            }
        }
        return res >= n;
    }
};
