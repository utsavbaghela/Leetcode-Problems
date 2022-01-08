M-34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first=-1;
        int s=0;
        int e=nums.size()-1;
        //for left side
        while(s<=e){
            int mid = e + (s - e) / 2;
            if(nums[mid] == target)
            {
                first=mid;
                e=mid-1;
            }
            else if(nums[mid] > target){
                e=mid-1;
            }
            else if(nums[mid] < target){
                s=mid+1;
            }
        }
            
        //for right side
        int last=-1;
         s=0;
         e=nums.size()-1;
         while(s<=e)
         {
            int mid = e + (s - e) / 2;
            if(nums[mid] == target)
            {
                last=mid;
                s=mid+1;
            }
            else if(nums[mid] > target){
                e=mid-1;
            }
            else if(nums[mid] < target){
                s=mid+1;
            }
        }
        
        return vector<int> {first,last};
    }
};