#include<iostream>
#include<fstream>
using namespace std;
#include<conio.h>

int main()
{
    string s1,s2;
    cout<<"Enter the plain text"<<endl;
    getline(cin,s1);
    cout<<"Enter the key having length = "<<s1.length()<<endl;
    getline(cin,s2);
    ofstream fout;int s;string file_name="FILEKEY.txt";
    fout.open(file_name);
    for(int i=0;i<s1.length();i++)
    {
        s=((s1[i])^(s2[i]));
        fout<<s<<"\n";
    }
    fout.close();
    cout<<"Plain text has been encrypted successfully, a file of name = "<<file_name<<" is generated, use this to decrypt"<<endl;
    cout<<"Press any key to exit";
    getch();//comment done
}
