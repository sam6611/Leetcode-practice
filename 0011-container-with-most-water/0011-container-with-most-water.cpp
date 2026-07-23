class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0, right=n-1;
        int minheight, maxwidth;
        int water=0;
        while(left<right){
            minheight=min(height[left],height[right]);
            maxwidth=right-left;
            water=max(water,minheight*maxwidth);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return water;
    }
};