class Solution {
public:
    double myPow(double x, int n) {
           
        if(n==0)
            return 1;

        double pow=myPow(x,n/2);
       
       if(n%2==0)
           return pow*pow;
        else if(n>0)
        return x*pow*pow;
        else
            return 1/x*(pow*pow);
    }
};