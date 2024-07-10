#include <iostream>
using namespace std;

void reverse(char str[]){
  int i=0;
  int len = 0;
  while(str[i] != '\0'){
    len++;
    i++;
  }

  for(int i=0, j=len-1; i<j; i++, j--){
    swap(str[i], str[j]);
  }

  return;
}

int main(){
  char str[20];

  cout << "Enter a string: ";
  cin >> str;

  reverse(str);

  cout << "Reverse: " << str; 

}