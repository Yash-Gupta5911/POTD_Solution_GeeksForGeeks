class Solution {
public:
    bool fn(int n) {
        if (n <= 1) return false; // adding this check to handle edge cases
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0)
                return false;
        }
        return true;
    }
    
    vector<int> getPrimes(int N) {
        // Iterating from 2 to N/2 to find pairs of primes
        for(int i = 2; i <= N / 2; i++) {
            if(fn(i) && fn(N - i))
                return {i, N - i};
        }
        return {-1, -1}; // return this if no such pair is found
    }
};
