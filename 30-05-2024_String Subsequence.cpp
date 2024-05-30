class Solution {
    static int mod = (int)1e9+7;
    public static int countWays(String s1, String s2) {
        int n = s1.length(), m = s2.length();
        return spaceOptimization(n,s1,m,s2);
    }

    static int spaceOptimization(int n,String a,int m,String b){
        int cur[] = new int[m+1];
        cur[0]=1;
        
        for(int i=1;i<=n;i++){
            
            for(int j=m;j>=1;j--){
                
                if(a.charAt(i-1)==b.charAt(j-1)){
                    cur[j] = (cur[j]%mod + cur[j-1]%mod)%mod;
                }
            }
            
        }
        
        return cur[m];
    }
}