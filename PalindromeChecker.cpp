#include <iostream>
using namespace std;

bool is_palindrome(string st){
    for(int i=0;i<st.length();i++)
        if(st[i] != st[st.length() - i - 1])
        return false;
        else{
        return true;
    }
}

int main(){
    string st;
    cout << "Type a word(NO CAPS) : "; 
    cin >> st;

    if(is_palindrome(st) == true){
        cout << st << " is a palindrome" << endl;
    }else{
        cout << st << " is not a palindrome" << endl;

    }
    return 0;
}