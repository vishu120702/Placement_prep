#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // vector <int> v;
    // for(int i=0;i<v.size();i++){
    //     int temp;
    //     cin>>temp;
    //     v.insert(temp);
    // }
    // for(int i=0;i<v.size();i++){

    //     cout<<v[i]<<" ";
    // }
    cout << "12" << endl;
    char *a[10] = {};
    for (int i = 0; i < 10; i++)
    {
        cout << a[i];
    }
    return 0;
}

// int max_num(int a, int b)
// {

//     if (a > b)
//         return a;

//     return b;
// }

// int lcs(char *str1, char *str2)

// {

//     int i, j, len1, len2;

//     len1 = strlen(str1);

//     len2 = strlen(str2);

//     int arr[len1 + 1][len2 + 1];
//     for (i = 0; i <= len1; i++)

//         arr[i][0] = 0;

//     for (i = 0; i <= len2; i++)
//         arr[0][i] = 0;

//     for (i = 1; i <= len1; i++)
//     {

//         for (j = 1; j <= len2; j++)
//         {

//             if (str1[i - 1] == str2[j - 1])
//                 arr[i][j] = 1 + arr[i - 1][j - 1];
//             else
//                 arr[i][j] = max_num(arr[i - 1][j], arr[i][j - 1]);
//         }
//     }
//     return arr[len1][len2];
// }

// int main()
// {

//     char str1[] = "hbcfgmnapq", str2[] = "cbhgrsfnmq";

//     int ans=lcs(str1, str2);
//     cout<<ans<<endl;
// }