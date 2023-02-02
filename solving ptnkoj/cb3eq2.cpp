#include<bits/stdc++.h>
using namespace std;
int main() {
    float a,b,c,d,x,y;
    cin>>a>>b>>c;
    d= pow(b,2) - 4*a*c;
    if (((b==0)&&(c==0))||((a==0)&&(c==0))){cout<<"Infinity solution";}
    else if ((d<0)||((a==0)&&(b==0)&&(c!=0))) {cout<<"No solution";}
    else if (a==0){cout<<fixed<<setprecision(3)<<(-c/b);}
    else if (d==0){x=-b/2*a; cout<<fixed<<setprecision(3)<<x;}
    else {x=(-b+sqrt(d))/(2*a); y= (-b-sqrt(d))/(2*a); cout<<fixed<<setprecision(3)<<x<<endl; cout<<fixed<<setprecision(3)<<y;}
    return 0;
}
