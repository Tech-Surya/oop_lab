#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
    char str1[50], str2[50];
    cout << "Enter string 1 : ";
    cin>>str1;
    cout << "Enter string 2 : ";
    cin>>str2;
    strcat(str1, str2);
    cout << "Concatenated String : " << str1;
    return 0;
}
