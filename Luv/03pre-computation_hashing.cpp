/*Given array of N integers, given Q queries in each query given a number X,
print count of the number in array

Constrains:
1 <= N <= 10^5
1 <= Q <= 10^5
1 <= array size <= 10^7
*/

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 10e5 + 10;
// int hash_array[N];

// int main() //time complexity = O(n)+O(q) = O(n)
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         hash_array[arr[i]]++;
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int x;
//         cin >> x;
//         cout << hash_array[x] << endl;
//     }
//     return 0;
// }

/*
given Q queries in each query given a number X,
print factorial of X in modulus of 10^9 + 7 of the number

0 <= N <= 10^5 */

// #include <bits/stdc++.h>
// using namespace std;

// // const long long M = 10e8+7;   //10e8 == 10^9  or we can write 1e9 (1000000007)
// const int M = 1e9 + 7;

// const int N = 1e5 + 10; // or 10e4 +10
// long long fact[N];

// int main()
// {
//     // cout<<M<<endl;
//     fact[0] = fact[1] = 1;
//     for (int i = 2; i < N; i++)
//     {
//         // fact[i] = fact[i - 1] * i;
//         fact[i] = (fact[i - 1] * i) % M;
//     }

//     int x;
//     cin >> x;
//     cout << fact[x] << endl;
// }

/*Prefix sum of 2D array
Given 2D array of  N*N integers. Given Q queries and in each query given a,b,c,d
print sum of square represented by (a,b) as top left point & (c,d) as top bottom right point
Constraints:-
1 <= N <= 10^3
1 <= ARRAY size <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= 10^N
*/

/*
1 2 3 2
4 2 4 7
9 5 7 2   pf(3,3) = arr(3,3) + pf(2,3) + pf (3,2) - pf(2,2)
6 3 8 1
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
long long pf[N][N];
int arr[N][N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            pf[i][j] = arr[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = pf[c][d] - pf[c][b - 1] - pf[a - 1][d] + pf[a - 1][b - 1];
        cout << sum;
    }
}   