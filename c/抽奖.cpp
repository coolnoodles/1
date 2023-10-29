#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int i;
    string s[10]={"zxy","zx","lz","zje","zrn","lyc","wyz","ljm","sl","yjy"};
    while(true)
    {
        system("cls");
        i=rand()%10;
        cout<<"Congratulations:"<<s[i]<<endl;
        if(kbhit())break;

    }
    system("pause");
    return 0;
}