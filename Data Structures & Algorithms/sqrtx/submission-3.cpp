class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
            return 1;
        int s = 0, e = x/2;
        int m;
        while (s <= e){
            m = s + (e-s)/2;
            long long mul = 1LL* m * m;
            if(mul == x)
                return m;
            else if(mul > x)
                e = m-1;
            else 
                s = m+1;
        }
        return e;
    }
};
