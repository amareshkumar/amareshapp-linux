/*
 * CodingTest.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: amakumar
 */

#include "CodingTest.h"

string CodingTest::greatest_pal_string (string input){
	static string pal, pal1, pal2, pal3;
	unsigned int len = input.size();

	//outer loop for the whole string
//	for (int i = 0 ; i < len; i++) {

		//first loop: both ends shrinking
//		int flag1 = false;
//		int start, end;
//		string str1;

//		for (start = i, end = len-i-1; start <= end; start++, end-- ){
//			cout << "start:\t" << start <<"\tinput[start] =\t" << input [start] << endl;
//			cout << "end:\t" << end <<"\tinput[end] =\t" << input [end] << endl;
//
//			if (input[start] == input[end]) {
//				if (start == end) {
//					std::copy (input.begin() + i, input.end() - i,  std::back_inserter(str1));
//					cout << "value of str1: " << str1 << endl;
//					pal1 = str1;   // store the found palindrome to pal1
//					flag1 = true;
//					return pal1;  //change this
//				}
//				continue;
//			}
//			else {
//				flag1 = false;
//				break;
//			}
//		}

		//Second loop: right end shrinking
		for (int i = 0 ; i < len; i++) {
			int flag2 = false;
			int start2, end2;
			string str2;

			cout << "i = " << i << endl;
			//for (start2 = i, end2 = len-i-1; start2 <= end2; start2++, end2-- ){
			//for (start2 = i, end2 = len-i-1; start2 <= end2; end2-- ){
			for (start2 = i, end2 = len-1; start2 <= end2; end2-- ){
				cout << "start2:\t" << start2 <<"\tinput[start2] =\t" << input [start2] << endl;
				cout << "end2:\t" << end2 <<"\tinput[end2] =\t" << input [end2] << endl;

				if (input[start2] == input[end2]) {
						if ((start2 - end2) == 0) {
							//std::copy (input.begin() + i, input.end() - i,  std::back_inserter(str2));
							cout << "value of str2: " << str2 << endl;
	//						pal2 = str2;   // store the found palindrome to pal1
	//						flag2 = true;
	//						return pal2;  //change this
							break;
						}
					flag2 = true;
					//store this string
					static bool temp = true;
					if (temp ) std::copy (input.begin() + start2, input.begin()+end2+1,  std::back_inserter(str2));
					cout << "value of str2: " << str2 << endl;
					temp = false;
					//break; //break the internel loop now and look on from next start2 //index
					start2 = start2 + 1;
					continue;
					//end2 = end2 -1;
					//continue;
				}
				else {
					flag2 = false;
					//Reset str2 to emply.
					str2.clear();
					//end2 = end2 -1;
					continue;
					//break;
				}//else
			}//inner for
		} //outer loop ends

	//third loop: left end shrinking
	//To do

	if (pal1.size() > pal2.size()) {
		if (pal1.size() > pal3.size()) { return pal1; } else { return pal3; }
	}
	else {
		if (pal2.size() > pal3.size()) { return pal2; } else { return pal3; }
	}
} //End of function greatest_pal_string()

bool CodingTest::check_palindrome_sent(string sent){
	int counter1 = 0;
	int counter2 = sent.size();
	bool flag = true;
	int i, j;
	//cout << "value of counter1: " << counter1 << "and counter2: " << counter2 << endl;
	for (i = counter1, j = counter2-1; i <= j; i++, j--) {
			//cout << "value of i = " << i << " value of j: " << j << endl;
			if (sent[i] == sent[j]) {
				//cout <<"Match" << endl;
				continue;
			}
			else {
				flag = false;
				//cout <<"Didn't match" << endl;
				return flag;
			}
	}
	return flag;
}

bool CodingTest::check_anagram_words (string first, string second){
	static bool flag = false;
	if (first.size() != second.size()) return false;

	for (int i = 0; i < first.size(); i++) {
		char temp = first[i];
		//cout << "temp:" << temp << endl;
		for (int j = 0 ; j < second.size(); j++ ) {
			//cout << "second[j]: " << second[j] << endl;
			if (temp != second[j]) {
				if (j != second.size()-1) { continue; } else { flag = false; return flag;}
				flag = false;
				continue;
			}
			else {
				flag = true;
				break;
			}
		}//end of inner loop
		if (i != first.size()-1) { continue; }   //else { flag_re = flag; }//return flag;}
	}//end of outer for loop

	//To check the other way round
	static bool flag_re = false;
	for (int i = 0; i < second.size(); i++) {
			char temp = second[i];
			//cout << "temp:" << temp << endl;
			for (int j = 0 ; j < first.size(); j++ ) {
				//cout << "second[j]: " << first[j] << endl;
				if (temp != first[j]) {
					if (j != first.size()-1) { continue; } else { flag_re = false; return flag_re;}
					flag_re = false;
					continue;
				}
				else {
					flag_re = true;
					break;
				}
			}//end of inner loop
			if (i != first.size()-1) { continue; }   //else { flag_re = flag; }//return flag;}
		}//end of outer for loop

	//if (flag && flag_re) { return true; } else { return false; }
	return (flag && flag_re) ? true:false;
}


