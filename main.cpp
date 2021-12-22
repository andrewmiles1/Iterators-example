#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> myList;

  for(int i = 0; i < 10; i++){
    myList.push_back(i);
  }

  for(vector<int>::iterator it = myList.begin(); it != myList.end(); it++){
    cout << *it << endl;
  }
}