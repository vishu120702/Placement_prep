#include <bits/stdc++.h>
// #include <string/replace.hpp>
using namespace std;

// string a = "(al)";
// string g = "G";
// string o = "()";

// bool Is_this(string test)
// {
//     return (test == a || test == g || test == o);
// }

int main()
{
    // Input: command = "(al)G(al)()()G"
    // Output: "alGalooG"
    string command;
    cin >> command;

    command.replace("(al)", "al");
    command.replace("G", "G");
    command.replace("()", "o");
    cout << command << endl;
}