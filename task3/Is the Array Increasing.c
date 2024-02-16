#include <iostream>

using namespace std;

int main()

{
 int n,numbers[200];
 cin>>n;
  for(int i=0;i<n;i++)
    cin>>numbers[i];
   bool incresing=1;
   for(int i=1;i<n;i++){
    if(numbers[i]<numbers[i-1]){
        incresing=0;
        break;
    }
   }
    if(incresing){
        cout<<"yes\n";
    }else{
               cout<<"no\n";

    }











































    return 0;


    }
