#include "my_project_app.h"

//
struct dl_node{

	dl_node *next;
	dl_node *prev;
	int data;
};

void add_at_end(struct dl_node** head, int el){

	struct dl_node* new_d_node = (struct dl_node*) malloc(sizeof (dl_node));

	new_d_node->data = el;
	new_d_node->next = NULL;
	new_d_node->prev = NULL;

	struct dl_node* temp = *head; //make temp contains address of head

	if (temp == NULL){
		temp = new_d_node;
		temp->prev = NULL;
		temp->next = NULL;
		cout << "Item added in d_list\n";
		*head = temp;

		return ;
	}

	struct dl_node* temp_pr = NULL;
	while (temp != NULL)
	{
		temp_pr = temp;
		temp = temp->next;
	}

	temp_pr->next = new_d_node;
	new_d_node->prev = temp_pr;

	cout << "Item added in d_list\n";

//	return temp;
}

void diplay_d_list(struct dl_node* head){
	struct dl_node* temp = head; //make temp contains address of head

	while (temp != NULL){
		cout << temp->data << " ";
		temp = temp->next; 
	}
	std::cout << std::endl;

}

#ifdef DL_LIST

int main(){
	struct dl_node* my_d_list = NULL;
	
	add_at_end(&my_d_list, 90);
	add_at_end(&my_d_list, 10);
	add_at_end(&my_d_list, 20);
	add_at_end(&my_d_list, 30);
	add_at_end(&my_d_list, 40);
	add_at_end(&my_d_list, 50);
	add_at_end(&my_d_list, 100);
	add_at_end(&my_d_list, 80);
	add_at_end(&my_d_list, 60);
	add_at_end(&my_d_list, 70);
	
	cout << "\nDisplaying list:\n";
	diplay_d_list(my_d_list);
	cout << "\nSorting the d_list\n";
}

#endif 
