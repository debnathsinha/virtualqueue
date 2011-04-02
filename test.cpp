#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int main() {

  cout << "Hello World\n";

  queue<int> q;
  stack<int> s;

  s.push(1);
  s.push(7);
  cout << s.top() << " " << s.size() << endl;

  if( !q.empty() ) {
    cout << "How is the queue empty?\n";
  } else {
    q.push(3);
    q.push(4);
  }
  cout << q.size() << endl;

  list<int> myList;
  myList.push_back(10);
  myList.push_back(20);
  for( list<int>::iterator listIter(myList.begin()), end(myList.end()); listIter != end; ++listIter) {
    cout << *listIter << " ";
  }

  cout << endl;

  
}
