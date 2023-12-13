

#include<iostream>
using namespace std;
int main(){
    //////////////////////////////    percentage of exmination marks ////////////////////////////////
/*
float be=90,ch=93,ma=93,bi=90,en=90;
float percentage= float (be+ch+ma+bi+en)*100/500;
cout<<"Percentage is :"<<percentage;
return 0;
 */

///////////////////////////////////////////   find the area of circle    /////////////////////////////////
/*
float r=50.50;
const float pi=3.14;
float area=pi*r*r;
cout<<"The area of circle is :"<<area;
*/

///////////////////////////////////   square of a number using user input    ////////////////////////////////
/*
int num,sqr;
cout<<"Enter a number :";
cin>>num;
sqr=num*num;
cout<<"The square of this number is :"<<sqr;
*/

////////////////////////   find a number is even or odd in c++    ////////////////////////////////////
/*
int n;
cout<<"Enter any integer number:";
cin>>n;
if(n%2==0){
    cout<<"This is an even number";
}

else{
    cout<<"This is an odd number";
}

*/

////////////////////////   find a number is three digit number or not using c++    ////////////////////////////////////

int num;
cout<<"Enter any number:";
cin>>num;

if((num>99 && num<1000)||(num<-99 && num>-1000)){
    cout<<"It is a three digit number.";
}

else{
    cout<<"It is not a three digit number.";
}
return 0;

}