class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     * ��������������
     * @param arr int����vector �����������
     * @return int����vector
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