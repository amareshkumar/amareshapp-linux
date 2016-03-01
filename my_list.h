#ifndef MY_LINKED_LIST_H
#define MY_LINKED_LIST_H

#include "my_project_app.h"

struct s_list_node {
	int data;
	s_list_node *next;
	s_list_node (s_list_node *next=0){
		
	}
};

struct d_list_node {
	int data;
	d_list_node *d_next;
	d_list_node *d_previous;
};

class My_Linked_List {
private:
	s_list_node s_node;
	d_list_node d_node;
public:
	
	My_Linked_List();

	//void create_single_linked_list();
	//void create_doubly_linked_list();
	s_list_node* delete_node_from_s_ll();
	d_list_node* delete_node_from_d_ll();
	void display_s_list();
	void display_d_list(d_list_node *);
	
	//insert at start, takes element to be inserted 
	s_list_node* insert_into_s_list( int el_data){
		//create a node
		s_list_node* my_sll = new s_list_node();
			my_sll->data = el_data;
			my_sll->next = NULL;  //make this element points to null

			return my_sll;
	}

};

//make the *next points to NULL
My_Linked_List::My_Linked_List(){
	s_node.next = 0;
	d_node.d_next = 0;
	d_node.d_previous = 0;
}


void My_Linked_List::display_s_list(){
	s_list_node *head;
	head = s_node.next;

	while (head->next != NULL){
		std::cout << head->data;
		std::cout << " ";
	}
}




#endif MY_LINKED_LIST_H