#include<iostream>
using namespace std;
void aritmetic(int a, int b){
    cout<<"Aritmetic Operators"<<endl;
    cout<<"Addition is "<<a+b<<endl;
    cout<<"Subtraction is "<<a-b<<endl;
    cout<<"Multiplication is "<<a-b<<endl;
    cout<<"Divison is "<<a/b<<endl;
    cout<<"Divison is "<<a%b<<endl;
}

void relational(int a, int b){
    cout<<endl<<"Relational Operators"<<endl;
    cout<<"a>b: "<<(a>b)<<endl;
    cout<<"a>=b: "<<(a>=b)<<endl;
    cout<<"a<b: "<<(a<b)<<endl;
    cout<<"a<=b: "<<(a<=b)<<endl;
    cout<<"a==b: "<<(a==b)<<endl;
    cout<<"a!=b: "<<(a!=b)<<endl;
}
void logical(int a, int b){
    cout<<endl<<"Logical Operators"<<endl;
    cout<<"a&&b: "<<(a&&b)<<endl;
    cout<<"a||b: "<<(a||b)<<endl;
    cout<<"!a: "<<(!a)<<endl;
}
void cond(int a, int b){
    cout<<endl<<"Conditional Operators"<<endl;
    cout<<((a>b)?a:b)<<endl;
}

void bitwise(int a, int b){
    cout<<endl<<"Bitwise Operators"<<endl;
    cout<<"a&b "<<(a&b)<<endl;
    cout<<"a|b "<<(a|b)<<endl;
    cout<<"a^b "<<(a^b)<<endl;
    cout<<"~b "<<(~b)<<endl;
    cout<<"a>>b "<<(a>>b)<<endl;
    cout<<"a<<b "<<(a<<b)<<endl;
}

void assignment(int a, int b){
    cout<<endl<<"Assignment Operators"<<endl;
    cout<<"a+=5 "<<(a+=5)<<endl;
    cout<<"b-=5 "<<(b-=5)<<endl;
    cout<<"a*=2 "<<(a*=5)<<endl;
    cout<<"a/=5 "<<(a/=5)<<endl;
}
int main(){
    int a,b;
    cout<<"Enter your two digits"<<endl;
    cin>>a>>b;
    aritmetic(a, b);
    logical(a,b);
    relational(a, b);
    assignment(a, b);
    bitwise(a, b);
    cond(a, b);
    return 0;

    
}