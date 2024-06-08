// cout<<typeid(variable_name).name() << endl;
#include <bits/stdc++.h>
using namespace std;

// comparing strings                      O(n)
// int main()
// {
//     string str1 = "pointer";
//     string str2 = "pointing";

//     for (int i = 0, j = 0; str1[i] != '\0', str2[j] != '\0'; i++, j++)
//     {
//         if (str1[i] != str2[j])
//         {
//             cout << "Strings are different.";
//             if (str1.size() < str2.size())
//             {
//                 cout << " & string 2 is greater in length.";
//             }
//             else if (str1.size() > str2.size())
//             {
//                 cout << " & string 1 is greater in length.";
//             }
//             break;
//         }
//     }
// }

// finding duplicates
// int main()
// {
//     string a = "finding";
//     // a[1]='o';
//     // cout<<a;

//     // int H = 0, x = 1;                                   // O(n) -using bitwise operations
//     // for (int i = 0; i < a.length(); i++)
//     // {
//     //     x = x << (a[i] - 97);
//     //     if ((x & H )> 0)
//     //     {
//     //         cout << a[i] << " ";
//     //     }
//     //     else
//     //     {
//     //         H = x | H;
//     //     }
//     // }

//     // int h[26] = {0};                                    // O(n) -using hashing
//     // for (int i = 0; i < a.length(); i++)
//     // {
//     //     h[a[i] - 97]++;
//     // }
//     // for (int i = 0; i < 26; i++)
//     // {
//     //     if (h[i] > 1)
//     //     {
//     //         cout << char(i + 97) << " " << h[i] << endl;
//     //     }
//     // }

//     // char last_duplicate = 'z';                          //O(n*2)
//     // for (int i = 0; i < a.length(); i++)
//     // {
//     //     int count = 1;
//     //     if (a[i] != 'x')
//     //     {
//     //         for (int j = i + 1; j < a.length(); j++)
//     //         {
//     //             if (a[i] == a[j])
//     //             {
//     //                 if (a[i] == last_duplicate)
//     //                 {
//     //                     count++;
//     //                     a[j] = 'x';
//     //                 }
//     //                 else
//     //                 {
//     //                     last_duplicate = a[i];
//     //                     count++;
//     //                     a[j] = 'x';
//     //                 }
//     //             }
//     //         }
//     //     }
//     //     if (count > 1)
//     //     {
//     //         cout << a[i] << " " << count << endl;
//     //     }
//     // }
// }

// checking if 2 strings are anagram (2 strings made with same alphabets)  // O(n*2)
// int main()
// {
//     string a = "decimal";
//     string b = "medical";

//     if (a.length() == b.length())
//     {
//         int h[26] = {0};
//         for (int i = 0; i < a.length(); i++)
//         {
//             h[a[i] - 97]++;
//         }
//         for (int i = 0; i < b.length(); i++)
//         {
//             h[b[i] - 97]--;
//         }
//         bool flag = true;
//         for (int i = 0; i < 26; i++)
//         {
//             if (h[i] != 0)
//             {
//                 cout << "2 strings are not anagram" << endl;
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag)
//         {
//             cout << "2 strings are anagram" << endl;
//         }
//     }
//     else
//     {
//         cout << "2 strings are not anagram" << endl;
//     }
// }

// permutation of string                           //recursion,backtracking,bruteforce
void permutation(string s, int k)
{
    static int A[10] = {0};
    static char Res[10];
    if (s[k] == '\0')
    {
        Res[k] = '\0';
        cout << Res << " ";
    }
    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                Res[k] = s[i];
                A[i] = 1;
                permutation(s, k + 1);
                A[i] = 0;
            }
        }
    }
}

void perm(string s, int l, int h) // using swaping technique and recurssion
{
    if (l == h)
    {
        cout << s << " ";
    }
    else
    {
        for (int i = l; i <= h; i++)
        {
            swap(s[i], s[l]);
            perm(s, l + 1, h); //recursion
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    string s = "ABC";
    perm(s,0,2);
    // permutation(s, 0);.
}