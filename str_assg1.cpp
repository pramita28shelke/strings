#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    // Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
    // 0-based indexing.
    // Input : str = "Pbwcshkuiglhlds"
    // Output : "P#w#s#k#i#l#l#s"
    // input : str = "a"
    // Output : "a"

    string s;
    int n = s.size();
    cout << "enter the string " << endl;
    cin >> s;
    cout << endl;
    cout << "Given Input" << s;
    int i = 0;
    while (s[i] != '\0')
    {
        if (i % 2 != 0)
        {
            s[i] = '#';
        }
        i++;
    }
    cout << endl;

    cout << "expected output" << s;

    // Input a string of length n and count all the consonants in the given string.

    // Input : "abdc"
    // Output : 3

    string s;
    int n = s.size();
    cout << "enter the string " << endl;
    cin >> s;
    cout << endl;
    cout << "Given Input : " << s;
    int i = 0, cnt = 0;
    while (s[i] != '\0')
    {
        if (s[i] != 'a' or s[i] != 'e' or s[i] != 'i' or s[i] != 'o' or s[i] != 'u')
        {
            cnt++;
        }
        i++;
    }
    cout << endl;

    cout << "count : " << cnt;

    // Check whether the given string is palindrome or not.
    // Input : "abcde"
    // Output : No
    // Input : "abcdcba"
    // Output : Yes

    string s;
    cout << "enter the string " << endl;
    cin >> s;
    cout << endl;
    cout << "Given Input : " << s << endl;
    // palindrome
    int n = s.size();
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            cout << "not a palindrome " << endl;
        break;
    }
    cout << "Palindrome " << endl;

    // Input a string of even length and reverse the second half of the string.
    // Input : str = "abcdefgh"
    // Output : abcdhgfe

    string s;
    cout << "enter the string " << endl;
    cin >> s;
    cout << endl;
    cout << "Given Input : " << s << endl;
    int n = s.size();
    if (n % 2 == 0)
    {
        reverse(s.begin() + n / 2, s.end());
        cout << "expected output " << s << endl;
    }

    // Input a string of length less than 10 and convert it into integer without using builtin function.
    // Input : "3244"
    // Output : 3244
    // Input : "12"
    // Output : 12
    string s;
    cout << "enter the string " << endl;
    cin >> s;
    cout << endl;
    cout << "Given Input : " << s << endl;
    int n = s.size();
    int ans = 0;
    int prod = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        ans = ans + (s[i] - '0') * prod;
        prod = prod * 10;
    }
    cout << "string to integer " << ans;

    return 0;
}
