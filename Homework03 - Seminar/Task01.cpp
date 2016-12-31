#include <iostream>

using namespace std;

void firstMidLast(char* string)
{
    int counter=0;
    for (int i=0; string[i]!=0; i++)
    {
        counter++;
    }
    cout<<"Characters: "<<counter<<endl;
    cout<<"First character: "<<string[0]<<endl;
    cout<<"Middle character: "<<string[counter / 2]<<endl;
    cout<<"Last character: "<<string[counter - 1]<<endl;
}

int main()
{
    char string[255];
    cin.getline(string, 255);
    firstMidLast(string);
    return 0;
}
