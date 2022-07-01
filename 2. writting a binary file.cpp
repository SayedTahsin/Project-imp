#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file("demoWritting.txt",ios::binary|ios::app|ios::out);
    file.put('a');
    file.put('\n');
    char str[]="Hello there , I am Sayed Tahsin \nlearning File IO\nWish me Luck\n";
    file.write(str,sizeof(str));
    file.close();
}
