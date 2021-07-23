class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	int i=0,j=M-1;
    while(i>=0 && j>=0 && i<N && j<M)
    {
        if(mat[i][j]==X)
        {
            return 1;
        }
        
        if(mat[i][j]>X)
        {
            j--;
        }
        
        else
        {
            i++;
        }
        
    }
    
    return 0;
	}
};
