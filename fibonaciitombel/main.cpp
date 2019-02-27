#include <iostream>

using namespace std;

int main()
{
    int n,i,v[1000];
    cout<< "n=";
    cin>> n;
   v[0]=0;
   v[1]=1;
   for (i=2;i<=n; i++){
        v[i]=v[i-1]+v[i-2];
   }
   for (i=0; i<n; i++){
    cout<< v[i]<<" " ;
   }
   cout<< endl;
   cout<< "a fibonacii sor n.tagja="<< v[n];
    return 0;
}
