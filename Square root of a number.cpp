long long int floorSqrt(long long int x) 
{
    // Your code goes here   
    long long start=1;
        long long end=x,ans;
        
        while(start<=end)
        {
            long long mid=start+((end-start)/2);
            
            long long mul=mid*mid;
            
            if(mul==x)
            {
                return mid;
            }
            
            else if(mul>x)
            {
                end=mid-1;
            }
            
            else if(mul<x)
            {
                start=mid+1;
                ans=mid;
            }
            
        }
        
        return ans;
}
