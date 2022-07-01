#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
void gotoxy(short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
main()
{
    int x,y;
    x=y=5;
    string s="*****";
    int flag=1;
    while(1)
    {
        system("cls");
        gotoxy(x,y);
        cout<<s;
        if(flag)
            x++;
        else
            y++;
        if(x%10==0 && flag)
            flag=0;
        else if(y%10==0 && flag==0)
            flag=1;

        Sleep(1000);
    }
    return 0;
}

