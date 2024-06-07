// #include <bits/stdc++.h>
// // #include <string/replace.hpp>
// using namespace std;

// // string a = "(al)";
// // string g = "G";
// // string o = "()";

// // bool Is_this(string test)
// // {
// //     return (test == a || test == g || test == o);
// // }

// int main()
// {
//     // Input: command = "(al)G(al)()()G"
//     // Output: "alGalooG"
//     string command;
//     cin >> command;

//     command.replace("(al)", "al");
//     command.replace("G", "G");
//     command.replace("()", "o");
//     cout << command << endl;
// }

// #include <iostream>                           //qn on OOP
// using namespace std;
// class ClassA
// {
// public:
//     ClassA(int ii = 0) : i(ii) {}
//     void show() { cout << "i = " << i << endl; }
//     // operator ClassB();
// private:
//     int i;
// };
// class ClassB
// {
// public:
//     ClassB(){
//         this-> x=0;
//     }
//     ClassB(int xx) : x(xx) {}
//     operator ClassA() { return ClassA(x); } //conversion from 'ClassB' to non-scalar type 'ClassA'
// private:                                                          △
//     int x;                                                        |
// };                                                                |
// void g(ClassA a)                                                  |
// {                                                                 |
//     a.show();                                                     |
// }                                                                 |
// int main()                                                        |
// {                                                                 |
//     ClassB b(10);                                                 |
//     // ClassA a = b;                                              |
//     g(b);   //ClassA a = b;  which is get done by operator overloading (line no. 45)
//     g(20);
//     getchar();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// string Solution::solve(string A) {
// int main(){
//     int cnt=0;
//     string A;
//     getline(cin,A);
//     // char c;
//     // cout<<typeid(A[0]).name() << endl;
//     int n=A.size();
//     char check=' ';
//     for(int i=n-1;i>0;i++){
//         if(A[i]==check){
//             i++;
//          // continue;
//         }
//         cnt++;
//         if(A[i]==check){
//             cout<<A.substr(i+1,cnt-1)<<" ";
//         }
//     }
// }
// }

int main()
{
    string str = "hello world infinity";
    bool flag=false;
    int n = str.size();
    int cp = 0;
    int count = 0;
    for (int i = n - 1; i > 0; i--)
    {
        char ch = str[i];
        count++;

        if (isblank(ch))    //or isspace() can also used.
        {
            
            if(flag){
                cout<<" ";
            }
            
            cout << str.substr(i + 1, count);
            cp = i;
            count = 0;
            flag=true;
        }
    }
    cout << str.substr(0, cp);
    return 0;
}
