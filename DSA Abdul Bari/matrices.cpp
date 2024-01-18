#include <bits/stdc++.h>
using namespace std;

// // diagonal matrics                             //  _       _
// class diagonal                                  // | 4  0  0 |
// {                                               // | 0  8  0 |     }  [4, 8, 9]     size= n
// private:                                        // | 0  0  9 |
//     int n;                                      //  ￣      ￣
//     int *A;
// public:
//     diagonal(){
//         n=2;
//         A=new int[2];
//     }
//     diagonal(int n){
//         this->n=n;
//         A=new int[n];     //total need of space
//     };
//     void set(int i,int j,int x);
//     int get(int i,int j);
//     void display();
//     void sddisplay();  //secondary digonal display
//     ~diagonal();
// };

// void diagonal::set(int i,int j,int x){
//     if(i==j){
//         A[i-1]=x;
//     }
// }
// int diagonal::get(int i,int j){
//     if(i==j){
//         return A[i-1];             //mathematical matrics index start from 1
//     }
//     else{
//         return 0;
//     }
// }
// void diagonal::display(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 cout<<A[i]<<" ";
//             }
//             else{
//                 cout<<0<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// void diagonal::sddisplay(){
//     for(int i=0;i<n;i++){
//         for(int j=n-1;j>=0;j--){
//             if(i+j==n-1){
//                 cout<<get(i+1,j+1)<<" ";    //we use matrics starting from 1
//             }
//         }
//     }
// }

// diagonal::~diagonal()
// {
//     delete []A;
// }

// int main(){
//     diagonal d(3);
//     d.set(1,1,4);
//     d.set(2,2,8);
//     d.set(3,3,9);
//     d.set(1,2,0);

//     cout<<d.get(3,2)<<endl;
//     cout<<d.get(3,3)<<endl;

//     d.display();

//     cout<<endl;
//     d.sddisplay();

//     return 0;
// }

// // lower tringular matrics (row-major mapping)  //  _       _      condition for non-zero i>=j
// class Lower_tri                                 // | 4  0  0 |
// {                                               // | 3  8  0 |     }  [4,| 3, 8,| 7, 1, 9]    size= n*(n+1)/2
// private:                                        // | 7  1  9 |
//     int n;                                      //  ￣      ￣
//     int *A;
// public:
//     Lower_tri(){
//         n=2;
//         A=new int[3];
//     }
//     Lower_tri(int n){
//         this->n=n;
//         A=new int[n*(n+1)/2];     //total need of space
//     };
//     void set(int i,int j,int x);
//     int get(int i,int j);
//     void display();
//     ~Lower_tri();
// };

// void Lower_tri::set(int i,int j,int x){
//     if(i>=j){
//         A[((i-1)*i/2)+(j-1)]=x;                       //require index of M[i,j]  is A[((i-1)*i/2) + (j-1)]
//     }
// }
// int Lower_tri::get(int i,int j){
//     if(i>=j){
//         return A[((i-1)*i/2)+(j-1)];
//     }
//     else{
//         return 0;
//     }
// }
// void Lower_tri::display(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i>=j){
//                 cout<<get(i+1,j+1)<<" ";  //mathematical matrics index start from 1
//             }
//             else{
//                 cout<<0<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Lower_tri::~Lower_tri()
// {
//     delete []A;
// }

// int main(){
//     Lower_tri d(3);
//     d.set(1,1,4);
//     d.set(2,2,8);
//     d.set(3,3,9);
//     d.set(2,1,3);
//     d.set(3,1,7);
//     d.set(3,2,1);

//     cout<<d.get(3,2)<<endl;
//     cout<<d.get(3,3)<<endl;

//     d.display();

//     return 0;
// }

// // upper tringular matrics (row-major mapping)  //  _       _      condition for non-zero i<=j
// class Upper_tri                                 // | 4  6  2 |
// {                                               // | 0  8  5 |     }  [4, 6, 2,| 8, 5,| 9]    size= n*(n+1)/2
// private:                                        // | 0  0  9 |
//     int n;                                      //  ￣      ￣
//     int *A;
// public:
//     Upper_tri(){
//         n=2;
//         A=new int[3];
//     }
//     Upper_tri(int n){
//         this->n=n;
//         A=new int[n*(n+1)/2];     //total need of space
//     };
//     void set(int i,int j,int x);
//     int get(int i,int j);
//     void display();
//     ~Upper_tri();
// };

// void Upper_tri::set(int i,int j,int x){
//     if(i<=j){
//         A[(n*(i-1)-(i-2)*(i-1)/2)+(j-1)]=x;                       //require index of M[i,j]  is A[(n*(i-1)-(i-2)*(i-1)/2)+(j-1)]
//     }
// }
// int Upper_tri::get(int i,int j){
//     if(i<=j){
//         return A[(n*(i-1)-(i-2)*(i-1)/2)+(j-1)];
//     }
//     else{
//         return 0;
//     }
// }
// void Upper_tri::display(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i<=j){
//                 cout<<get(i+1,j+1)<<" ";  //mathematical matrics index start from 1
//             }
//             else{
//                 cout<<0<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Upper_tri::~Upper_tri()
// {
//     delete []A;
// }

// int main(){
//     Upper_tri d(3);
//     d.set(1,1,4);
//     d.set(2,2,8);
//     d.set(3,3,9);
//     d.set(1,2,6);
//     d.set(1,3,2);
//     d.set(2,3,5);

//     cout<<d.get(1,2)<<endl;
//     cout<<d.get(3,3)<<endl;

//     d.display();

//     return 0;
// }

// // symmetric matrics (row-major mapping)        //  _       _      condition for non-zero i>=j
// class Lower_tri     //using lower tringular     // | 4  6  2 |
// {                                               // | 6  8  5 |     }  [4,| 6, 8,| 2, 5, 9]    size= n*(n+1)/2
// private:                                        // | 2  5  9 |
//     int n;                                      //  ￣      ￣
//     int *A;
// public:
//     Lower_tri(){
//         n=2;
//         A=new int[3];
//     }
//     Lower_tri(int n){
//         this->n=n;
//         A=new int[n*(n+1)/2];     //total need of space
//     };
//     void set(int i,int j,int x);
//     int get(int i,int j);
//     void display();
//     ~Lower_tri();
// };

// void Lower_tri::set(int i,int j,int x){
//     if(i>=j){
//         A[(i-1)*i/2+(j-1)]=x;                       //require index of M[i,j]  is A[(i-1)*i/2+(j-1)]
//     }
// }
// int Lower_tri::get(int i,int j){
//     if(i>=j){
//         return A[(i-1)*i/2+(j-1)];
//     }
//     else{
//         return get(j,i);   //use of recursion
//     }
// }
// void Lower_tri::display(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i<=j){
//                 cout<<get(i+1,j+1)<<" ";  //mathematical matrics index start from 1
//             }
//             else{
//                 cout<<get(j+1,i+1)<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Lower_tri::~Lower_tri()
// {
//     delete []A;
// }

// int main(){
//     Lower_tri d(3);
//     d.set(1,1,4);
//     d.set(2,2,8);
//     d.set(3,3,9);
//     d.set(1,2,6);
//     d.set(1,3,2);
//     d.set(2,3,5);
//     d.set(2,1,6);
//     d.set(3,1,2);
//     d.set(3,2,5);

//     cout<<d.get(1,2)<<endl;
//     cout<<d.get(2,3)<<endl;

//     d.display();

//     return 0;
// }

// // tridigonal matrics (row-major mapping)       //  _             _      condition for non-zero |i-j| < 1
// class Tridigonal     //using lower tringular    // | 4  6  0  0  0 |
// {                                               // | 1  8  5  0  0 |     }  [1, 2, 4, 7,| 4, 8, 9, 2, 3,| 6, 5, 6, 8]    size= 3*n-2
// private:                                        // | 0  2  9  6  0 |
//     int n;                                      // | 0  0  4  2  8 |
//     int *A;                                     // | 0  0  0  7  3 |
// public:                                         //  ￣            ￣
//     Tridigonal(){
//         n=2;
//         A=new int[4];
//     }
//     Tridigonal(int n){
//         this->n=n;
//         A=new int[3*n-2];     //total need of space
//     };
//     void set(int i,int j,int x);
//     int get(int i,int j);
//     void display();
//     ~Tridigonal();
// };

// void Tridigonal::set(int i,int j,int x){
//     if(i-j==1){
//         A[i-2]=x;                       //require indexs of M[i,j]
//     }
//     else if(i-j==0){
//         A[(n-1)+(i-1)]=x;
//     }
//     else if(i-j==-1){
//         A[(2*n-1)+(i-1)]=x;
//     }
// }
// int Tridigonal::get(int i,int j){
//     if(i-j==1){
//         return A[i-2];
//     }
//     else if(i-j==0){
//         return A[(n-1)+(i-1)];
//     }
//     else if(i-j==-1){
//         return A[(2*n-1)+(i-1)];
//     }
//     else{
//         return 0;
//     }
// }
// void Tridigonal::display(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<get(i+1,j+1)<<" ";  //mathematical matrics index start from 1
//         }
//         cout<<endl;
//     }
// }

// Tridigonal::~Tridigonal()
// {
//     delete []A;
// }

// int main(){
//     Tridigonal d(5);
//     d.set(1,1,4);
//     d.set(2,2,8);
//     d.set(3,3,9);
//     d.set(4,4,2);
//     d.set(5,5,3);
//     d.set(1,2,6);
//     d.set(2,3,5);
//     d.set(3,4,6);
//     d.set(4,5,8);
//     d.set(2,1,1);
//     d.set(3,2,2);
//     d.set(4,3,4);
//     d.set(5,4,7);

//     cout<<d.get(4,3)<<endl;
//     cout<<d.get(4,4)<<endl;
//     cout<<d.get(5,4)<<endl;   // 4 2 7
//     cout<<endl;
//     d.display();

//     return 0;
// }

// // toeplitz matrics                             //  _          _      condition: M[i,j] = M[i-1, j-1]
// class Tridigonal     //using lower tringular    // | 2  3  4  5 |
// {                                               // | 7  2  3  4 |     }  [2, 3, 4, 5,| 7, 8, 9]    size= 2*n-1
// private:                                        // | 8  7  2  3 |
//     int n;                                      // | 9  8  7  2 |
//     int *A;                                     //  ￣         ￣
// public:
//     Tridigonal(){
//         n=2;
//         A=new int[4];
//     }
//     Tridigonal(int n){
//         this->n=n;
//         A=new int[2*n-1];     //total need of space
//     };
//     void set(int i,int j,int x);
//     int get(int i,int j);
//     void display();
//     ~Tridigonal();
// };

// void Tridigonal::set(int i,int j,int x){
//     if(i<=j){
//         A[j-i]=x;                       //require indexs of M[i,j]
//     }
//     else {
//         A[n+(i-j-1)]=x;
//     }
// }
// int Tridigonal::get(int i,int j){
//     if(i<=j){
//         return A[j-i];
//     }
//     else {
//         return A[n+(i-j-1)];
//     }
// }
// void Tridigonal::display(){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<get(i+1,j+1)<<" ";  //mathematical matrics index start from 1
//         }
//         cout<<endl;
//     }
// }

// Tridigonal::~Tridigonal()
// {
//     delete []A;
// }

// int main(){
//     Tridigonal d(4);
//     d.set(1,1,2);
//     d.set(2,2,2);
//     d.set(3,3,2);
//     d.set(4,4,2);

//     d.set(1,2,3);
//     d.set(2,3,3);
//     d.set(3,4,3);

//     d.set(1,3,4);
//     d.set(2,4,4);

//     d.set(1,4,5);

//     d.set(2,1,7);
//     d.set(3,2,7);
//     d.set(4,3,7);

//     d.set(3,1,8);
//     d.set(4,2,8);

//     d.set(4,1,9);

//     cout<<d.get(4,3)<<endl;
//     cout<<d.get(4,4)<<endl;
//     cout<<d.get(1,4)<<endl;   // 7 2 5
//     cout<<endl;
//     d.display();

//     return 0;
// }

// sparse matrics  //matrics having very less no of non-zeroes wrt zero
// struct Element
// {
//     int i;
//     int j;
//     int x;
// };
// struct sparse
// {
//     int m;
//     int n;
//     int num;
//     Element *e;
// };
// void create(struct sparse *s)
// {
//     cout << "dimentions: ";
//     scanf("%d %d", &s->m, &s->n);
//     cout << "no. of non-zero elements: ";
//     scanf("%d", &s->num);
//     s->e = new Element[s->num];
//     cout << "coordinates and value of each element: " << endl;
//     for (int i = 0; i < s->num; i++)
//     {
//         scanf("%d%d%d", &s->e[i].i, &s->e[i].j, &s->e[i].x);
//     }
// }
// void display(struct sparse *s)
// {
//     cout << s->m << "  ";
//     for (int i = 0; i < s->num; i++)
//     {
//         cout << s->e[i].i << " ";
//     }
//     cout << endl;
//     cout << s->n << "  ";
//     for (int i = 0; i < s->num; i++)
//     {
//         cout << s->e[i].j << " ";
//     }
//     cout << endl;
//     cout << s->num << "  ";
//     for (int i = 0; i < s->num; i++)
//     {
//         cout << s->e[i].x << " ";
//     }
//     cout << endl;
// }

// Addition of two sparse matrices.  Using 3 column representation.
// void add(struct sparse *s1, struct sparse *s2)
// {
//     if (s1->m == s2->m && s1->n == s2->n)
//     {
//         // p used to traverse in s1 & q in s2;
//         int p, q, r = 0;
//         sparse *sum;
//         sum = new sparse;
//         sum->m = s1->m;
//         sum->n = s1->n;
//         sum->num;
//         sum->e = new Element[sum->num];
//         for (p = 0, q = 0; p < s1->num, q < s2->num;)
//         {
//             if (s1->e[p].i < s2->e[q].i) // checking row no.
//             {
//                 sum->e[r].i = s1->e[p].i;
//                 sum->e[r].j = s1->e[p].j;
//                 sum->e[r++].x = s1->e[p++].x;
//             }
//             else if (s1->e[p].i > s2->e[q].i)
//             {
//                 sum->e[r].i = s2->e[q].i;
//                 sum->e[r].j = s2->e[q].j;
//                 sum->e[r++].x = s2->e[q++].x;
//             }
//             else
//             {
//                 if (s1->e[p].j < s2->e[q].j)
//                 {
//                     sum->e[r].i = s1->e[p].i;
//                     sum->e[r].j = s1->e[p].j;
//                     sum->e[r++].x = s1->e[p++].x;
//                 }
//                 else if (s1->e[p].j > s2->e[q].j)
//                 {
//                     sum->e[r].i = s2->e[q].i;
//                     sum->e[r].j = s2->e[q].j;
//                     sum->e[r++].x = s2->e[q++].x;
//                 }
//                 else
//                 {
//                     sum->e[r].i = s1->e[p].i;
//                     sum->e[r].j = s1->e[p].j;
//                     sum->e[r++].x = s1->e[p++].x + s2->e[q++].x;
//                 }
//             }
//             sum->num = r;
//         }
//         display(&(*sum));
//     }
//     else
//     {
//         cout << "Coordinates are different." << endl;
//     }
// }

// int main()
// {
//     sparse s1;
//     create(&s1);
//     sparse s2;
//     create(&s2);
//     display(&s1);
//     display(&s2);
//     add(&s1, &s2);
// }
