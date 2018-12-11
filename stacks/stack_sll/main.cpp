#include<iostream>
#include<stack_sll.h>

using namespace std;

int main() {
	STACK<int> s;
	s.push(5);
	s.push(8);
	s.pop();
	s.pop();
	s.pop();
	s.isempty(true);
	s.push(10);
	s.push(11);
	s.push(45);
	s.display();
	s.push(50);
	s.display();
	s.pop();
	s.display();
	return 0;
}