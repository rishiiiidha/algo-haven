//  Data Type
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dataTypeSize(string str)
    {
        //   Character, Integer, Long, Float and Double
        if (str == "Character")
        {
            return 1;
        }
        else if (str == "Integer")
        {
            return 4;
        }
        else if (str == "Long")
        {
            return 8;
        }
        else if (str == "Float")
        {
            return 4;
        }
        else if (str == "Double")
        {
            return 8;
        }
        return -1;
    }
};
