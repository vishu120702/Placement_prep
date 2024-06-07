#include <bits/stdc++.h>
using namespace std;

// void f(int i, int n)
// { // Print 1 to N           TC=O(n)  SC=O(n)
//     if (i > n)
//         return;

//     cout << i << " ";
//     f(i + 1, n);
// }

// void fn(int i, int n)
// { // Print 1 to N (using backtrack)
//     if (i < 1)
//         return;

//     fn(i - 1, n);
//     cout << i << " ";
// }

// int main()
// {
//     f(1, 3);
//     cout << endl;
//     fn(3, 3);
// }

// // Sum of first N numbers  functional way           TC=O(n)  SC=O(n)
// int sum(int n)
// {
//     if (n == 1)
//         return 1;
//     return n + sum(n - 1);
// }

// int main()
// {
//     cout << sum(10) << endl;
// }

// // Factorial of N                                   TC=O(n)  SC=O(n)
// int fact(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * fact(n - 1);
// }
// int main()
// {
//     cout << fact(5) << endl;
// }

// // Reverse an array
// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// void revArray(int arr[], int i, int j)
// {
//     if (i >= j)
//         return;
//     swap(arr[i], arr[j]);
//     revArray(arr, i + 1, j - 1);
// }

// void display(int arr[], int i, int j)
// {
//     if (i > j)
//         return;
//     cout << arr[i] << " ";
//     display(arr, i + 1, j);
// }

// int main()
// {
//     int arr[] = {2, 3, 4, 5, 2};
//     revArray(arr, 0, 4);
//     display(arr, 0, 4);
// }

// // To check string is palindrome
// bool toCheck(string s, int i, int j)
// {
//     if (i >= j)
//         return true;
//     if (s[i] != s[j])
//         return false;
//     return toCheck(s, i + 1, j - 1);
// }

// int main()
// {
//     string s = "madam";
//     cout << toCheck(s, 0, s.length() - 1);
// }

// // Multiple recursion calls -nth Fibonacci no.
// int fibo(int n)
// {
//     if (n <= 1)
//         return n;
//     int last = fibo(n - 1);
//     int slast = fibo(n - 2);
//     return last + slast;
// }

// int main()
// {
//     cout << fibo(9);
// }

// // Subsequence
// void print(vector<int> v)
// {
//     int n = v.size();
//     cout << "{";
//     for (int i = 0; i < n; i++)
//     {
//         if (i == n - 1)
//         {
//             cout << v[i];
//             break;                        //terminates the loop
//         }
//         cout << v[i] << " ";
//     }
//     cout << "}" << endl;
// }

// void f(int i, int arr[], vector<int> &v)
// {
//     if (i >= 3)
//     {
//         // for(auto it:v){
//         //     cout<<it<<" ";
//         // }
//         // cout<<endl;
//         print(v);
//         // return;                           //terminates the function
//     }
//     else
//     {
//         //take or pick perticular index element into subsequence
//         v.push_back(arr[i]);
//         f(i + 1, arr, v);
//         //not take or not pick perticular index element into subsequence
//         v.pop_back();
//         f(i + 1, arr, v);
//     }
// }

// int main()
// {
//     int arr[] = {3, 1, 2};
//     vector<int> v;
//     f(0, arr, v);
// }

// // 1 to n
// int cnt = 0;
// void fn(int n)
// {
//     if (cnt >= n)
//         return;
//     printf("%d ", cnt);
//     cnt++;
//     fn(n);
// }
// int main()
// {
//     int n = 5;
//     fn(n);
// }

// // Sum of subsequence
// void f(int i, int arr[], vector<int> &v, int sum)
// {
//     if (i >= 3)
//     {
//         if (sum == 2)
//         {
//             for (auto it : v)
//             {
//                 cout << it << " ";
//             }
//             cout << endl;
//         }
//         return; // terminates the function
//     }

//     v.push_back(arr[i]);
//     sum += arr[i];  //added element of index i
//     f(i + 1, arr, v, sum);

//     v.pop_back();
//     sum -= arr[i];  //subtracted element of index i
//     f(i + 1, arr, v, sum);
// }

// int main()
// {
//     int arr[] = {1, 2, 1};
//     // int sum = 2;
//     vector<int> v;
//     f(0, arr, v, 0);
// }

// // Sum of subsequence (condition: only one answer to print)
// bool flag = false;
// void f(int i, int arr[], vector<int> &v, int sum)
// {
//     if (i >= 3)
//     {
//         if (sum == 2)
//         {
//             for (auto it : v)
//             {
//                 cout << it << " ";
//             }
//             flag = true; // codition for only one answer
//             cout << endl;
//         }
//         return; // terminates the function
//     }

//     v.push_back(arr[i]); // take
//     sum += arr[i];       // added element of index i
//     if (!flag)
//     {
//         f(i + 1, arr, v, sum);
//     }

//     v.pop_back();  // non-take
//     sum -= arr[i]; // subtracted element of index i
//     if (!flag)
//     {
//         f(i + 1, arr, v, sum);
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 1};
//     // int sum = 2;
//     vector<int> v;
//     f(0, arr, v, 0);
// }

// // count the subsequences with sum k                    same code can be done using return l+r;//use for multiple recurssion call
// int cnt = 0;
// void f(int i, int arr[], int sum)
// {
//     // if(sum>3) return;   //strictly use if elements are positive   -to decrease the time complexity
//     if (i >= 5)
//     {
//         if (sum == 3)
//         {
//             cnt++;
//         }
//         return; // terminates the function
//     }

//     sum += arr[i]; // added element of index i
//     f(i + 1, arr, sum);

//     sum -= arr[i]; // subtracted element of index i
//     f(i + 1, arr, sum);
// }

// int main()
// {
//     int arr[] = {1, 2, 1, 1, 3};
//     // int sum = 3;
//     vector<int> v;
//     f(0, arr, 0);
//     cout << cnt;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    int k;
// 	    cin>>n>>k;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    int x=100;
// 	    for(int i=0;i<n;i++){
// 	        int rem=arr[i];
// 	        int temp;
// 	        while(rem){
// 	            rem=rem-k;
// 	            if(rem>0){
// 	                temp=rem;
// 	            }
// 	        }
// 	        if(x>temp){
// 	            x=temp;
// 	        }
// 	    }
// 	    cout<<x<<endl;
// 	}
// 	return 0;
// }

// int main()
// {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         int tp = n + q;
//         int arr[tp];
//         int ar[q];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             cin >> ar[i];
//         }

//         int h[26] = {0}; // O(n) -using hashing
//         for (int i = 0; i < a.length(); i++)
//         {
//             h[a[i] - 97]++;
//         }
//         for (int i = 0; i < 26; i++)
//         {
//             if (h[i] > 1)
//             {
//                 cout << char(i + 97) << " " << h[i] << endl;
//             }
//         }
//     }
//     return 0;
// }