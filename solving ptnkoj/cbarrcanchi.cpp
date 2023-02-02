#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string  a[10]={"canh","tan","nham","quy","giap","at","binh","dinh","mau","ky"};
    string b[12]={"than","dau","tuat","hoi","ti","suu","dan","mao","thin","ty","ngo","mui"};
    cout<<a[n%10]<<" "<<b[n%12];
}
