bool isPalindrome(char* s) {
    int l = 0, h = strlen(s) - 1;
    while (l < h) {
        if (!isalnum((unsigned char)s[l])) { 
            l++; 
            continue; 
        }
        if (!isalnum((unsigned char)s[h])) { 
            h--; 
            continue; 
        }
        if (tolower((unsigned char)s[l]) != tolower((unsigned char)s[h])) {
            return false;
        }
        l++;
        h--;
    }
    return true;
}