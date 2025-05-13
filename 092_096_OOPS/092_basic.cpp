#include<iostream>
using namespace std;

class Hero{

  //props
  public:
  char name[100];
  int health;

  Hero(int health){
    cout << "constructor called" << endl; 
    this->health = health;
  }

  Hero(Hero& temp){         // copy constructor pass by reference
    this->health = temp.health;
  }

  private:
  char level;

  public:

  int getLevel(){       // GETTER
    return level;
  }

  void setLevel(int l){     //SETTER
    level = l;
    return;
  }

};

int main(){

  //object h1
  Hero h1(60);

  h1.name;
  h1.health;
  //h1.level;       //error bcoz private

  int level = h1.getLevel();

  Hero *a = new Hero(60);  // dynamic allocation in heap

  (*a).health = 67;
  a -> health = 78;


  Hero S(40);  

  Hero R(S);      // copying the object

  return 0;
}