#include <iostream>

using namespace std;

void toLowerCase (char* string)
{
    for (int i=0; string[i]!=0; i++)
    {
        if (string[i]==32) continue;
        else if (string[i]>='A' && string[i]<='Z')
            string[i]=string[i] - 'A' + 'a';
    }
}

void printLetters(char* string)
{
    int counter = 0;
    for (char i='a'; i<='z'; i++)
    {
        for (int j=0; string[j]!=0; j++)
        {
            toLowerCase(string);
            if(i==string[j])
            {
                cout<<string[j];
                counter++;
                break;
            }
        }
    }
    cout<<endl;
    cout<<counter<<" different characters."<<endl;
}

int main()
{
    char string[255];
    cin.getline(string, 255);
    printLetters(string);
    return 0;
}
