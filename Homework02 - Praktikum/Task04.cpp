#include <iostream>

using namespace std;

void replaceOccurences(char* str, char charToReplace, char* stringToReplaceWith)

{
    for (int i=0; str[i]!=0; i++)
    {
        if (str[i] == charToReplace)
        {
            for (int j=0; stringToReplaceWith[j]!=0; j++)
            {
                str[i+j] = stringToReplaceWith[j];
                /* ??????
                Работи (при смяна на буква с буква), но замества всички елементи след първата среща на търсената буква с буквите от стринга, скойто искаме да заменяме.
                Как мога да изместя елементите на вече въведения стринг надясно с толкова, колкото е дължината на стринга, с който искаме да заменяме, за да не се губят елементите
                на вече въведения стринг?
                */
            }

        }

    }

}

int main()
{
    char str[255], charToReplace, stringToReplaceWith[255];

    cout<<"Enter your initial string: ";
    cin.getline(str, 255);

    cout<<"Enter the string you want to replace the character with: ";
    cin.getline(stringToReplaceWith, 255);

    cout<<"Enter the character you want to replace: ";
    cin>>charToReplace;

    replaceOccurences(str, charToReplace, stringToReplaceWith);

    for (int i=0; str[i]!=0; i++)
        cout<<str[i];

    cout<<endl;

    return 0;
}
