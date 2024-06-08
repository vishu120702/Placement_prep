#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string str = "Hello"; // cant be declare with 'Helllo' {considered as character}
    // str[0] = 'a';         // cant be replace with "a" {considered as string}
    // cout << "size  " << str.size() << " " << str.length() << endl;
    // cout << str << endl;

    // int t;
    // cin >> t;
    // cin.ignore(); // use while using getline() fun to get 1st input (which get skiped)
    // while (t--)
    // {
    //     string s;
    //     getline(cin, s);
    //     cout << s << endl;
    // }

    // // revrse string & palindrome
    // string str;
    // cin >> str;
    // string str_rev;
    // for (int i = str.size() - 1; i >= 0; i--)
    // {
    //     str_rev.push_back(str[i]);
    // }
    // cout << str_rev << endl;
    // if (str == str_rev)
    // {
    //     cout << "String is Palindrome" << endl;
    // }

    // // only to check palindrome
    // string str;
    // cin >> str;
    // bool val=false;
    // for (int i = 0; i < str.size() / 2; i++)
    // {
    //     if (str[i] != str[str.size() - 1 - i])
    //         val = true;
    // }
    // if (val)
    //     cout << "NO" << endl;
    // else
    //     cout << "YES" << endl;

    // // to get int form string with large size input
    string s = "123456789876543456783456789876543456";
    int last_digit = s[s.size() - 1] - '0';
    cout << last_digit << endl;

    // return 0;
}