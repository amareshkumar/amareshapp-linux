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
//#include "LinkedList.h"
#include "node.h"

using namespace std;



class LinkedList2 {
public:
	LinkedList2 (): no_of_items(0){
	}

	void add_to_front ( int item_value );
	void add_to_last ( int item_value );
	void add_after_pos ( node *item, int pos);

	void remove_last_item ();
	void remove_first_item ();

	int get_last_node (node *head);
	void display_list ();
	int population ();
	int return_front_node (){
		return phead->info;
	}
	~LinkedList2();
private:
	static node* phead;
	int no_of_items;
};

#endif	/* LINKEDLIST2_H */

