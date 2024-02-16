#include <iostream>

using namespace std;

int main()
{
   const int N =199;
int n ,a[n] , mx=-1 , mn=10000;
cin>>n;


for(int i=0;i<n;i++){
       cin>>a[i];

    if(a[i]<mn){
        mn=a[i];
    }
     if(a[i]>mx){
        mx=a[i];
     }

}
   for(int i=0;i<n;i++){
    if(a[i]=mx)
        a[i]=mn;
    else if(a[i]=mn)
        a[i]=mx;
     for(int i=0;i<n;i++){
        cout<<a[i];
     }

   }

    return 0;
}
