class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0, right=n-1;
        int maxheight, maxwidth;
        int water=0;
        for(int i=0;i<n;i++){
            if(height[left]<height[right]){
                maxheight=height[left];
            }
            else{
                maxheight=height[right];
            }
            maxwidth=right-left;
            water=max(water,maxwidth*maxheight);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return water;
    }
};