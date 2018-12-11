#ifndef QUEUE_SLL
#define QUEUE_SLL
#include<singly_ll.h>

template<class t>
class QUEUE {
	private:	
		sll<t> queue_list;

	public:
		QUEUE();
		bool isempty(bool err_mssg = false);
		void insert(t val);
		t remove();
		void display();
};

#include<queue_sll_func_def.h>

#endif