#include <iostream>
using namespace std;

char getMax(string s){
  int arr[26] = {0};

  for(int i=0; i<s.length(); i++){
    int ascii = int(s[i]);
    if(ascii > 64 && ascii < 91){
      arr[s[i] - 'A'] += 1;
    }
    else if(ascii > 96 && ascii < 123){
      arr[s[i] - 'a'] += 1;
    }
  }

  int ans = 0;
  int index = -1;

  for(int i=0; i<26; i++){
    if(arr[i] > ans){
      ans = arr[i];
      index = i;
    }
  }

  return char(index+97);
}

int main(){
  string str;
  getline(cin,str);

  char max = getMax(str);

  cout << "Max occuring char is " << max;
}