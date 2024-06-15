#include<bits/stdc++.h>
using namespace std;
string dayOfTheWeek(int day, int month, int year) 
{
     vector<string>days = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
     bool flag = false;
     if(year%4 == 0 && year%100!=0)
     {flag=true;}
     else 
     {if(year%400==0)
          flag = true;
     else
          flag = false;}
     int yodays = 0;
     int n = year-1;
     yodays=(n/4)-(n/100)+n/400+n;
     int modays = 0;
     vector<int>months = {3,0,3,2,3,2,3,3,2,3,2,3};
     for(int i=0;i<month-1;i++){
          if(i==1 && flag) modays+=1;
          else modays+=months[i];
    }
    int ans = yodays+modays+day;
    ans=ans%7;
    return days[ans];
}