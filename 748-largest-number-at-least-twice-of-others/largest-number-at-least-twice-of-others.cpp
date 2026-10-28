class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = 0;
        int second = -1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[largest]) {
                second = largest;
                largest = i;
            } else if (second == -1 ||
                       nums[i] > nums[second]) {
                second = i;
            }
        }

        if (second == -1 ||
            nums[largest] >= 2 * nums[second])
            return largest;

        return -1;
    }
};