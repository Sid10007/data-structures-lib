#include<iostream>
#include<queue_arr.h>

using namespace std;

int main() {
	QUEUE<int> q(5);
	q.insert(5);
	q.insert(8);
	q.remove();
	q.remove();
	q.remove();
	q.insert(1);
	q.insert(2);
	q.insert(3);
	q.insert(1);
	q.insert(1);
	q.insert(1);
	q.display();
	return 0;
}