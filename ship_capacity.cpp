class Solution {
public:
    int noofdays(vector<int> &nums,int cap){
        int n = nums.size();
        int days =1,load =0;
        for(int i =0;i<n;i++){
            if(nums[i]+load>cap){
                days +=1;
                load = nums[i];
            }
            else{
                load += nums[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(noofdays(nums,mid)<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};