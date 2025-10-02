#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> freq;
        for (char c : s) freq[c]++; 
        
        string result;
        
        // append characters that appear in order
        for(char c : order){
            if (freq.count(c)){
                result.append(freq[c], c);
                freq.erase(c);
            }
        }
       
        // append leftover characters not in order
        for (auto &p : freq){
            result.append(p.second, p.first);
        }
        
         return result;
    }
};
