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
    p = data;
    

   cout << "You entered: ";
   for(int i = 0; i < max; ++i)
      cout <<endl<< *(p + i);

   return 0;
}
