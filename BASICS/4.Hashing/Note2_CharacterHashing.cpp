#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "ababcb";

    // We are Using ASCII code: https://www.ascii-code.com/characters/ascii-alphabet-characters
    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        // cout<<i<<":"<<s[i]<<endl;

        /*
        i=0:
            s[i] = s[0] = 'a' == 97(ASCII code),
            so:
                hash[s[0]] = hash[97]...
        */

        hash[s[i]]++;
    }
    // hash['a'] = hash[97] = 2.
    cout<<hash['a']<<endl;







    // IF USING ONLY SMALLCAPS
    
    int hashh[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        // cout<<i<<":"<<s[i]<<endl;

        /*
        i=0:
            s[i] = s[0] = 'a' == 97(ASCII code),
            so:
                hash[s[0] - 'a'] = hash[97 - 97] = hash[0]...
        */

        hashh[s[i] - 'a']++;
    }
    char c = 'b';
    cout<<hashh[c - 'a'];


    return 0;
}