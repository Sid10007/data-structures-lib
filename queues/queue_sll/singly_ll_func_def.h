#ifndef SINGLY_LL_FUNC_DEF
#define SINGLY_LL_FUNC_DEF

template<class t>
sll<t>::sll() {
	head = NULL;
}

template<class t>
void sll<t>::append(t val) {
	node<t>* new_node = new node<t>;
	node<t>** curr_node;
	curr_node = &head;
	
	new_node -> next = NULL;
	new_node -> data = val;

	while(*curr_node != NULL) {
		curr_node = &((*curr_node) -> next);
	}

	*curr_node = new_node;
}

template<class t>
void sll<t>::prepend(t val) {
	node<t>* new_node = new node<t>;

	new_node -> data = val;
	new_node -> next = head;
	head = new_node;
}

template<class t>
bool sll<t>::insert_pos(t val, long pos) {
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
t sll<t>::pop() {
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
t sll<t>::delete_first() {
	if(head == NULL)
		return -1;
	t ret_val = head -> data;

	node<t>* temp = head;

	head = head -> next;
	delete temp;

	return ret_val;
}

template<class t>
bool sll<t>::delete_val(t val) {
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

template<class t>
void sll<t>::display() {
	node<t>* curr_node;
	curr_node = head;

	while(curr_node != NULL) {
		cout << curr_node -> data << "  ";
		curr_node = curr_node -> next;
	}
	cout << "\n";
}

template<class t>
node<t>* sll<t>::get_head() {
	return head;
}

#endif