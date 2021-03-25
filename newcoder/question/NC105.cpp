class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 如果目标值存在返回下标，否则返回 -1
     * @param nums int整型vector
     * @param target int整型
     * @return int整型
     */
    int search(vector<int>& nums, int target) {
        // write code here
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                while (mid != 0 && nums[mid - 1] == nums[mid]) {
                    --mid;
                }
                return mid;
            }
            else if (target < nums[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return -1;
    }
};