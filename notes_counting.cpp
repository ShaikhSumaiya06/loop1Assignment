#include<iostream>
using namespace std;
int main(){
  // count the minimum number of notes in teh given amount using the switch statement.
    int amount;
    cout<<"Please Enter your total amount to find the notes : ";
    cin>>amount;
    /*
    NOTE: here you can take another variable for a 2000 rupees note, and modify the code accordingly.
    */
    int n1,n2,n5,n10,n20,n50,n100,n200,n500;
    n1=n2=n5=n10=n20=n50=n100=n200=n500=0;
    switch(amount>=500){
        case 1:
            n500 +=amount/500;
            amount -= n500*500;
        break;
    }
    switch(amount>=200){
        case 1:
            n200 +=amount/200;
            amount -= n200*200;
    }
    switch(amount>=100){
        case 1:
            n100 +=amount/100;
            amount -= n100*100;
        break;
    }
    switch(amount>=50){
        case 1:
             n50 += amount/50;
             amount -= n50*50;
        break;

    }
    switch(amount>=20){
        case 1: 
            n20 +=amount/20;
            amount -= n20*20;
        break;
    }
    switch(amount>=10){
        case 1: 
            n10 +=amount/10;
            amount -= n10*10;
        break;
    }
    switch(amount>=5){
        case 1: 
            n5 +=amount/5;
            amount -= n5*5;
        break;
    }
    switch(amount>=2){
        case 1: 
            n2 +=amount/2;
            amount -= n2*2;
        break;
    }    
    switch(amount>=1){
        case 1: 
            n1 +=amount/1;
            amount -= n1*1;
        break;
    }
    cout<<"no. of 500 notes : "<<n500<<endl;
    cout<<"no. of 500 notes : "<<n200<<endl;
    cout<<"no. of 500 notes : "<<n100<<endl;
    cout<<"no. of 500 notes : "<<n50<<endl;
    cout<<"no. of 500 notes : "<<n20<<endl;
    cout<<"no. of 500 notes : "<<n10<<endl;
    cout<<"no. of 500 notes : "<<n5<<endl;
    cout<<"no. of 500 notes : "<<n2<<endl;
    cout<<"no. of 500 notes : "<<n1<<endl;
}
