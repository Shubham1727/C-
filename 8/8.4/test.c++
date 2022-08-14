#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int a;
    scanf("%d", &a);

    long b;
    scanf("%ld", &b);

    char c;
    scanf("%c", &c);

    float d;
    scanf("%f", &d);

    double e;
    scanf("%lf", &e);

    printf("%d/n", a);
    printf("%ld/n", b);
    printf("%c/n", c);
    printf("%0.3f/n", d);
    printf("%0.9lf/n", e);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<d<<"\n";
    cout<<fixed<<setprecision(9)<<e<<"\n";
    return 0;
}