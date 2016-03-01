#include "my_project_app.h"

void print_d_arra(int d_array[][4]);
void add_each_2darray(int arra[][4], int add_value);
void print_array(int this_array[][4]);
void print_array2(int this_array[][4]);

void populate_2darray(){
	
	int d_array[5][4];
	//i => column
	//j=> row
	int this_n = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
			d_array[i][j] = this_n;
			this_n++;
		}
	}
	print_d_arra(d_array);
	cout << "\n adding 5 to each of 2-d array element\n";
	add_each_2darray(d_array, 5);
}

//add value to every elem

void add_each_2darray(int arra[][4], int add_value){

	int d_array[5][4];
	//i => column
	//j=> row
	int this_n = 0;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 4; j++){
			d_array[i][j] = this_n + add_value;
			this_n++;
		}
	}
	print_d_arra(d_array);
}

void print_d_arra(int d_array[][4]){
	
	for (int i = 0; i < 5; i++){
		std::cout << std::endl;
		for (int j = 0; j < 4; j++){
			cout << setw(3)<< d_array[i][j]<<" ";
		}
	}
}

int** create_sparx_matrix(){
	int** my_2d_array = NULL;
	
	int this_n = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			*((*my_2d_array)+ j) = 1;
		}
	}
	return my_2d_array;
}


void create_sparx_matrix (const int m, const int n){
	int d_array[4][4];
	//i => column
	//j=> row
	
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			d_array[i][j] = 1;
		}
	}
	//fill with 0: fix me
	for (int i = 0; i < 4; i++){
		for (int j = 3; j < i; j++){
			d_array[i][j] = 0;
		}
	}

	print_array2(d_array);
}

void print_array(int this_array[][4]){

	for (int i = 0; i < 5; i++){
		std::cout << std::endl;
		for (int j = i; j > 0; j++){
			cout << setw(3) << this_array[i][j] << " ";
		}
	}
}


void print_array2(int this_array[][4]){
	
	for (int i = 0; i < 4; i++){
		std::cout << std::endl;
		for (int j = 0; j < 4; j++){
			cout << setw(3) << this_array[i][j] << " ";
		}
	}
}

//helper functions call
//cout<<"Populate 2-d Array\n";
//populate_2darray();
//std::cout << "\nCreating sparx-matrix\n";
//create_sparx_matrix(4, 4);

