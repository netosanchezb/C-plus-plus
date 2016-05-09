#include <iostream>
#include <string>

using namespace std;

string palindrome(string word){
  string ans, backwards;
  cout << "Provide the word: " << endl;
  cin >> word;
  int size = word.length();
  for(int i = size-1; i>=0; i--){
    backwards = backwards + word[i];
  }
    cout << backwards << endl;
    if(word == backwards)
    {
      ans = "Is a palindrome";
    }
    else
    {
      ans = "Is not a palindrome";
    }
    return ans;
}
int main(){
  string ans;
  cout << palindrome(ans) << endl;
}
