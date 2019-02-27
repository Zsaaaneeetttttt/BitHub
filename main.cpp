#include <iostream>

using namespace std;

int main()
{
    int n,els=0,mas=1,f,i;
    cout<< "n=";
    cin>> n;
    if (n==0){
        f=0;
    }
    else if (n==1){
        f=1;
        els=0;
        mas=1;
    }
    for (i=2;i<=n; i++){
        f=els+mas;
        els=mas;
        mas=f;
    }
     cout << "f="<< f;
    return 0;
}
