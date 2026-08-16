class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int arr[n+n];
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
            arr[i+n]=nums[i];
        }
        // for(int i=n-k;i<=n+k;i++){
        //     cout<<arr[i];
        // }
        for(int i=0;i<n;i++){
            nums[i]=arr[i+n-k];
        }
    }
};