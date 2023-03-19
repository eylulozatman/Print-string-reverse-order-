#include <iostream>

using namespace std;


void reverseString(string word)
{
    string str;
    int wordsize = word.length();
    char arr[wordsize];
    for (int i = 1; i <= word.length(); ++i)
    {
        arr[wordsize-i] = word[i-1];
    }

    for (int i = 0; i < wordsize; ++i)
    {
        cout << (arr[i]);
    }

}

void reverseString2(string word)
{

    int wordsize = word.length();

    for (int i = 0; i < wordsize/2; ++i)
    {
         char temp =  word[i];
         word[i] = word[wordsize-i-1];
         word[wordsize-i-1] = temp;
    }

    cout << (word);

}





int main() {

     reverseString("tables");
     cout << "\n";
    reverseString2("cow");

}
