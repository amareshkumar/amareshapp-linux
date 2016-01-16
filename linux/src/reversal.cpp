#include "my_project_app.h"
#include "programming.h"
using namespace std;

static const int command_max_size = 100;

std::string& reverse(std::string &st, int init, int final){
	int lenght = st.size();
	string temp = "";
	for (int i = init; i < final; i++){
		temp[i] = st[i];
		st[i] = st[lenght - final + 1];
		st[lenght - final + 1] = temp[i];
	}
	return st;
}


std::string& reverse_word_wise(std::string &str){
	//string temp = str;
	//cout << temp;
	static int position = 0;;
	for (int i = position; i < str.size(); i++){
		if ((str[i] == '\t') || (str[i] == ' ')) {
			reverse(str, position, i);
			position = i;
		}
	}
	return str;
}


void reversal (){
	std::string user_command= "my name is amaresh";
	reverse_word_wise(user_command);
}