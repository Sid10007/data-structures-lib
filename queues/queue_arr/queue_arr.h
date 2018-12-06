#ifndef QUEUE_ARR
#define QUEUE_ARR

using namespace std;

template<class t>
class QUEUE {
	private:	
		long n, front = -1, rear = -1;
		t queue_arr[1000000];

	public:
		QUEUE(long s);
		bool isfull(bool err_messg);
		bool isempty(bool err_messg);
		void insert(t val);
		t remove();
		void display();
};

#include<queue_arr_func_def.h>

#endif