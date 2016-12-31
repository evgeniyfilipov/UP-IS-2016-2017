#include <iostream>

using namespace std;

void printRhombus(char letter)
{
    int counter=0;
    for (char i='A'; i<=letter; i++)
    {
        cout<<i;
        for (int j=0; j<counter; j++)
        {
            cout<<"*";
        }
        if (counter>0)
        {
            cout<<i;
        }
        cout<<endl;
        if(counter==0) counter+=1;
        else counter+=2;
    }
    counter-=2;
    for (char i=letter-1; i>='A'; i--)
    {
        cout<<i;
        counter-=2;
        for (int j=0; j<counter; j++)
        {
            cout<<"*";
        }
        if(counter>0)
        {
            cout<<i;
        }
        cout<<endl;
    }

}

int main()
{
    char letter;
    cin>>letter;
    printRhombus(letter);
    return 0;
}
