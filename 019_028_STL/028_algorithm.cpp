#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(6);

  cout << "Finding 6: " << binary_search(v.begin(), v.end(), 6) << endl;

  cout << "Lower bound: " << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
  cout << "Upper bound: " << upper_bound(v.begin(), v.end(), 4)-v.begin() << endl;

  cout << "Max" << max(v.front(), v.back()) << endl;
  cout << "Min" << min(v.front(), v.back()) << endl;

  string abcd = "abcd";
  reverse(abcd.begin(), abcd.end());

  cout << "String abcd : " << abcd << endl;

  rotate(v.begin(), v.begin() + 1, v.end());
  for(int i:v){
    cout << i << " ";
  }cout << endl;

  //sort

}