class Solution{
public:

  
     void solve(string s , int num , int c , vector<string>&res)
    {  
       if(c == num)
       {
           res.push_back(s);
           return;
       }
       solve(s + '0' , num , c+ 1 ,res);
       if(s == "" || s[c-1] == '0')
       {
           solve(s + '1' , num , c + 1 , res);
       }
    }
    
    vector<string> generateBinaryStrings(int num){
      
           
        
            vector<string>res;
           
             solve("" , num , 0 , res);
             return res;
            
    }
};