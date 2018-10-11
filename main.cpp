#include<conio.h>
#include<iostream.h>
void main()
{
int a,b;
cout<<"this is a program to know are you able to enrol in delhi university \n";
cout<<"enter your marks (in percentage) : ";
cin>>a;
cout<<"\n";
cout<<"enter your age :";
cin>>b;
if((a>=95)&&(b>=18))
{
cout<<"you are eligible to enrol";
}
else if(a>100)
{
cout<<"you can not enrol";
}
else
{
cout<<"you are not eligible to enrol";
}
getch();
}
