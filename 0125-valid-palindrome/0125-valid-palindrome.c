bool isPalindrome(char* s) {
    int n=strlen(s);
    char a[200001];
    int k=0;
    for (int i=0;i<n;i++){
        if(isalnum(s[i])){
            a[k++]=tolower(s[i]);
        }
    }
    int l=0,h=k-1;
    if(k==-1){
        return false;
    }
    while(l<h){
        if(a[l]!=a[h]){
            return false;
        }
        l++;
        h--;
    }
    return true;
}