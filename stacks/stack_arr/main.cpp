#include<iostream>
#include<stack_arr.h>

using namespace std;

int main() {
	STACK<int> s(5);
	s.push(5);
	s.push(8);
	s.pop();
	s.pop();
	s.pop();
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