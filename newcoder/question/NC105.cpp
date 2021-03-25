class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * ���Ŀ��ֵ���ڷ����±꣬���򷵻� -1
     * @param nums int����vector
     * @param target int����
     * @return int����
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