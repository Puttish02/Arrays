
// Program to access arrays using pointers
#include <iostream>
using namespace std;
#define max 10 
int main()
{
   int data[max];
int *p;


   cout << "Enter elements: ";

   for(int i = 0; i < max; ++i)
      cin >> data[i];
    p = data; // data = data [0]
    

   cout << "You entered: ";
   for(int i = 0; i < max; ++i)
      cout <<endl<< *(p + i); // *(p+i) = *p[i]

   return 0;
}
