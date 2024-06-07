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

#include <iostream>
using namespace std;
class ClassA
{
public:
    ClassA(int ii = 0) : i(ii) {}
    void show() { cout << "i = " << i << endl; }
    // operator ClassB();
private:
    int i;
};
class ClassB
{
public:
    ClassB(){
        this-> x=0;
    }
    ClassB(int xx) : x(xx) {}
    operator ClassA() { return ClassA(x); } //conversion from 'ClassB' to non-scalar type 'ClassA'

private:
    int x;
};
void g(ClassA a)
{
    a.show();
}
int main()
{
    ClassB b(10);
    // ClassA a = b;
    g(b);   //ClassA a = b;  which is get done by operator overloading (line no. 42)
    g(20);
    getchar();
    return 0;
}