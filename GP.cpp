#include<iostream>
using namespace std;
int main(){
  /*
  display this GP - 3,12,48,...upto 'n' terms.
  */
 // here common multiplying is 4 . i.e, r=4
    int a=3,n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
      cout<<a<<" ";
      a=a*4;
    }
}