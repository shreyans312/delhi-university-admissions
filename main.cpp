#include<bits\stdc++.h>

void main()
{
int a,b,c,d,e,f;
cout<<"this is a program to know are you able to enrol in delhi university \n";
cout<<"enter your marks (in percentage) : ";
cin>>a;
cout<<"\n";
cout<<"enter your age :";
cin>>b;
if((a>=95)&&(b>=18))
{
cout<<"you are eligible to enrol \n";
cout<<"enter your name : ";
cin>>c;
cout<<"\nenter your age :";
cin>>d;
cout<<"\nenter your subject";
cin>>e;
cout<<"\nenter the degree for which you are applying :";
cin>>f;
cout<<"\nCongratulations ! for enrolling in delhi university. You are now eligible to attend the classes";
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
