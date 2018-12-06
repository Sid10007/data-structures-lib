#ifndef STACK_ARR
#define STACK_ARR

using namespace std;

template<class t>
class STACK {
	private:	
		long n, top = -1;
		t stack_arr[1000000];

	public:
		STACK(long s);
		bool isfull(bool err_messg);
		bool isempty(bool err_messg);
		void push(t val);
		t pop();
		void display();
};

#include<stack_arr_func_def.h>

#endif