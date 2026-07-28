void reverseString(char* s, int n) {
    int l=0,h=n-1;
    char t;
    while(l<h){
        t=s[l];
        s[l]=s[h];
        s[h]=t;
        l++;
        h--;
    }
}