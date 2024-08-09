class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // Complete the function
    sort(arr.begin(),arr.end());

    unsigned long long int sum=0;

    for(long i=0;i<arr.size();i++)
    {
       sum=(sum+(i*arr[i]))%1000000007;
    }

    return sum;
    }
};