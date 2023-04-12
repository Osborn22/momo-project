#include <iostream>
using namespace std;
int main(){
    float score,b,B,km;
    int num1,num2;
    int pin=0000;//Default Pin
    int balance=1000;//Default balance
    cout<<"             AUTHENTICATION"<<endl;
    cout<<"Enter Default Pin For Authentication"<<endl;
    cin>>pin;
    if(pin!=0000)
	{
    cout<<"Incorrect pin; 2nd attempt"<<endl;
    cin>>pin;}
    if(pin!=0000){
	cout<<"Incorrect pin; 3rd attempt"<<endl;
	cin>>pin;}
	if(pin!=0000){
    {return 0;}
}
    else if (pin==0000){
    cout<<"		WELCOME TO MTN MOMO"<<endl;
    cout<<"          MENU"<<endl;   
    cout<<" 1. Transfer Money"<<endl;
    cout<<" 2. Allow Cash Out"<<endl;
    cout<<" 3. Check Balance"<<endl;
    cout<<" 4. Resetting/Change Pin"<<endl;
    cout<<"Choose From Menu Options:"<<endl;}
    cin>>score;
    if(score==1) {
	cout<<" Transfer Money"<<endl;
    cout<<"1. MTN"<<endl;
    cout<<"2. OTHER NETWORK"<<endl;
    cout<<" Select Network"<<endl;
    cin>>B;
    if(B==1)
    {cout<<"Enter Momo Number"<<endl;
    cin>>num1;
    cout<<"Confirm number"<<endl;
    cin>>num2;
	if(num2!=num1){
	cout<<" Number not the same"<<endl;
	cout<<" Try again another time"<<endl;
	return 0;}
	}
    else if(B==2)
    {cout<<"Choose Network by entering Number"<<endl;
    cout<<"Enter Number"<<endl;
    cin>>num1;
    cout<<"confirm Number"<<endl;
    cin>>num2;
	if(num2!=num1){
	cout<<"Number not the same"<<endl;
	cout<<" Try again another time"<<endl;
	return 0;}
}
    {
    cout<<"Enter Amount"<<endl;
    cin>>b;}
    {
    cout<<"You have choose to send an amount of "<<b <<"ghc to "<<num1<<endl;
    cout <<"Enter Momo Pin To Confirm: ";}
    cin>>pin;
    if(pin!=000){
    cout<<"Incorrect pin"<<endl;
    return 0;}
    cout<<"You have successfully transfer an amount of ";
    cout<<b <<"ghc to " <<num1 <<endl;
    if(b<=balance)
    balance-=b;
    cout<<"Your New balance is:"<<balance<<endl;}
    else if(b>=balance)
	{
    cout<<"Insufficient balance to complete transaction"<<endl;
	}
    if(score==2){
    cout<<"1. Allow Cash Out"<<endl;
    cin>>km;
    cout<<"Cash Out Is Allowed"<<endl;
	}
    if(score==3){
    cout<<"Check Balance"<<endl;
    cout<<"Enter Your Pin"<<endl;
    cin>>pin;
    if(pin!=0000){
    cout<<"Incorrect pin."<<endl;
    cout<<" Try again next time.\n";
    cout<<"Thank you for using MTN Momo\n";
	return 0;}
    cout<<"Your balance is 1,000"<<endl;
	}
    if(score==4){
    cout<<"1. Change Pin"<<endl;
    cout<<"2. Reset Pin"<<endl;
    cin>>km;
    if(km==1){
    cout<<"Enter Default Pin:";
    cin>>pin;
    cout<<"Enter New Pin:";
    cin>>pin;
    cout<<"You have successfully change your Momo pin"<<endl;}
    else if(km==2){
    cout<<"1. Reset Pin"<<endl;
    cin>>km;
    cout<<"You have successfully Reset your pin"<<endl;}
}
    cout<<"Thank you for using MTN Momo"<<endl;
    cout<<" We dey for you\n";
    cout<<"MTN:EVERY WHERE YOU GO"; 
	return 0;
}