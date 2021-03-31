class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 将给定数组排序
     * @param arr int整型vector 待排序的数组
     * @return int整型vector
     */
    void quickSort(vector<int>& arr, int left, int right) {
        if (right > left) {
            int i = left + 1;
            int j = right;
            int index = left;

            while (i <= j) {
                while (i <= j && arr[i] <= arr[index]) {
                    ++i;
                }
                while (i <= j && arr[j] >= arr[index]) {
                    --j;
                }
                if (i < j) {
                    swap(arr[i], arr[j]);
                }
            }
            swap(arr[j], arr[left]);
            quickSort(arr, left, j - 1);
            quickSort(arr, j + 1, right);
        }
    }
    vector<int> MySort(vector<int>& arr) {
        // write code here
        quickSort(arr, 0, arr.size() - 1);
        return arr;
    }
};