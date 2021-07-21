class Solution {
public:
    
    int Binary_search(vector<int>& nums,int start,int end,int target)
    {
        while(start<=end)
        {
           int mid=start+((end-start)/2);
            
            if(nums[mid]==target)
            {
                return mid;
            }
            
            
            else if(nums[mid]>target)
            {
                end=mid-1;
            }
            
            else if(nums[mid]<target)
            {
                start=mid+1;
            }
            
            
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        int start=0;
        int end=nums.size()-1;
        int middle;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            int next=(mid+1)%n;
            int prev=(mid+n-1)%n;
            
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev])
            {
                middle=mid;
                break;
            }
            
            else if(nums[mid]>nums[end])
            {
                start=mid+1;
            }
            
            else if(nums[mid]<nums[end])
            {
                end=mid-1;
            }
 
        }
        
        if(nums[middle]==target)
        {
            return middle;
        }
        
        int l=Binary_search(nums,0,middle-1,target);
        int r=Binary_search(nums,middle+1,n-1,target);
        
        return max(l,r);
        
    }
};
