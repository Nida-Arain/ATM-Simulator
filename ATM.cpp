#include<iostream>
using namespace std;
string name;
int main(){
string name;
int choice;
float balance=10000, amount;
cout<<"Enter You name:";
cin>>name;
cout<<"ATM Menue"<<endl;
cout<<"1.Check Balance"<<endl;
cout<<"2.Deposit Amount"<<endl;
cout<<"3.Withdraw Amount"<<endl;
cout<<"4.Exit"<<endl;
cout<<"Enter Your choice:";
cin>>choice;
switch(choice){
case 1:
cout<<"Your balance is:"<<balance;
break;
case 2:
cout<<"Enter deposit amount:";
cin>> amount;
balance+=amount;
cout<<"Updated balance:"<<balance;
break;
case 3:
cout<<"Enter Withdrawal amount:";
cin>>amount;
if(amount<=balance){
balance-=amount;
cout<<"remaining balance:"<<balance;
}else{
cout<<"insufficient balance!";	
}
break;
case 4:
cout<<"logout:";
break;
default:
cout<<"Invalid choice!";
}
return 0;
}
