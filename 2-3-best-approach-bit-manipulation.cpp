// https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size() ;

        int count_zero , count_one ;
        int res = 0 ;

        for(int k = 0 ; k <= 31 ; ++k)
        {
            int temp = (1 << k) ;

            count_zero = 0 ;
            count_one = 0 ;

            for(int &it : nums)
            {
                if( (it & temp) == 0)
                {
                    count_zero++ ;
                }
                else
                {
                    count_one++ ;
                }
            }

            if(count_one % 3 == 1)
            {
                res = (res | (1 << k)) ;
            }
        }
        return res ;
    }
};
