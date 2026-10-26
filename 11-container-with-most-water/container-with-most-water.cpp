class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPointer = 0;
        int rightPointer = height.size()-1;
        int maxWater=0;
        while(leftPointer<rightPointer){
            int width=rightPointer-leftPointer;
            int hght=min(height[leftPointer],height[rightPointer]);
            int currentWater= hght * width;
            maxWater=max(maxWater,currentWater);
            height[leftPointer]<height[rightPointer]?leftPointer++:rightPointer--;
        }
        return maxWater;
    }
};