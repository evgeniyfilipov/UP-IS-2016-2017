#include <iostream>

using namespace std;

void printTriangleLetters (char letter)
{
    for (char i='A'; i<=letter; i++)
    {
        for(char j=i; j>='A'; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

int main()
{
    char letter;
    cin>>letter;
    printTriangleLetters(letter);
    return 0;
}
