#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  // int i=1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout << "* ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // int i=1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout<< i;
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j =1;
  //   while(j<=n){
  //     cout<< j;
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j=n;
  //   while(j>0){
  //     cout<< j;
  //     j--;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // int count = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout<< count;
  //     count++;
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=i){
  //     cout<< "* ";
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=i){
  //     cout<< i;
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i=1;
  // while(i<=n){
  //   int j =0;
  //   while(j<i){
  //     cout<< i+j;
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = i;
  //   while(j>0){
  //     cout<< j;
  //     j--;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout << char(i+64);
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout << char(i+j+63);
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=i){
  //     cout<< char(i+64);
  //     j++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=i){
  //     cout << char(i+j+63);
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=i){
  //     cout << char(n-i+j+64);
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int j = n-i;
  //   while(j>0){
  //     cout<< "  ";
  //     j--;
  //   }
  //   int k = 1;
  //   while(k<=i){
  //     cout<< "* ";
  //     k++;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int space = 1;
  //   while(space<i){
  //     cout<< "  ";
  //     space++;
  //   }
  //   int j = n-i+1;
  //   while(j){
  //     cout<< "* ";
  //     j--;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int space = 1;
  //   while(space<i){
  //     cout<< "  ";
  //     space++;
  //   }
  //   int j = n-i+1;
  //   while(j){
  //     cout << n-j+1 << " ";
  //     j--;
  //   }
  //   cout<< endl;
  //   i++;
  // }

  // int i = 1;
  // while(i<=n){
  //   int space = n-i;
  //   while(space){
  //     cout << "  ";
  //     space--;
  //   }
  //   int j = 1;
  //   while(j<=i){
  //     cout << j<< " ";
  //     j++;
  //   }
  //   int k = 1;
  //   while(k<i){
  //     cout<< i-k << " ";
  //     k++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  int i = 1;
  while(i<=n){
    int first = 1;
    while(first<=(n-i+1)){
      cout << first << " ";
      first++;
    }
    int space = 2;
    while(space < (2*i)){
      cout << "  ";
      space++;
    }
    int second = n-i+1;
    while(second){
      cout << second << " ";
      second--;
    }
    cout << endl;
    i++;
  }
}