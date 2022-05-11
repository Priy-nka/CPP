class Solution {
public:
    int isprime(int num){
        if (num <= 1)
            return 0;
        for (int i = 2; i <= num/2; i++){
            if (num % i == 0)
                { return 0; }
            }
            return 1; 
        }
    int countPrimes(int n) {
        int count=0;
   for(int i=1;i<n;i++){
      if(isprime(i)==1)
         { count++; }
   }
   return count;
    }
};
