class Solution {
    public static void swap(int []num1,int nth,int []num2,int mth){
        int temp=num1[nth];
        num1[nth]=num2[mth];
        num2[mth]=temp;
    }
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int left=m-1;
        int right=n-1;
        
        for(int i=m+n-1;i>=0;i--)
        {
            if(left<0){
                nums1[i]=nums2[right];
                right--;
            }
            else if(right<0){
                nums1[i]=nums1[left];
                left--;
            }
            else  if(nums2[right]>nums1[left]){
                nums1[i]=nums2[right];
                right--;
            }
            else{
                nums1[i]=nums1[left];
                left--;
            }
        }
    }
}