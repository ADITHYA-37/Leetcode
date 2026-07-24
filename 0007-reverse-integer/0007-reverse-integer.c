int reverse(int x){
    long n=x;
    long s=0;
    if(n<0){
        n=(-1)*n;
    }
    while(n>0){
        s=10*s+n%10;
        n/=10;
    }
    if (x < 0)
        s = -s;

    if (s < INT_MIN || s > INT_MAX)
        return 0;

    return (int)s;
}