#pragma once 
#ifndef PROGRAMMING_H
#define PROGRAMMING_H

#include <iostream>
#include <string>

using namespace std;

void reversal();

class programming_questions {
public:
	std::string static Reverse(string str);
	std::string& reverse(std::string &st, int init, int final);
	std::string& reverse_word_wise(std::string &str);
};

class matrix_op {

public:
	void replaceWithZero();

	void display (int arr[4][4]){
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 4; j++){
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
};

#endif //PROGRAMMING_H