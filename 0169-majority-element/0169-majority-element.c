int majorityElement(int* a, int n) { // Boyer-Moore Voting Algorithm
    int c=0 , r ;
    for(int i=0 ; i<n ; i++){
        if (c==0){
            r = a[i];
        }
        if (a[i] == r){
            c++;
        }
        else{
            c--;
        }
    }
    return r;
}