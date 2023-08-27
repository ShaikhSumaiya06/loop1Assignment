#include<iostream>
using namespace std;
int main(){
  /*
  display this AP - 4,7,10,13,16,...upto 'n' terms.
  */
    int n,a=4;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
      cout<<a<<" ";
      a=a+3;
    }
}