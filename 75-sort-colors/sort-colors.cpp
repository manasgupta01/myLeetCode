class Solution {
public:

    void merge(vector<int>& nums, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        
        // Create temp arrays
        vector<int> leftArr(n1);
        vector<int> rightArr(n2);
        
        // Copy data to temp arrays leftArr[] and rightArr[]
        for (int i = 0; i < n1; i++) {
            leftArr[i] = nums[left + i];
        }
        for (int j = 0; j < n2; j++) {
            rightArr[j] = nums[mid + 1 + j];
        }
        
        // Merge the temp arrays back into nums[left..right]
        int i = 0; // Initial index of first subarray
        int j = 0; // Initial index of second subarray
        int k = left; // Initial index of merged subarray
        
        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                nums[k] = leftArr[i];
                i++;
            } else {
                nums[k] = rightArr[j];
                j++;
            }
            k++;
        }
        
        // Copy the remaining elements of leftArr[], if any
        while (i < n1) {
            nums[k] = leftArr[i];
            i++;
            k++;
        }
        
        // Copy the remaining elements of rightArr[], if any
        while (j < n2) {
            nums[k] = rightArr[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>& nums, int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            
            // Sort first and second halves
            mergeSort(nums, left, mid);
            mergeSort(nums, mid + 1, right);
            
            // Merge the sorted halves
            merge(nums, left, mid, right);
        }
    }

    void sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
    }
};
