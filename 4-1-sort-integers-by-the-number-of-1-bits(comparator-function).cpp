// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/


// static int  -> necessary to right other wise giving error

// 'this' cannot be implicitly captured in this context
//    23 |                     int c_a = f(a) ;


class Solution {
public:

    static int f(int num)
    {
        int count = 0 ;

            while(num != 0)
                {
                    count += (num & 1) ;
                    num = num >> 1 ;
                }
        return count ;
    }
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size() ;
        
        auto lambda = [](int a , int b)
        {
                    int c_a = f(a) ;
                    int c_b = f(b) ;

                    if(c_a == c_b)
                    {
                        return a < b ;  // ascending order -> if number of 1s are equal
                    }

                    return c_a < c_b ;
        };

        sort(arr.begin() , arr.end() , lambda) ;

        return arr ;
    }
};
