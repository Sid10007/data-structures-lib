#ifndef SINGLY_LL
#define SINGLY_LL

using namespace std;

template<class t>
class node {
	public :
		t data;
		node* next;
		node() {
			data = 0;
			next = NULL;
		}
};

template<class t>
class sll {
	private:
		node<t>* head;

	public:
		sll();
		void append(t val);
		void prepend(t val);
		bool insert_pos(t val, long pos);
		t pop();
		t delete_first();
		bool delete_val(t val);
		void display();
		node<t>* get_head();
};

#include<singly_ll_func_def.h>

#endif