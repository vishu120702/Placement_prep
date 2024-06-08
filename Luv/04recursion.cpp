// #include <bits/stdc++.h>
// using namespace std;

// void func(int n)
// {
//     if (n == 0)
//         return;
//     // cout << n << endl;
//     func(n - 1);
//     cout << n << endl;
// }

// int main()
// {
//     func(5);
// }

// Factorial of a number using recursion
//  #include <bits/stdc++.h>
//  using namespace std;

// int fact(int n)
// {
//     if (n == 0)
//         return 1;
//     return fact(n - 1) * n;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << fact(n) << endl;
//     return 0;
// }

// Sum of element in array using array upto index n
// #include <bits/stdc++.h>
// using namespace std;

// int asum(int arr[], int n)
// {
//     if (n == 0)
//         return arr[0];
//     return asum(arr, n - 1) + arr[n];
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << asum(arr, n);
// }

// Digit sum of number.
// #include <bits/stdc++.h>
// using namespace std;

// int digit_sum(int n)
// {
//     if (n == 0)
//         return 0;
//     // cout << n << " " << n / 10 << " " << n % 10 << endl;
//     return digit_sum(n / 10) + (n % 10);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << digit_sum(n) << endl;
//     // cout << n;
// }