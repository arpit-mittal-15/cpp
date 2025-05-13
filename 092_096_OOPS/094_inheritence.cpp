#include<iostream>
using namespace std;

class Human{

  public:
    int height;
    int weight;
    int age;

  public:
    int getAge(){
      return this->age;
    }
    void setWeight(int w){
      this->weight = w;
    }
};

class Male: public Human{

  public:
    string color;

  void sleep(){
    cout << "Male sleeping" << endl;
  }
};

int main(){

  Male object1;
  object1.age = 10;

  return 0;
}