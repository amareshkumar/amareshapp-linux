/*
 * LinkedList2.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: amakumar
 */

#include "LinkedList2.h"
//using namespace linkedlist;

node* LinkedList2::phead = nullptr;

void LinkedList2::add_to_front ( int item_value ){
	node *newnode = new node (item_value);
	this->phead = newnode;
	//newnode->next = nullptr; //as newnode->next is already pointing to nullptr!
}

void LinkedList2::add_to_last ( int item_value ){
	node *newnode = new node (item_value);
	if (!this->phead) {
		phead = newnode;
		return;
	}
	node *current = this->phead;

	while (current->next) {
		current = current->next;
	}
	//now pointing to the last node
	current->next = newnode;

	//delete newnode;  //delete newnode to avoid memory leak
	//newnode->next = nullptr; //as newnode->next is already pointing to nullptr!
}

//void LinkedList2::add_after_pos ( node *item, int pos){
//
//}
//
//int LinkedList2::get_last_node (node *head){
//
//}

void LinkedList2::remove_last_item (){

}

void LinkedList2::remove_first_item (){

}

void LinkedList2::display_list (){
	int no_of_nodes = 0;
	if (!this->phead){
		cout << "No item to display!!. Please add some item in the list. \n";
		return;
	}
	while (this->phead){
		cout << this->phead->info<< " " ;
		this->phead = this->phead->next;
		no_of_nodes++;
	}
	cout << "\nTotal elements: " << no_of_nodes << endl;
}

int LinkedList2::population (){

	return 0;
}

LinkedList2::~LinkedList2 (){
	cout << "LinkedList2 d-tor" << endl;
	//delete newnode;
}
