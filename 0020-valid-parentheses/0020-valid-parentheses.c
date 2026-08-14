bool isValid(char* s) {
    char stack[10000] ;
    int t=-1, i=0;
    while(s[i]!='\0'){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            t=t+1;
            stack[t]=s[i];
        }
        else if(s[i]==')'){
            if (t==-1){
                return false;
            }
            else if (stack[t]=='('){
                t=t-1;
            }
            else{
                return false;
            }
        }
        else if(s[i]==']'){
            if (t==-1){
                return false;
            }
            else if (stack[t]=='['){
                t=t-1;
            }
            else{
                return false;
            }
        }
        else{
            if (t==-1){
                return false;
            }
            else if (stack[t]=='{'){
                t=t-1;
            }
            else{
                return false;
            }
        }
        i++;
    }
    if(t!=-1){
        return false;
    }
    return true;
}