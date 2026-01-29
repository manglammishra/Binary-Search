class Solution {
    public int[] searchRange(int[] nums, int target) {
        int lb = lowerbound(nums,target);
        if(lb==nums.length || nums[lb]!=target){
            return new int[]{-1,-1};
        }
        int ub = upperbound(nums,target)-1;
        return new int[]{lb,ub};
    }
    public int lowerbound(int[] nums,int target){
        int start = 0;
        int end = nums.length-1;
        int n = nums.length;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]>=target){
                n = mid;
                end  = mid-1;
            }
            else{
                start = mid + 1;
            }
        }
        return n;
    }
    public int upperbound(int[] nums,int target){
        int low = 0;
        int high = nums.length-1;
        int ans = nums.length;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
}