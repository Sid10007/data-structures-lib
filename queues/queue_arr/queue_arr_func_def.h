#ifndef QUEUE_ARR_FUNC_DEF
#define QUEUE_ARR_FUNC_DEF

template<class t>
QUEUE<t>::QUEUE(long s) {
	n = s;
}

template<class t>
bool QUEUE<t>::isfull(bool err_messg) {
	if(rear == n - 1) {
		if(err_messg)	
			cout << "\nQueue Overflow !!" << "\n";
		return true;
	}

	return false;
}

template<class t>
bool QUEUE<t>::isempty(bool err_messg) {
	if(rear == -1) {
		if(err_messg)
			cout << "\nQueue Underflow !!" << "\n";
		return true;
	}

	return false;
}

template<class t>
void QUEUE<t>::insert(t val) {
	if(isfull(false)) 
		isfull(true);
	else {
		if(front == rear && rear == -1)
			front = rear = 0;
		else
			rear += 1;
		queue_arr[rear] = val;
	}
}

template<class t>
t QUEUE<t>::remove() {
	t ret_val;
	if(!isempty(false)) {
		ret_val = queue_arr[front];
		front += 1;
		if(front > rear)
			front = rear = -1;
	}
	else 
		isempty(true);

	return ret_val;
}

template<class t>
void QUEUE<t>::display() {
	cout << "\nQueue :\n";

	for(int i = front; i <= rear; i++) 
		cout << queue_arr[i] << "\n";
}

#endif
