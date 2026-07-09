class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1;
        int Water=0;
        while(left<right){
            int ContainerHeight;
            if(height[left]<height[right]){
                ContainerHeight=height[left];
            }
            else {ContainerHeight=height[right];}

            int ContainerWidth=right-left;
            Water=max(Water,ContainerHeight*ContainerWidth);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return Water;
    }
};