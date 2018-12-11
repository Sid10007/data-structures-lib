#ifndef STACK_SLL
#define STACK_SLL
#include<singly_ll.h>

template<class t>
class STACK {
	private:	
		sll<t> stack_list;

	public:
		STACK();
		bool isempty(bool err_mssg = false);
		void push(t val);
		t pop();
		void display();
};

#include<stack_sll_func_def.h>

#endif