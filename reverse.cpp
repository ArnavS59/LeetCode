#include <iostream>
#include <stdlib.h>

using namespace std;

// void reverseOnlyLetters(string S)
// {
//     int left = 0;
//     int right2 = S.length() - 1;
//     while (left < right2)
//     {
//         if (!isalpha(S[left]))

//             left++;

//         else if(!is(S[right2]))
//         {
//             right2--;
//         }
//         else if(isalpha(S[left]) && isalpha(S[right2]))
//         {
//             swap(S[left], S[right2]);
//             left++;
//             right2--;
//         }

//     }
//     cout << S << endl;

// }

bool isVowel(char c)
{

    if (c == 'a' || c == 'e' || c == 'i' ||
        c == 'o' || c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void reverseOnlyLetters(string S)
{
    int left = 0;
    int right2 = S.length() - 1;
    while (left < right2)
    {

        if (isVowel(S[left]) && isVowel(S[right2]))
        {
            swap(S[left], S[right2]);
            left++;
            right2--;
        }
        else
        {
            if (!isVowel(S[left]))
            {
                left++;
            }
            if (!isVowel(S[right2]))
            {
                right2--;
            }
        }
    }
    return S;
}

int main()
{
    string word = "hello";

    reverseOnlyLetters(word);

    return 0;
}