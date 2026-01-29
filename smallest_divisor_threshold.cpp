class Solution {
public:
    int totalsum(vector<int>& nums,int k){
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum += (nums[i]+k-1)/k;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1 , high = *max_element(nums.begin(), nums.end());
        int ans = high;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(totalsum(nums,mid)<=threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};