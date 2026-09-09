class Solution {
    public String longestCommonPrefix(String[] a) {
        String r = a[0];
        for (int i=1 ; i<a.length ; i++){
            r = pre (r , a[i]);
        }
        return r;
    }
    String pre (String a , String b){
        int i=0 , min = Math.min(a.length(),b.length());
        while (i<min && a.charAt(i)==b.charAt(i)){
            i++;
        }
        return a.substring(0,i);
    }
}