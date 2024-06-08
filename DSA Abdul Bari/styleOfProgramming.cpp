#include <bits/stdc++.h>
using namespace std;

class Rectangle // contains data member abd functions.
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) // constructor
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void setLength(int l)
    {
        length = l;
    }
    int getLength()
    {
        return this->length;
    }
    ~Rectangle()  // destructor
    {
        cout << "Destructor called" << endl;
    }
}; // end of class.

int main()
{
    Rectangle r(10, 5); // object
    cout << "area :" << r.area() << endl;
    r.setLength(20);
    // cout<<r.length;                              //error: 'int Rectangle::length' is private within this context
    cout << "Length :" << r.getLength() << endl;    //use getter setter to acces private variables
    return 0;
}