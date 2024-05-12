
class Solution {
  public:
    int minSteps(int d) {
        // code here
       if(d==0)
       return 0;
       
       int pos=0, steps=0;
       while(pos<d || (pos-d)%2!=0)
       {
           steps++;
           pos+=steps;
       }
       
       return steps;
    }
};

