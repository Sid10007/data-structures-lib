#include<iostream>
#include<queue_sll.h>

using namespace std;

int main() {
	QUEUE<int> q;
	q.insert(5);
	q.insert(8);
	q.remove();
	q.remove();
	q.remove();
	q.isempty(true);
	q.insert(1);
	q.insert(2);
	q.display();
	q.insert(3);
	q.display();
	q.remove();
	q.display();
	return 0;
}