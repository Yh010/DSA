class Solution {
public:
    bool isValid(string s) {
       /* stack<int> st;
        for(auto &i:s){
            if(i=='('){
                st.push(i);
            }else if(i=='{'){
               st.push(i); 
            }else if(i=='['){
                st.push(i);
            }else if(i==')'){
                if(st.top()=='('){
                    st.pop();
                }else{
                    return false;
                }
            }else if(i=='}'){
                if(st.top()=='{'){
                    st.pop();
                }else{
                    return false;
                }
            }else if(i==']'){
                if(st.top()=='['){
                    st.pop();
                }else{
                    return false;
                }
            }
            
        }
        
        
        
        if(st.empty()){
            return true;
        }else{
            return false;
        }
    */
   /* stack<int>st ;
        for(auto &i:s){
            if((i == '(') or (i == '[') or (i == '{')){
                st.push(i);
            }else if(st.empty()){
                return false ;
            }else{
                int lastParentheses = st.pop()
                if(((i == ')') and (lastParentheses != '(')) or
                   ((i == ']') and (lastParentheses != '[')) or
                   ((i == '}') and (lastParentheses != '{'))){
                    return false;
                }
                    
            }
        }
        
    return true ;*/
        
        
        stack<char> parenthis;
    
    for (char& c : s)
    {
        switch (c) 
        {
                
            case '(': 
            case '{': 
            case '[': 
            parenthis.push(c); 
                
            break;
                
            case ')':
                if (parenthis.empty() || parenthis.top()!='(') 
                    return false;
                else  
                
                parenthis.pop(); 
                
                break;
                
                 case '}':
                
                if (parenthis.empty() || parenthis.top()!='{') 
                    
                return false; 
                
                else
                    
                parenthis.pop(); break;

                
                case ']':
                
                if (parenthis.empty() ||parenthis.top()!='[') 
                    
                return false;
                
                else
                
                parenthis.pop(); 
                
                break;
                
            default: ; 
        }
    }
    return parenthis.empty() ;
    
    }
};