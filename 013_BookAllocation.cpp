#include <iostream>
using namespace std;

int binarySearch(int book[], int books, int students){
  int totalSum = 0;
  for(int i=0; i<books; i++){
    totalSum += book[i];
  }

  int start = 0;
  int end = totalSum;

  int mid = start + (end - start)/2;

  while(start<=end){
    int index = 0;
    int max = 0;
    for(int i=0; i<students; i++){
      int sum = 0;
      while(sum + book[index] <= mid){
        sum += book[index];
        index++;
      }
      if(max < sum){
        max = sum;
      }
    }
    
    if(index-1 == books-1){
      return max;
    }
    else if(index-1 < books-1){
      start = mid+1;
    }
    else{
      end = mid -1;
    }
    mid = start + (end - start)/2;
  }
  return -1;
}

int main(){
  int book[4] = {12,34,67,90 };
  int students = 3;
  int books = 4;

  int ans = binarySearch(book, books, students);

  cout << ans;

}