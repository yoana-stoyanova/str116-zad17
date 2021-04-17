//Програмата извежда максималния елемент от масива и неговия индекс
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n<2 || n>100){cout<<"n = "; cin>>n;}

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int max=a[0];
    int index;
    for(int j=1; j<n; j++)
    {
       if(a[j]>max)
       {
           max=a[j];
           index=j;
       }
    }

    cout<<max<<" "<<index;


    return 0;
}
