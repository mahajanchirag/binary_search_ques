class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n=nums.size();
        int start=0;
        int end=nums.size()-1;
        
        if(nums[0]>=target)
        {
            return 0;
        }
        
        if(nums[n-1]<target)
        {
            return n;
        }
   
        
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            
            if(nums[mid]==target )
            {
                return mid;
            }
            
            else if(mid-1>=0 && nums[mid]>target && nums[mid-1]<target)
            {
                return mid;
            }
            
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            
            else 
                
            {
                end=mid-1;
            }
            
        }
        
        return 0;
        
    }
};
