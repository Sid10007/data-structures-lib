#ifndef QUEUE_SLL_FUNC_DEF
#define QUEUE_SLL_FUNC_DEF

using namespace std;

template<class t>
QUEUE<t>::QUEUE() {

}

template<class t>
bool QUEUE<t>::isempty(bool err_mssg) {
	if(queue_list.get_head() == NULL) {
		if(err_mssg)
			cout << "Empty Queue !!\n";
		return true; 
	}

	return false;
}

template<class t>
void QUEUE<t>::insert(t val) {
	queue_list.append(val);
}

template<class t>
t QUEUE<t>::remove() {
	return(queue_list.delete_first());
}

template<class t>
void QUEUE<t>::display() {
	queue_list.display();
}

#endif