//Pallindrome 
#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;  
}

bool isPalindrome(string arr) {
    int start = 0;
    int end = arr.length()-1;

    while (start <= end) {
     
        while (!isalpha(arr[start]) && start <= end) {
            start++;
        }
        while (!isalpha(arr[end]) && end >= start) {
            end--;
        }
        if (toLowerCase(arr[start]) != toLowerCase(arr[end])) {
            return false;  
        }

        start++;
        end--;
    }

    return true;  
}

int main() {
    string str = "malyalam";  

   
    int size = 0;
    while (str[size] != '\0') {
        size++;
    }

    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
