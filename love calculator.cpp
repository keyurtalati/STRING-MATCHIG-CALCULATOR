#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include<conio.h>
#include <fstream>
#include <iostream>
using namespace std;
class calc
{
public:
    int q;
    int d1,d2,m1,m2,y1,y2;
    int total1=0;
    int total2=0;
    int i1=0;
    int i2=0;
    int y,d,m;
    float fans;
    char a[10],b[10];
    int t1=0,t2=0,e1=0,e2=0;
    char place1[20],place2[20];
    float ans1=0;

    int date()
    {
        cout<<"enter date in dd:mm::yy formate"<<endl;
    x:cout<<"Enter birthdate 1: "<<endl;
    cin>>d1>>m1>>y1;

    if(d1>31 || m1>12 ||d1<=0 || m1<=0)
    {
        cout<<"Invalid date"<<endl;
        goto x;
    }
 //system("color 1c");
    y:cout<<"Enter birthdate 2: "<<endl;
    cin>>d2>>m2>>y2;
    if(d2>31 || m2>12 ||d2<=0 ||m2<=0)
    {
        cout<<"Invalid date"<<endl;
        goto y;
    }
    m=m1-m2;
    if(m<0)
        m*=-1;
     d=d1-d2;
    if(d<0)
        d*=-1;
    y=y1-y2;
    if(y<=0)
        y*=-1;
    fans=(((float (m)/12)*100)+((float(d)/30)*100)/2);
    fans=100-fans;
    cout<<"Your ans is "<<fans<<"%"<<endl;
    return fans;
    }

    int name()
    {
        system("color 8c");
         cout<<"Enter your name :"<<endl;
    cin>>a;
    //system("color 4a");
    cout<<"Enter your partner name :"<<endl;
    cin>>b;
    while(a[i1] != '\0')
    {
        total1+=int(a[i1]);
        i1++;
    }
    while(b[i2] != '\0')
    {
        total2+=int(b[i2]);
        i2++;
    }
    total1%=100;
    total2%=100;
    ans1=float(total1)-(total2);
    if (ans1<0)
        ans1*=-1;
    ans1=100-ans1;

    cout<<"your ans is "<<ans1<<"%"<<endl;
    return ans1;
    }

    int place()
    {
        cout<<"Enter birth place of 1: "<<endl;
    cin>>place1;
    cout<<"Enter birth place of 2: "<<endl;
    cin>>place2;

    while(place1[e1] != '\0')
    {
        t1+= place1[e1];
        e1++;
    }
    while(place2[e2] != '\0')
    {
        t2+= place2[e2];
        e2++;
    }
        t2%=100;
        t1%=100;
        float ans=  (t2)-(t1);
        if(ans<0)
            ans*=(-1);
        ans=100-ans;

    cout<<"you ans is "<<ans<<"%"<<endl;
    return ans;
    }

};
int main()
{
    system("color 4c");
    int q;
    system("color 5c");
    system("color 6c");
    system("color 7c");
    system("color 8c");
    system("color 9c");
    system("color 1c");
    system("color 2c");
    system("color 3c");
    system("color 4c");
    system("color 5c");
    system("color 5c");
    system("color 6c");
    system("color 7c");
    system("color 8c");
    system("color 9c");
    system("color 1c");
    system("color 2c");
    system("color 3c");
    system("color 4c");

    calc c;
    l:
        system("color 0c");
    cout<<endl<<endl<<endl<<"             \t\t\t\t\t\t\t\t  WELCOME TO LOVE CALCULATOR"<<endl;

    char h=126;
    system("color 06");
    //for(int temp=0;temp<160;temp++)
      //  {system("color 06");
        //    cout<<h;}
    cout<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h;
    char number;
    system("color 0c");
    cout<<endl<<"\t\t\t                 \t\t\t PLS SELECT CALCULATOUR ON WHICH YOU WANT TO CALCULATE"<<endl;
    cout<<"\t\t\ta  :  from birthdate"<<endl<<"\t\t\tb  :  from name"<<endl<<"\t\t\tc  :  from birthplace"<<endl<<"\t\t\td  :  from all of above "<<endl;
    cout<<endl<<"\t Pleasr enter your choise"<<endl;
    cin>>number;
    if(number=='a')
    {
        system("cls");
        system("color 17");
        c.date();
    }
    else if(number=='b')
    {
        system("cls");
        system("color 17");
        c.name();
    }
    else if(number=='c')
    {
        system("cls");
        system("color 17");
        c.place();
    }
    else if(number=='d')
    {
        system("cls");
        system("color 17");
        c.date();
        c.name();
        c.place();

    }
    else
      {
          cout<<endl<<endl<<"enter a valid alphabat"<<endl;
          goto l;
      }
      m:
          system("color 17");


      cout<<endl<<endl<<"Enter y for main window"<<endl<<"Enter n for exit...."<<endl;
      cin>>number;
      if(number=='y')
      {

          goto l;
      }
      else if(number=='n')
      {
          system("cls");
          system("color 1f");

          cout<<endl<<endl<<"\t\tTHANK YOU"<<endl<<"\t\t\t\t17CE124"<<endl<<"\t\t\t\t17CE129";
      }
      else
      {
          cout<<endl<<"enter a valid alphabat"<<endl;
          goto m;
      }
    return 0;
}
