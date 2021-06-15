#include <iostream>
using namespace std;
#define max 10
int main()
{
   int data[max];

   cout << "Enter elements: ";

   for(int i = 0; i < max; ++i)
      cin >> data[i];

   cout << "You entered: ";
   for(int i = 0; i < max; ++i)
      cout <<endl<< *(data + i);

   return 0;
}
