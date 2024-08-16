#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (original == reversed) return 1;
    return 0;
}

// Function to check if a string is a palindrome
int isStringPalindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int number, numResult, strResult;
    string text;

    // Checking number palindrome
    cout << "Enter a number: ";
    cin >> number;
    numResult = isNumberPalindrome(number);
    if (numResult == 1) {
        cout << number << " is a palindrome number." << endl;
    } else {
        cout << number << " is not a palindrome number." << endl;
    }

    // Checking string palindrome
    cout << "Enter a string: ";
    cin >> text;
    strResult = isStringPalindrome(text);
    if (strResult == 1) {
        cout << text << " is a palindrome string." << endl;
    } else {
        cout << text << " is not a palindrome string." << endl;
    }

    return 0;
}
