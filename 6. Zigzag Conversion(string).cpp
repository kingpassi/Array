/******************************************************************************
6. Zigzag Conversion

The string "PAYPALISHIRING" is written in a zigzag pattern on a 
given number of rows like this: (you may want to display this pattern
in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given
a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"
*******************************************************************************/
class Solution {
public:
    string convert(string s, int numRows) {
        vector<string>v(numRows,"");
        int i=0;
        int n=s.length();
        while(i<n){
            for(int j=0;j<numRows && i<n;j++){
                v[j].push_back(s[i++]);
            }
        for(int j=numRows-2;j>=1 && i<n;j--){
            v[j].push_back(s[i++]);
        }
        
        }
        string res="";
        for(auto i:v){
            res+=i;
        }
        return res;
    }
};