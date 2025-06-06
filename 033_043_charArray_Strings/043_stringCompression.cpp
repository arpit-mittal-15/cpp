#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars){
  int i=0;
  int ansIndex = 0;
  int n = chars.size();

  while(i<n){
    int j = i+1;
    while(j<n && chars[i] == chars[j]){
      j++;
    }

    //when vector ends or encounters a different character.

    chars[ansIndex++] = chars[i];

    int count = j-i;

    if(count > 1){
      string cnt = to_string(count);
      for(char ch: cnt){
        chars[ansIndex++] = ch;
      }
    } 
    i=j;
  }
  return ansIndex;
}

int main(){
  vector<char> chars{'a','a','b','b','c','c','c'};

  int res = compress(chars);

  cout << res << endl;

  for(char i:chars){
    cout << i << " ";
  }
}