/*
 * LinkedList2.cpp
 *
 *  Created on: Jan 5, 2016
 *      Author: amakumar
 */

#include "LinkedList2.h"

template <class T>
lnode<T>* LinkedList2<T>::phead = nullptr;

template <class T>
void LinkedList2<T>::add_to_front ( T item_value ){
	lnode<T> *newlnode = new lnode<T> (item_value);
	this->phead = newlnode;
	//newlnode->next = nullptr; //as newlnode->next is already pointing to nullptr!
}

/*
void LinkedList2::add_to_last ( int item_value ){
	lnode *newlnode = new lnode (item_value);
	if (!this->phead) {
		phead = newlnode;
		return;
	}
	lnode *current = this->phead;

	while (current->next) {
		current = current->next;
	}
	//now pointing to the last lnode
	current->next = newlnode;

	//delete newlnode;  //delete newlnode to avoid memory leak
	//newlnode->next = nullptr; //as newlnode->next is already pointing to nullptr!
}

//void LinkedList2::add_after_pos ( lnode *item, int pos){
//
//}
//
//int LinkedList2::get_last_lnode (lnode *head){
//
//}

void LinkedList2::remove_last_item (){

}

void LinkedList2::remove_first_item (){

}

void LinkedList2::display_list (){
	int no_of_lnodes = 0;
	if (!this->phead){
		cout << "No item to display!!. Please add some item in the list. \n";
		return;
	}
	while (this->phead){
		cout << this->phead->info<< " " ;
		this->phead = this->phead->next;
		no_of_lnodes++;
	}
	cout << "\nTotal elements: " << no_of_lnodes << endl;
}

int LinkedList2::population (){

	return 0;
}

*/

template <class T>
LinkedList2<T>::~LinkedList2 (){
	cout << "LinkedList2 d-tor" << endl;
	//delete newlnode;
}

