#include <iostream>

using namespace std;

void displayHistogram (const char* str)
{
    int counts[160] = { 0 };

    for (int i = 0; str[i]; i++) {
        counts[(int)(str[i])]++;
    }

    for (int i = 65; i < 123; i++) {
        if(counts[i]>0)
            cout<<(char)i<<": "<<counts[i]<<" times"<<endl;
        else continue;
    }
}

int main()
{
    char string[100];
    cin.getline(string, 100);
    displayHistogram(string);
    return 0;
}
