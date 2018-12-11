#ifndef STACK_SLL_FUNC_DEF
#define STACK_SLL_FUNC_DEF

using namespace std;

template<class t>
STACK<t>::STACK() {

}

template<class t>
bool STACK<t>::isempty(bool err_mssg) {
	if(stack_list.get_head() == NULL) {
		if(err_mssg)
			cout << "Empty Stack !!\n";
		return true; 
	}

	return false;
}

template<class t>
void STACK<t>::push(t val) {
	stack_list.prepend(val);
}

template<class t>
t STACK<t>::pop() {
	return(stack_list.delete_first());
}

template<class t>
void STACK<t>::display() {
	stack_list.display();
}

#endif