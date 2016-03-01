#include "my_project_app.h"
#include "my_utilities.h"

using namespace std;

//Create maps to associate these enums with user commands
static std::map <std::string, StringValueEnum> user_command_string_map;
static std::map <std::string, StringValueEnum> user_command_int_map;

//to check the type of the command given by the user
bool is_number(char *s) {
	int i = 0, flag;

	while (s[i]){
		//if there is a letter in a string then string is not a number
		if (isalpha(s[i])){
			flag = 0;
			break;
		}
		else flag = 1;
		i++;
	}
	if (flag == 1) return true;
	else return false;
}

//declaration of user_command_map()
//void user_command_map();
//void user_command_map_int();
static const int MAX_SIZE = 20;

void my_utility(){

	//Initiate mapping of user commands (string) to enum
	//by using calling string map
	user_command_map();
	user_command_map_int();

	//std::string  user_command;
	//char* user_command = NULL;
	char user_command[MAX_SIZE];
	std::cout << "=============================\nWelcome to Amaresh projects" << endl;
	std::cout << "What you want to do? \n\
				 	1. social_network_app\n\
					2. programming questions\n\
					3. Contact me\n\
					4. Polymorphism\n\
					5. Theading\n\
					6. gc\n\
					7. social\n\
					8. overloading\n\
					10.Exit\n\n\
																																												Write your command: ";

	cin.getline(user_command, MAX_SIZE);
	std::cout << "\nYou have chosen to explore about " << user_command << endl;

	//if user enters a string as an action.
	if (!is_number(user_command)){
		//Then, convert string to something compiler can understand without ambiguity
		switch (user_command_string_map[user_command]){
			case socailNetwork: {
						break;
			}
			case programmingQuestions: {
						programming_questions prog_q;
						string user_command = "";
						cout << "Enter new string to reverse:\n";
						getline(std::cin, user_command);
						cout << programming_questions::Reverse(user_command) << endl;
						prog_q.Reverse(user_command);

						break;
			}
			case contactMe: {
						cout << "Not developed yet\n";
						break;

			}
			case getMeOutOfHere: {
						break;
			}

			default: {
						 cout << "Please select a valid input. " << endl;
			}
		} //end of switch
	} //End of if
	else { //if user input an integer corresponding to some option
		switch (user_command_int_map[user_command]){
			case polymorphic: {
							  //polymorphic_activities();
							  break;
			}
			case programmingQuestions: {

					programming_questions prog_q;
					string user_command = "";
					cout << "Enter new string to reverse:\n";
					getline(std::cin, user_command);
					cout << programming_questions::Reverse(user_command) << endl;
					prog_q.Reverse(user_command);

					break;
			}
			case threading: {
					//To do
					//My_ThreadActivities my_thread;
					//my_thread.simple_thread_example();
					break;
			}
			case gc:
					//implement own garbage collector
			{

							   std::cout << "in my gc\n";
							   break;
			}
			case overloading: {
					  cout << "overloading new and delete\n\n";

					  int *p = new int(10);
					  float *p_f = new float(2.4f);

					  cout << "square of int value: is: " << pow(*p, 2) << endl;
					  //call my delete
					  delete p;
					  cout << "square of float value: is: " << pow(*p_f, 2) << endl;
					  delete p_f;
					  break;
			}

			case social:{
						std::cout << " Website section. Note developed yet" << endl;
						break;
			}
			default:{
					cout << "Please enter a valid input" << endl;
					break;
			}
		}//end of switch for 
            cout << "\nThank you for trying out this app. for any query write to amaresh.kumar@live.in" << endl;
	} //end of else
} //End of my_utility()

void user_command_map(){
		user_command_string_map["social network"]		= socailNetwork,
		user_command_string_map["programming"]			= programmingQuestions,
		user_command_string_map["programming question"] = programmingQuestions,
		user_command_string_map["contact me"]			= contactMe,
		user_command_string_map["exit"]					= getMeOutOfHere;
}

void user_command_map_int(){
	user_command_int_map["1"] = socailNetwork;
	user_command_int_map["2"] = programmingQuestions;
	user_command_int_map["3"] = contactMe;
	user_command_int_map["4"] = polymorphic;
	user_command_int_map["10"] = getMeOutOfHere;
	user_command_int_map["5"] = threading;
	user_command_int_map["6"] = gc;
	user_command_int_map["7"] = social;
	user_command_int_map["8"] = overloading;
}

//#endif //#if __cplusplus >= 201103L
