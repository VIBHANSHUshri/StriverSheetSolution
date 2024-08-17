class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
          if(n == 0) return {};

        int m = n;
         int dir = 0;
         vector<vector<int>>matrix(m,vector<int>(n));
        
         int left = 0;
         int right = n-1;
         int top = 0;
         int down = m-1;
           int counter = 1;

          while(left <= right && top <= down)
         {
           
           
                for(int i = left ; i <= right ; i++)
                {
                   matrix[top][i] = counter++;
                }
              top++;
            
            for(int i = top ; i <= down ; i++)
                {
                   matrix[i][right] = counter++; 
                }
                right--;
            
           if(top<=down){
                for(int i = right ; i >= left ; i--)
                {
                    matrix[down][i] = counter++;
                }
                down--;
           }
      
           if(left<=right){
                for(int i = down  ; i >= top ; i--)
                {
                     matrix[i][left] = counter++;
                }
                left++;
           }     
    }
     return matrix;
    }
};