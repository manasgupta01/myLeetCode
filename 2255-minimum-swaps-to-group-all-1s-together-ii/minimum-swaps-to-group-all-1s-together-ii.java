class Solution {
    int count(int[] nums) {
        int n = nums.length;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count++;
            }
        }
        return count;
    }
    
    public int minSwaps(int[] nums) {
        int n = nums.length;
        int count = count(nums);
        int current = 0;
        for (int i = 0; i < count; i++) {
            if (nums[i] == 1) {
                current++;
            }
        }
        int max = current;
        for (int i = count; i < n; i++) {
            if (nums[i] == 1) {
                current++;
            }
            if (nums[i - count] == 1) {
                current--;
            }
            if (current > max) {
                max = current;
            }
        }
        // check the circular windows crossing [n-1]->[0]
        for (int i = 0; i < count; i++) {
            if (nums[i] == 1) {
                current++;
            }
            if (nums[n + i - count] == 1) {
                current--;
            }
            if (current > max) {
                max = current;
            }
        }
        return count - max;
    }
}