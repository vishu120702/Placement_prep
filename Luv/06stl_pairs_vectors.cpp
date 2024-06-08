// push_back(); pop_back(); are O(1) operations

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// pair<int, string> p;
// p = make_pair(10, "ten");
// p = {10, "ten"};
// pair<int, string> p1 = p;  // changes doesent reflect    // we can copy another pair just by assigning it. (no need to iterate through for loop and assign 1 by 1)(pass by value)
// pair<int, string> &p1 = p; // changes reflects           // here we are making copy but change in p1 reflects in p (pass by referance)
// cout << &p1 << endl
//      << &p << endl;
// p1.first = 223;
// cout << p.first << " " << p.second << endl;
// int a[] = {1, 2, 3};
// int b[] = {5, 10, 15};
// pair<int, int> p_arr[3];
// for (int i = 0; i < 3; i++)
// {
//     p_arr[i] = {a[i], b[i]};             //{(1,5), (2,10), (3,15)}
// }
// swap(p_arr[0], p_arr[1]);                //{(2,10), (1,5), (3,15)}
// for (int i = 0; i < 3; i++)
// {
//     cout << p_arr[i].first << " " << p_arr[i].second << endl;
// }
// pair<string, int> date;
// cin>>date.first;                         //date.second stores 0 as default
// // date.second=2023;
// cout << date.first << " " << date.second << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void printVec(vector<int> v) //&v also make changes in main vector as it get "pass by address"
// {                            //&v actual vector get passed #imp
//     // v.push_back(10);
//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i] << " ";
//     // }
//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
//     cout << endl;
// }

// void printVec2(vector<pair<int, string>> v)
// {
//     for (auto x : v)
//     {
//         cout << "{" << x.first << " " << x.second << "} ";
//     }
//     cout << endl;
// }

// int main()
// {
    // vector<int> v;         // only define
    // vector<int> v1(10);    // Define vector of size 10 and initialized with 0
    // vector<int> v2(5, 12); // Initialize all 5 eements with value 12
    // vector<int> vec = {2, 4, 556, 67, 834, 678, 9, 342, 56, 3234565};
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    // printVec(v);
    // cout << "v1 Size: " << v1.size() << endl;
    // printVec(v1);
    // v1.push_back(87);
    // cout << "v1 Size: " << v1.size() << endl;
    // printVec(v1);
    // cout << "v2 Size: " << v2.size() << endl;
    // printVec(v2);
    // printVec(vec);

    // vector<pair<int, string>> vp;
    // vp.push_back({12, "July"});
    // cout << vp[0].first << " " << vp[0].second << endl;

    // vector<pair<int, pair<string, int>>> bDay;
    // bDay.push_back({12, {"July", 2002}}); // O(1)
    // cout << bDay[0].first << " " << bDay[0].second.first << " " << bDay[0].second.second << endl;

    // vector<int> vec = {2, 4, 556, 67, 834, 678, 9, 342, 56, 3234565};
    // vec.pop_back(); // O(1)
    // cout << "vec Size: " << vec.size() << endl;
    // printVec(vec);

    // vector<int> v3 = vec;  // makes exact copy of "vec" vector but changes doesn't reflect in "vec"
    // // vector<int> &v3 = vec; // changes get reflected in "vec" also
    // v3.push_back(1e9 + 7);
    // printVec(v3);
    // printVec(vec);

    // vector<pair<int, string>> vv;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     string b;
    //     cin >> a >> b;
    //     vv.push_back({a, b});
    // }
    // printVec2(vv);

    // return 0;
// }
