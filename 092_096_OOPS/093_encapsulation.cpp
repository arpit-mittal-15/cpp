#include<iostream>
using namespace std;

class Student{

//sb private h
  private:
    string name;
    int age;
    int height;

  public:
    int getAge(){
      return this->age;
    }
};

int main(){

  Student first;

  return 0;
}