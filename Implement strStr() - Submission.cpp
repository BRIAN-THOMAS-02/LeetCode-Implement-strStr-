 Implement strStr() - "https://leetcode.com/problems/implement-strstr/"
 
class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int found = haystack.find(needle);
        return found;
    }
};
