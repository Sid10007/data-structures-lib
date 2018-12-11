#include<iostream>
#include<doubly_ll.h>

using namespace std;

int main() {
	dll<int> ll;
	ll.append(1);
	cout << "Head : " << ll.get_head() << "\n";
	ll.append(2);
	cout << "Head : " << ll.get_head() << "\n";
	ll.append(3);
	ll.display();
	ll.prepend(4);
	cout << "Head : " << ll.get_head() << "\n";
	ll.prepend(5);
	cout << "Head : " << ll.get_head() << "\n";
	ll.display();
	ll.insert_pos(6, 1);
	ll.insert_pos(7, 7);
	ll.display();
	cout << "Popped : " << ll.pop() << "\n";
	cout << "Popped : " << ll.pop() << "\n";
	ll.display();
	ll.delete_first();
	ll.delete_val(1);
	cout << "ll.delete_val(7) : " << ll.delete_val(7) << "\n";
	ll.display();
	ll.reverse();
	ll.display();
	return 0;
}