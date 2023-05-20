
class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    int n = matrix.size();
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    int val = matrix[i][j];
                    int m1 = matrix[i][k];
                    int m2 = matrix[k][j];
                    if(val == -1)
                    {
                        if(m1 != -1 and m2 != -1) matrix[i][j] = m1+m2; 
                    }
                    else
                    {
                        if(m1 != -1 and m2 != -1) matrix[i][j] = min(val,m1+m2); 
                    }
                }
            }
        }// Code here
	}
};
