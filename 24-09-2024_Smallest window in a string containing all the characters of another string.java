class Solution
{
    public static String smallestWindow(String s, String p)
    {
        int pa[] = new int[26], sa[] = new int[26], pn=p.length(), sn=s.length(), find=0;
        for(char i:p.toCharArray()){
            pa[i-'a']++;
        }
        
        int i=0, j=0;
        String ans="";
        while(j<sn){
            
            char c = s.charAt(j);
            sa[c-'a']++;
            if(sa[c-'a'] <= pa[c-'a']) find++;
            
            while(find==pn){
                
                if(ans.isEmpty() || j-i+1<ans.length()){
                    ans=s.substring(i,j+1);
                }
                
                c = s.charAt(i);
                sa[c-'a']--;
                if(sa[c-'a'] < pa[c-'a']) find--;
                
                i++;
            }
            j++;
        }
        
        return ans.isEmpty()?"-1":ans;
    }
}