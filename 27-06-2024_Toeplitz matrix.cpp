bool isToeplitz(vector<vector<int>>& mat) {
    // code here
    int n=mat.size();
    int m=mat[0].size();
    
    int i=0;
    int j=0;
    while(j<m){
        int x=0;
        int y=j;
        int val=mat[x][y];
        while(x<n and y<m){
            if(mat[x][y]!=val) return false;
            x++;
            y++;
        }
        j++;
    }
    
    i=1;
    while(i<n){
        int x=i;
        int y=0;
        int val=mat[x][y];
        while(x<n and y<m){
            if(mat[x][y]!=val) return false;
            x++;
            y++;
        }
        i++;
    }
    return true;
    
}
