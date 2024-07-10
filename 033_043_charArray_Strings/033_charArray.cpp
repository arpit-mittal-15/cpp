#include <iostream>
using namespace std;

int getLength(char string[]){
  int i=0;
  int len = 0;
  while(string[i] != '\0'){
    len++;
    i++;
  }
  return len;
}

int main(){
  char name[20];

  cin >> name;

  cout << name << endl;

  int length = getLength(name);

  cout << "The length of your name is " << length << endl;
}