class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int start=0;
        int end=nums.size()-1;
        
        while(start<end)
        {
            int mid=start+((end-start)/2);
            
           /* if(nums[mid-1]!=nums[mid] && nums[mid+1]!=nums[mid])
            {
                return nums[mid];
            }*/
            
             if(( mid%2==0 && nums[mid+1]==nums[mid]) || (mid%2==1 && nums[mid-1]==nums[mid]))
            {
                start=mid+1;
            }
            
            else
            {
                end=mid;
            }
            
            
            
        }
        return nums[start];
        
        
    }
};
