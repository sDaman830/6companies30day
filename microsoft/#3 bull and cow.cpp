class Solution {
public:
    string getHint(string secret, string guess) {
       int b = 0;
       int c = 0;
       int data[10] = {0};
       for(int i =0 ; i < secret.length();i++)
       {
           if(secret[i]==guess[i])
           b++;
           else
           {
               if(data[guess[i]-'0']-- >0)
               {
                   c++;
               }
               if(data[secret[i]-'0']++ < 0)
               c++;
           }
       }
       return to_string(b)+"A"+to_string(c)+"B";
    }
};