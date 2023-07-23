/* In this program we will be finding the longest string in given string
   */

#include<bits/stdc++.h>

using namespace std;

int isPalindrome(string str)
{
    string strx = str;
    reverse(strx.begin(),strx.end());
    if(strx == str)
    {
        return 1;
    }
    return 0;
}

int main()
{
    string s = "radar tenet malayalam  hhhhhhhhhhhhh";
    int n=s.length();
    int maxLen = 0;
    istringstream is(s);
    string word,subpali;


    while(getline(is,word,' '))
    {
        if(isPalindrome(word) && word.length()>maxLen )
        {
            maxLen = word.length();
            subpali = word;
        }
    }
    cout<< subpali ;

    return 0;
}
