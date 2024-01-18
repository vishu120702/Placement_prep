// 01 Reverse the array
// #include <bits/stdc++.h>
// using namespace std;

// void printArr(int arr[],int n)
// {
//     for (int i=0;i<n;i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void revArray(int arr[],int n)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[n - 1 - i];
//         arr[n - 1 - i] = temp;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         revArray(arr, n);
//         printArr(arr, n);
//     }
// }

// 02 Find the maximum and minimum element in an array
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         // sort(arr, arr + n);
//         // int maxn = arr[n - 1];
//         // int minn = arr[0];
//         // cout << max << " " << min << endl;
//         int maxele = arr[0];
//         int minele = arr[0];
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] > maxele)
//                 maxele = arr[i];
//             if (arr[i] < minele)
//                 minele = arr[i];
//         }
//         cout << maxele << " " << minele << endl;
//     }
// }

// 03 Find the "Kth" max and min element of an array
// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     // arr : given array
//     // l : starting index of the array i.e 0
//     // r : ending index of the array i.e size-1
//     // k : find kth smallest element and return using this function
//     int kthSmallest(int arr[], int l, int r, int k) {
//         //code here
//         sort(arr,arr+(r+1));
//         return arr[k-1];
//     }
// };

// int main()
// {
//     int test_case;
//     cin>>test_case;
//     while(test_case--)
//     {
//         int number_of_elements;
//         cin>>number_of_elements;
//         int a[number_of_elements];
//         for(int i=0;i<number_of_elements;i++)
//             cin>>a[i];
//         int k;
//         cin>>k;
//         Solution ob;
//         cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
//     }
//     return 0;
// }

// 04 Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
// #include<bits/stdc++.h>
// using namespace std;

// class Solution
// {
//     public:
//     void sort012(int a[], int n)
//     {
//         // code here
//         int z,o,t;
//         z=o=t=0;
//         for(int i=0;i<n;i++){
//             if(a[i]==0)
//                 z++;
//             else if(a[i]==1)
//                 o++;
//             else
//                 t++;
//         }
//         for(int i=0;i<z;i++){
//             a[i]=0;
//         }
//         for(int i=z;i<z+o;i++){
//             a[i]=1;
//         }
//         for(int i=z+o;i<n;i++){
//             a[i]=2;
//         }
//     }

// };

// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >>n;
//         int a[n];
//         for(int i=0;i<n;i++){
//             cin >> a[i];
//         }
//         Solution ob;
//         ob.sort012(a, n);
//         for(int i=0;i<n;i++){
//             cout << a[i]  << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 05 Move all the negative elements to one side of the array
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int arr[n];
//         int nt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] < 0)
//                 nt++;
//         }
//         int l = 0;
//         int r = nt;
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] < 0)
//             {
//                 // int temp = arr[l];
//                 // arr[l] = arr[i];
//                 // arr[i] = temp;
//                 swap(arr[l], arr[i]);
//                 l++;
//             }/             else
//             {
//                 int tp = arr[r];
//             }
//         }
//         for (auto x : arr)
//         {
//             cout << x << " ";
//         }
//     }
// }

// 06 Find the Union and Intersection of the two sorted arrays.
// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     //Function to return the count of number of elements in union of two arrays.
//     int doUnion(int a[], int n, int b[], int m)  {
//         //code here
//         set<int> s;
//         for(int i=0;i<n;i++){
//             s.insert(a[i]);
//         }
//         for(int i=0;i<m;i++){
//             s.insert(b[i]);
//         }
//         int count = s.size();
//         return count;
//     }
// };

// int main() {
// 	int t;
// 	cin >> t;
// 	while(t--){
// 	    int n, m;
// 	    cin >> n >> m;
// 	    int a[n], b[m];
// 	    for(int i = 0;i<n;i++)
// 	       cin >> a[i];
// 	    for(int i = 0;i<m;i++)
// 	       cin >> b[i];
// 	    Solution ob;
// 	    cout << ob.doUnion(a, n, b, m) << endl;
// 	}
// 	return 0;
// }

// 07 Write a program to cyclically rotate an array by one.
// #include <bits/stdc++.h>
// using namespace std;
// void rotate(int arr[], int n);

// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--)
//     {
//         int n;
//         scanf("%d",&n);
//         int a[n] , i;
//         for(i=0;i<n;i++)
//         scanf("%d",&a[i]);
//         rotate(a, n);
//         for (i = 0; i < n; i++)
//             printf("%d ", a[i]);
//         printf("\n");
//     }
//         return 0;
// }

// void rotate(int arr[], int n)
// {
//     for(int i=n-1;i>0;i--){
//         swap(arr[i-1],arr[i]);
//     }
// }

// 08 find Largest sum contiguous Subarray [V. IMP] --------------------------------------------------------------------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     // arr: input array
//     // n: size of array
//     //Function to find the sum of contiguous subarray with maximum sum.
//     long long maxSubarraySum(int arr[], int n){
        
//         // Your code here
//         long long maxsum = INT_MIN , tillsum = 0;
//         for(int i=0;i<n;i++){
//             tillsum = tillsum + arr[i];
//             if(maxsum < tillsum){
//                 maxsum = tillsum;
//             }
//             if(tillsum < 0){
//                 tillsum = 0;
//             }
//         }
//         return maxsum;
//     }
// };

// int main()
// {
//     int t,n;
    
//     cin>>t; //input testcases
//     while(t--) //while testcases exist
//     {
        
//         cin>>n; //input size of array
        
//         int a[n];
        
//         for(int i=0;i<n;i++)
//             cin>>a[i]; //inputting elements of array
            
//         Solution ob;
        
//         cout << ob.maxSubarraySum(a, n) << endl;
//     }
// }


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr + n);
        int maxE = arr[n-1];
        int minE = arr[0];
        int diff = maxE - minE;
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                minE = min(arr[0]+k,arr[i]-k);
                maxE = max(arr[i-1]+k,arr[n-1]-k);
                // int ans = min(diff,maxE - minE);
                cout<<diff<<endl;
                cout<<maxE-minE;
            }
        }
        // return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        // cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends