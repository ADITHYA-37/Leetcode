#include <stdlib.h>

bool containsDuplicate(int* n, int s) {
    int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
    qsort(n,s,sizeof(int),compare);
    for(int i=0;i<s-1;i++){
        if (n[i]==n[i+1]){
            return true;
        }
    }
    return false;
}