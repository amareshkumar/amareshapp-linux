/*
 * File:   LinkedList.h
 * Author: Jay Mata Di
 *
 * Created on December 12, 2015, 11:11 PM
 */

#ifndef LINKEDLIST2_H
#define	LINKEDLIST2_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
class lnode {
public:
	lnode ( T value ): info ( value), next (nullptr) {
	}
	T info;
	lnode* next;
};

template <class T>
class LinkedList2 {
public:
	LinkedList2 (): no_of_items(0){
	}

	void add_to_front ( T item_value );

	//void add_to_front ( int item_value );
	/*
	void add_to_last ( int item_value );
	void add_after_pos ( lnode *item, int pos);

	void remove_last_item ();
	void remove_first_item ();

	int get_last_node (lnode *head);
	void display_list ();
	int population ();
	int return_front_node (){
		return phead->info;
	}
	*/
	~LinkedList2();
private:
	static lnode<T>* phead;
	int no_of_items;
};

#endif	/* LINKEDLIST2_H */

