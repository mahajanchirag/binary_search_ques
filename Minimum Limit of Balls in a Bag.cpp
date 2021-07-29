class Solution {
public:
    
    bool check(vector<int>& nums, int mid, int op)
    {
        for(int i=0;i<nums.size();i++)
        {
            op=op-(nums[i]/mid);
            if(nums[i]%mid==0)
            {
                op++;
            }
        }
        if(op>=0)
        {
            return true;
        }
        
        return false;
    }
    
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        
        int end=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            end=max(end,nums[i]);
        }
        
        int start=1;
        int ans;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            
            if(check(nums,mid,maxOperations))
            {
                ans=mid;
                end=mid-1;
            }
            
            else
            {
                start=mid+1;
            }
        }
        
        return ans;
        
        
    }
};
