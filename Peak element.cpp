class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       if(arr[0]>=arr[1])
   {
       return 0;
   }
   
   if(arr[n-1]>=arr[n-2])
   {
       return n-1;
   }
   
   int start=0;
   int end=n-1;
   while(start<=end)
   {
       int mid=start+((end-start)/2);
       
           if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])
           {
               return mid;
           }
       
       
       else if(arr[mid]<arr[mid+1])
       {
           start=mid+1;
       }
       
       else
       {
           end=mid-1;
       }
       
   }
   return -1;
    }
};
