#include <iostream>
#include<vector>
using namespace std;


class Solution {
    int RomanNums(unsigned char ch)
    {
        switch (ch) 
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
public:
    int romanToInt(string_view s)
    {
        int sum = 0;

        for(int i = 0; i < s.length(); ++i)
        {
            if(RomanNums(s[i]) < RomanNums(s[i+1]))
            {
                sum += RomanNums(s[i+1]) - RomanNums(s[i]);
                ++i;
            }
            else sum += RomanNums(s[i]);
        }
        return sum;
    }
};