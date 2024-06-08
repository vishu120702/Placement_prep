#include <bits/stdc++.h>
using namespace std;

// finding duplicates and its frequency in sorted array      O(n)
// int main()
// {
//     int arr[] = {3, 6, 8, 8, 10, 10, 10, 12, 15, 15, 15, 15, 15, 15, 20};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // int h[20+1] = {0};                           //using Hash Table
//     // for (int i = 0; i < n; i++)
//     // {
//     //     h[arr[i]]++;
//     // }

//     // for (int i = 0; i < 20; i++)
//     // {
//     //     if (h[i] > 1)
//     //     {
//     //         cout << i << " " << h[i] << endl;
//     //     }
//     // }

//     // for (int i = 0; i < n - 1; i++)                    //Brutforce method
//     // {
//     //     if (arr[i] == arr[i + 1])
//     //     {
//     //         int j = i + 1;
//     //         while (arr[i] == arr[j])
//     //             j++;
//     //         cout << arr[i] << " " << j - i << endl;
//     //         i = j - 1;
//     //     }
//     // }

//     // int last_duplicate = -1, count = 1;                 //using last_duplicate
//     // for (int i = 0; i < n - 1; i++)
//     // {
//     //     if (arr[i] == arr[i + 1])
//     //     {
//     //         if (arr[i] == last_duplicate)
//     //         {
//     //             count++;
//     //         }
//     //         else
//     //         {
//     //             last_duplicate = arr[i];
//     //             count++;
//     //         }
//     //         if (arr[i + 1] != arr[i + 2])
//     //         {
//     //             cout << arr[i] << " " << count << endl;
//     //             count = 1;
//     //         }
//     //     }
//     // }
// }

// finding duplicates and its frequency in unsorted array
// int main()
// {
//     int arr[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // int h[8 + 1] = {0};                              // O(n)  -using hashing
//     // for (int i = 0; i < n; i++)
//     // {
//     //     h[arr[i]]++;
//     // }
//     // for (int i = 0; i < 9; i++)
//     // {
//     //     if (h[i] > 1)
//     //     {
//     //         cout << i << " " << h[i] << endl;
//     //     }
//     // }

//     // for (int i = 0; i < n; i++)                      // O(n*2)
//     // {
//     //     int count = 1;
//     //     if (arr[i] != -1)
//     //     {
//     //         for (int j = i + 1; j < n; j++)
//     //         {
//     //             if (arr[i] == arr[j])
//     //             {
//     //                 count++;
//     //                 arr[j] = -1;
//     //             }
//     //         }
//     //     }
//     //     if (count > 1)
//     //     {
//     //         cout << arr[i] << " " << count << endl;
//     //     }
//     // }
// }

// finding pairs with sum k (a+b=k) in unsorted array
// int main()
// {
//     int arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
//     int SUM = 10;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // cout << "{ ";                                   // O(n)   -using hashing
//     // int h[16 + 1] = {0};
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (arr[i] <= SUM)
//     //     {
//     //         int rem = SUM - arr[i];
//     //         if (h[rem] != 0)
//     //         {
//     //             cout << "(" << arr[i] << "," << rem << ") ";
//     //         }
//     //     }
//     //     h[arr[i]]++;
//     // }
//     // cout << "}";

//     // cout << "{ ";                                   // O(n*2)
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (arr[i] <= SUM)
//     //     {
//     //         int rem = SUM - arr[i];
//     //         for (int j = i + 1; j < n; j++)
//     //         {
//     //             if (arr[j] == rem)
//     //             {
//     //                 cout << "(" << arr[i] << "," << arr[j] << ") ";
//     //             }
//     //         }
//     //     }
//     // }
//     // cout << "}";
// }

// finding pairs with sum k (a+b=k) in sorted array           O(n)
// int main()
// {
//     int arr[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
//     int SUM = 10;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // int i=0,j=n-1;
//     cout << "{ ";
//     // while(i<j){
//     for (int i = 0, j = n - 1; i < j;)            //**for loop implementation
//     {
//         int temp = arr[i] + arr[j];
//         if (temp == SUM)
//         {
//             cout << "(" << arr[i] << "," << arr[j] << ") ";
//             i++;
//             j--;
//         }
//         else if (temp > SUM)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     cout << "}";
// }

// finding min & max in single scan
// int main()
// {
//     int arr[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int min = arr[0], max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         else if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     cout << min << " " << max;
// }
