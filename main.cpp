#include <iostream>
using namespace std;
int main()
{
   int i,n,a[50];
   cout << "Introducenti valoarea lui n:";
   cin>>n;
   for (i=1;i<=n;i++)
   {
      cout<<"a["<<i<<"]=";
      cin>>a[i];
   }
   for (i=1;i<=n;i++)
      cout<<a[i]<<" ";
   return 0;
}