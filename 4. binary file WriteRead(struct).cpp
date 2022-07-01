#include<bits/stdc++.h>
using namespace std;
struct person
{
    char name[50];
    int age;
};
int main()
{
    person me= {"Sayed",21};
    ofstream file("junk.txt",ios::binary|ios::out|ios::app);
    file.write((char*)&me,sizeof(person));
    file.close();

    person out;
    ifstream file2("junk.txt",ios::binary|ios::in);
    while(file2.read((char*)&out,sizeof(person)))
    {
        cout<<out.name<<' '<<out.age<<endl;
    }
    file2.close();
}
