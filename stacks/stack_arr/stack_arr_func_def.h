#ifndef STACK_ARR_FUNC_DEF
#define STACK_ARR_FUNC_DEF

template<class t>
STACK<t>::STACK(long s) {
	n = s;
}

template<class t>
bool STACK<t>::isfull(bool err_messg) {
	if(top == n - 1) {
		if(err_messg)	
			cout << "\nStack Overflow !!" << "\n";
		return true;
	}

	return false;
}

template<class t>
bool STACK<t>::isempty(bool err_messg) {
	if(top == -1) {
		if(err_messg)
			cout << "\nStack Underflow !!" << "\n";
		return true;
	}

	return false;
}

template<class t>
void STACK<t>::push(t val) {
	if(isfull(false)) 
		isfull(true);
	else {
		top += 1;
		stack_arr[top] = val;
	}
}

template<class t>
t STACK<t>::pop() {
	t ret_val;
	if(!isempty(false)) {
		ret_val = stack_arr[top];
		top -= 1;
	}
	else 
		isempty(true);

	return ret_val;
}

template<class t>
void STACK<t>::display() {
	cout << "\nStack :\n";

	for(int i = top; i >= 0; i--) 
		cout << stack_arr[i] << "\n";
}

#endif