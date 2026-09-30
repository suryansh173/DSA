class Solution {
public:
    int countPrimes(int n) {
       if(n<= 2) return 0;

        int size =n/2;  // Only storing odd numbers.
        // index i represents number 2*i + 1
        vector<bool> isPrime(size, true);

        int count = size ; // all odd numbers >= 3

        for(int i =3; i * i <n; i +=2) 
        {
            if(isPrime[i/2]) {
                for(int j = i * i; j < n; j += 2 * i) 
                {
                    if(isPrime[j/2]) 
                    {
                        isPrime[j/2] = false;
                        count--;
                    }
                }
            }
        }

        return count;
    }
};