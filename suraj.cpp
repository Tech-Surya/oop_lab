#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter your two digits"<<endl;
    cin>>a>>b;
    cout<<endl;

    cout<<"Aritmetic Operators"<<endl;
    cout<<"Addition is "<<a+b<<endl;
    cout<<"Subtraction is: "<<a-b<<endl;
    cout<<"Multiplication is: "<<a*b<<endl;
    cout<<"Division is: "<<a/b<<endl;
    cout<<"Modulus is: "<<a%b<<endl;

    cout<<endl<<"Relational Operators"<<endl;
    cout<<"a>b: "<<(a>b)<<endl;
    cout<<"a>=b: "<<(a>=b)<<endl;
    cout<<"a<b: "<<(a<b)<<endl;
    cout<<"a<=b: "<<(a<=b)<<endl;
    cout<<"a==b: "<<(a==b)<<endl;
    cout<<"a!=b: "<<(a!=b)<<endl;

    cout<<endl<<"Logical Operators"<<endl;
    cout<<"a&&b: "<<(a&&b)<<endl;
    cout<<"a||b: "<<(a||b)<<endl;
    cout<<"!a: "<<(!a)<<endl;

    cout<<endl<<"Bitwise Operators"<<endl;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
    cout<<"~b "<<(~b)<<endl;
    cout<<"a>>b "<<(a>>b)<<endl;
    cout<<"a<<b "<<(a<<b)<<endl;

    cout<<endl<<"Conditional Operators"<<endl;
    cout<<(a>b)?a:b;

    cout<<endl<<"Assignment Operators"<<endl;
    cout<<"a+=5 "<<(a+=5)<<endl;
    cout<<"b-=5 "<<(b-=5)<<endl;
    cout<<"a*=2 "<<(a*=5)<<endl;
    cout<<"a/=5 "<<(a/=5)<<endl;
    return 0;
}