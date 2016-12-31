#include <iostream>

using namespace std;

void findT(char* string)
{
    bool flag=false;
    for (int i=0; string[i]!=0; i++)
    {
        if (string[i]=='T')
        {
            cout<<"Letter T found at position number "<<i+1<<"."<<endl;
            flag=true;
        }
    }
    if (!flag) cout<<"Letter T not found."<<endl;
}

int main()
{
    char string[255];
    cin.getline(string, 255);
    findT(string);
    return 0;
}
