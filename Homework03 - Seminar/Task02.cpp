#include <iostream>

using namespace std;

void findLetter(char* string, char letter)
{
    bool flag=false;
    for (int i=0; string[i]!=0; i++)
    {
        if (string[i]==letter)
        {
            cout<<"Letter "<<letter<<" found at position number "<<i+1<<"."<<endl;
            flag=true;
        }
        if (flag)
        {
            cout<<string[i];
        }
    }
    if (!flag) cout<<"Letter "<<letter<<" not found."<<endl;
}

int main()
{
    char string[255], letter;
    cin.getline(string, 255);
    cin>>letter;
    findLetter(string, letter);
    return 0;
}
