#ifndef DOUBLY_FUNC_DEF
#define DOUBLY_FUNC_DEF

template<class t>
dll<t>::dll() {
	head = NULL;
}

template<class t>
void dll<t>::append(t val) {
	node<t>* new_node = new node<t>;
	node<t>** curr_node;
	curr_node = &head;
	
	new_node -> data = val;

	if(head == NULL) {
		*curr_node = new_node;
		return;
	}

	while((*curr_node) -> next != NULL) {
		curr_node = &((*curr_node) -> next);
	}

	new_node -> prev = *curr_node;
	(*curr_node) -> next = new_node;
}

/*template<class t>
dll<t>::prepend(t val) {
	node<t>* new_node = new node<t>;

	new_node -> data = val;
	new_node -> next = head;
	head = new_node;
}

template<class t>
bool dll<t>::insert_pos(t val, long pos) {
	node<t>* new_node = new node<t>;
	node<t>** curr_node = &head;
	long ptr = 1;

	while(*curr_node != NULL) {
		if(ptr == pos) {
			new_node -> data = val;
			new_node -> next = *curr_node;	
			*curr_node = new_node;
			return true;
		}

		curr_node = &((*curr_node) -> next);
		ptr++;
	}
	if(ptr == pos) {
		append(val);
		return true;
	}

	return false;
}

template<class t>
t dll<t>::pop() {
	node<t>** curr_node = &head;

	if(head == NULL)
		return -1;

	while((*curr_node) -> next != NULL) {
		curr_node = &((*curr_node) -> next);
	}

	t ret_val = (*curr_node) -> data;
	delete *curr_node;
	*curr_node = NULL;	
	return ret_val;
}

template<class t>
t dll<t>::delete_first() {
	if(head == NULL)
		return -1;
	t ret_val = head -> data;
	head = head -> next;

	return ret_val;
}

template<class t>
bool dll<t>::delete_val(t val) {
	node<t>** curr_node = &head;

	while(*curr_node != NULL) {
		if((*curr_node) -> data == val) {
			node<t>* temp = *curr_node;
			*curr_node = (*curr_node) -> next;
			delete temp;
			return true;
		}

		curr_node = &((*curr_node) -> next);
	}

	return false;
}
*/
template<class t>
void dll<t>::display() {
	node<t>* curr_node;
	curr_node = head;

	while(curr_node != NULL) {
		cout << curr_node -> data << "  ";
		curr_node = curr_node -> next;
	}
	cout << "\n";
}

template<class t>
node<t>* dll<t>::get_head() {
	return head;
}

#endif