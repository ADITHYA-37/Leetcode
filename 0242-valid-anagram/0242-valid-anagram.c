#include <string.h>
bool isAnagram(char* s, char* t) {
    if (strlen(s)!=strlen(t)){
        return false;
    }
    int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
    }
    qsort(s,strlen(s),sizeof(char),compare);
    qsort(t,strlen(t),sizeof(char),compare);
    if (strcmp(s,t)!=0){
        return false;
    }
    return true;
}