class Solution
{
    static boolean ispar(String str)
    {
        ArrayDeque<Character> st = new ArrayDeque<>();
		
		for ( int i =0 ;  i <str.length() ; i++){
			if(str.charAt(i)=='('  || str.charAt(i) =='['  || str.charAt(i) =='{'  )
				st.push(str.charAt(i));
			else{
				if(st.isEmpty()) return false;   	
			   
				//not empty
				else if( (str.charAt(i) ==')' && st.pop()=='(') ||
					(str.charAt(i) ==']' && st.pop()=='[') ||
					(str.charAt(i) =='}' && st.pop()=='{') )
			    continue;
				
				else return false;  
			}
		}
	return(st.isEmpty());
    }
}