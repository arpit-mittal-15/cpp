#include <iostream>
using namespace std;

bool compareArrays(int count1[26], int count2[26]){
  for(int i=0; i<26; i++){
    if(count1[i] != count2[i]){
      return false;
    }
  }
  return true;
}

bool checkInclusion(string s1, string s2){
  int count1[26] = {0};

  for(int i=0; i<s1.length(); i++){
    count1[s1[i] - 'a'] += 1;
  }

  // for(int i=0; i<26; i++){
  //   cout << count1[i] << " ";
  // }cout << endl;
  
  int i=0;
  int windowSize = s1.length();

  int count2[26] = {0};

  while(i<=s2.length()-windowSize){
    for(int j=0; j<windowSize; j++){
      count2[s2[i+j] - 'a'] += 1;
    }
    if(compareArrays(count1, count2)){
      return true;
    }
    else{
      for(int k=0; k<26;k++){
        count2[k] = 0;
      }
    }
    i++;
  }
  return false;
}

int main(){
  string s1 = "adc";
  string s2 = "dcda";

  bool isPresent = checkInclusion(s1, s2);

  if(isPresent){
    cout << "true";
  }
  else{
    cout << "false";
  };
}