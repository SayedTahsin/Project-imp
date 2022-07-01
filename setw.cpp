#include<bits/stdc++.h>
using namespace std;
int main()
{
    int id[3]= {1,2,3};
    string name[3]= {"ross","chandler","joe"};
    double cg[3]= {4.00,3.5,2.23};
    cout<<endl;
    cout<<"\t"<<left<<setw(5)<<"ID"<<left<<setw(20)<<"Name"<<left<<setw(5)<<"CGPA"<<endl;
    for(int i=0; i<3; i++)
    {
        cout<<"\t"<<left<<setw(5)<<id[i]<<left<<setw(20)<<name[i]<<left<<setw(5)<<cg[i]<<endl;
    }
    cout<<endl<<"\t";
    int n=-10;
    cout<<setfill('x')<<setw(10)<<internal<<n<<endl;
    return 0;
}
