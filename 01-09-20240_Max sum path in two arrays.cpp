class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        int a=0, b=0;
        int n=arr1.size(), m=arr2.size();
        int i=n-1, j=m-1;
        while(i>=0 && j>=0){
            if(arr1[i]>arr2[j]){
                a+=arr1[i];
                i--;
            }else if(arr1[i]<arr2[j]){
                b+=arr2[j];
                j--;
            }else{
                a = max(a,b) + arr1[i];
                b = a;
                i--;
                j--;
            }
        }
        while(i>=0){
            a+=arr1[i];
            i--;
        }
        while(j>=0){
            b+=arr2[j];
            j--;
        }
        return max(a,b);
    }
};