class Solution {
    #include <string>
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> stacks;
       stacks.push(0);
    int a;
       int b = 0;
       for(int i = 0 ; i < tokens.size();i++)
       {
           if(tokens[i]=="/"||tokens[i]=="*"||tokens[i]=="+"||tokens[i]=="-")
           {
               a = stacks.top();
           stacks.pop();
           b = stacks.top();
         stacks.pop();
            if(tokens[i]=="/") 
            {
                stacks.push(b/a);
              continue;
            }
             if(tokens[i]=="*") 
            {
                stacks.push(a*b);
              continue;
            }
             if(tokens[i]=="+") 
            {
                stacks.push(a+b);
             continue;
            }
             if(tokens[i]=="-") 
            {
                stacks.push(b-a);
               continue;
            }

           }
      
       stacks.push(stoi(tokens[i]));          
        
    }
    return stacks.top();
    }
};