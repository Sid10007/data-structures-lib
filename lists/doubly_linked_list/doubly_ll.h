#ifndef DOUBLY_LL
#define DOUBLY_LL

using namespace std;

template<class t>
class node {
	public :
		t data;
		node* next;
		node* prev;
		node();
};

template<class t>
class dll {
	private:
		node<t>* head;

	public:
		dll();
		void append(t val);
		void prepend(t val);
		bool insert_pos(t val, long pos);
		t pop();
		t delete_first();
		bool delete_val(t val);
		node<t>* reverse();
		void display();
		node<t>* get_head();
};

#include<doubly_ll_func_def.h>

#endif