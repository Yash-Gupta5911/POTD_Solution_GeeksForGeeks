

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        int l=0, r=1;
        n=abs(n);
        
        while(l<=r && r<arr.size()){
            int diff=arr[r]-arr[l];
            if(diff==x && l!=r)
            return 1;
            else if(diff>x)
            l++;
            else
            r++;
        }
        
        return -1;
    }
};

