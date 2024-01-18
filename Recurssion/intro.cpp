#include <bits/stdc++.h>
using namespace std;

// void f(int i,int n){   //Print 1 to N           TC=O(n)  SC=O(n)
//     if(i>n)
//         return;

//     cout<<i<<" ";
//     f(i+1,n);
// }

// void fn(int i,int n){   //Print 1 to N (using backtrack)
//     if(i<1)
//         return;

//     fn(i-1,n);
//     cout<<i<<" ";
// }

// int main(){
//     f(1,3);
//     cout<<endl;
//     fn(3,3);
// }

//Sum of first N numbers  functional way           TC=O(n)  SC=O(n)
// int sum(int n){
//     if(n==1)
//         return 1;
//     return n + sum(n-1);
// }

// int main(){
//     cout<<sum(10)<<endl;
// }

//Factorial of N                                   TC=O(n)  SC=O(n)
// int fact(int n){
//     if(n==0)
//         return 1;
//     return n * fact(n-1);
// }
// int main(){
//     cout<<fact(5)<<endl;
// }

//Reverse an array
// void swap(int x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
// }

// void revArray(int arr[],int i,int j){
//     if(i>=j)
//         return;
//     swap(arr[i],arr[j]);
//     revArray(arr,i+1,j-1);
// }

// void display(int arr[],int i,int j){
//     if(i>j)
//         return;
//     cout<<arr[i]<<" ";
//     display(arr,i+1,j);
// }

// int main(){
//     int arr[]={2,3,4,5,2};
//     revArray(arr,0,4);
//     display(arr,0,4);
// }

//To check string is palindrome
// bool toCheck(string s,int i,int j){
//     if(i>=j)
//         return true;
//     if(s[i]!=s[j])
//         return false;
//     return toCheck(s,i+1,j-1);
// }

// int main(){
//     string s="madam";
//     cout<<toCheck(s,0,s.length()-1);
// }