#include<iostream>

using namespace std;

int main(){
  string greeting = "Hello";
  cout << "Hello World!!!" << endl;
  int num = 5;

  for(int i = 0; i < num; i++){
    cout << "Count: " << i << " " << greeting << endl;
  }
  return 0;
}
