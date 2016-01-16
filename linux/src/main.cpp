#include "my_project_app.h"

extern MyLogger* mylog;
    
#ifdef HISTORY
    //MyApplication::instance();
    //MyApplication::start();
    //my_utility();

    /* 
    MyString mystring (const_cast<char*>("Hi, Amaresh Kumar! Have good time!")); 
        
    MyString newString = mystring;       
    cout<<"Original: "<<mystring.GetMyString()<<endl;
    cout<<"Copied (With =) : "<<newString.GetMyString()<<endl;
        
    //        char* stringToReverse = (char*) "Amaresh";
    //        mystring.StringReverse(stringToReverse);
    //        cout << "\nREversed String: " <<stringToReverse<<endl; 
               
    MyString newString2 (mystring);
    cout<<"Copied (With Bracket): "<<newString2.GetMyString()<<endl;
        
    MyString newString3; 
    newString3 = mystring; 
    cout<<"Copied (With Assign Op): "<<newString2.GetMyString()<<endl;
        
    cout <<"No of String object now: "<<mystring.Get_No_of_MyString_Obj()<<endl;
        
    cout<<"\n\nSmart pointers\n";
    std::shared_ptr <MyString> p_myString = std::make_shared<MyString>(); 
    p_myString->SetMyString("my string");
    cout<<"My String Value:"<<p_myString->GetMyString()<<endl; 
    cout <<"No of String object now: "<<p_myString->Get_No_of_MyString_Obj()<<endl; */

    //mylog->log_msg("Done with String Class writing\n");

    //Enable this after implementing append function

    /* 
        
     * //Follwing was successfully done
    char* hello = (char*) "I'm Amaresh";
        
    MyString newString ("Hi There, ");
    char* result = newString.myAppend(hello); 
        
    cout << result; 
     */

    //To do following snippet, not working
    /*
    mylog->log_msg("Time now is: ");
    time_t timev;
    struct tm *timenow;
    time(&timev);
    timenow = localtime(&timev);

    mylog->log_msg(reinterpret_cast<char*> (timenow));
    */

    //const char* str = "Hi, how are you";
    //cout <<"After reversal: "<< MyString::MyStringReverse(str)<<endl;
    //mylog->log_msg ("Hi, " + "mylog");  // to do. 
    //cout << "Reversed string is: " << ReverseWordWise(str);
    //mylog->log_msg("Smart pointers practises\n");


    //std::shared_ptr<IFelid> mytiger = std::make_shared<Tiger>();
    //std::shared_ptr<Tiger> mytiger_sh = std::make_shared<Tiger>("My Shared Tiger\n");
    //auto mytigerAuto = std::make_shared<Tiger>("My Auto Tiger in C++11\n");
    //std::unique_ptr<Tiger> mytiger3("My Unique Tiger");
    //std::auto_ptr<Tiger> mytiger3;

    mylog->log_msg("Using Shared Pointer");
    //mylog->log_msg (mytiger_sh->get_name());
    mylog->log_msg("Using Auto Pointer");
    //mylog->log_msg (mytigerAuto->get_name());

    mylog->log_msg("Doing more clarification on Shared and Unique smart pointers\n");

    //std::weak_ptr<Tiger> mytigerWeak = mytiger_sh;
    //mytiger_sh.reset();
    mylog->log_msg("After resetting memory for shared pointer: \nIt should Segmentation fault here\n Disbaling following line");
    //mylog->log_msg(mytiger_sh->get_name());

    //std::shared_ptr<Tiger> mytiger_sh2 = std::make_shared<Tiger>("My Second Shared Tiger\n");
    //std::shared_ptr<Tiger> mytiger_sh3 = mytiger_sh2;
    //mytiger_sh2.reset();
    mylog->log_msg("AFter resetting memory for shared pointer mytiger_sh2: ");
    //mylog->log_msg (mytiger_sh3->get_name()); 

    mylog->log_msg("this line \" + If you see \" + \"with multiple + gives compilation error\n To Fix\n");

    mylog->log_msg("Threading practises\n");
    mylog->log_msg(("creating 2 threads\n"));

    //    pthread_t th1 ;
    //    pthread_t th2; 
    //    void* hallo = const_cast<char*>("hello"); 
    //    
    //    int t1 = pthread_create(&th1, NULL, increment_by_five, hallo);
    //    
    //    mylog->log_msg ("value of th1: ");
    //    mylog->log_msg (<char*>t1);

    //mylog->log_msg ("Practising with Boost lib\n");

    mylog->log_msg("Practising uses of Iterators");
    /*
    std::vector <int> myvect; 
    
    for (int i = -10 ; i < 10; i++){
        myvect.push_back(i);
    }
    
    mylog->log_msg ("Printing values: using iterator\n");
    vector<int>::iterator it; 
    
    for (it = myvect.begin(); it < myvect.end(); it++){
        cout <<*it<<" ";
    }
    
    cout << "\n" << myvect.size();
    
    myvect.push_back (100);
    cout <<"\nNow size is: " << myvect.size();
    myvect.pop_back();
    cout <<"\nNow size is: " << myvect.size();
    
    
    mylog->log_msg ("Using std::Set functionalities\n");
    
    std::cout<<std::endl;
    set <int, std::greater<int>> myset; 
    myset.insert({1, 4, 20, 3, 7});
    myset.insert(10);
    myset.insert(20);
    myset.insert(20);
    myset.insert(100);
    
    cout << "size of myset is: " <<myset.size()<<endl;
    
    ///copy (myset.begin(), myset.end()), ostream_iterator<int>(cout, "");
    for (int elem : myset){cout <<elem<<" ";}
    
    
    std::cout<<std::endl;
    mylog->log_msg ("Using std::multiset functionalities\n");
    multiset <int, std::greater<int>> mymset; 
    mymset.insert({1, 4, 20, 3, 7});
    cout << "size of mymset is: " <<mymset.size()<<endl;
    mymset.insert(10);
    mymset.insert(20);
    mymset.insert(20);
    mymset.insert(100);
    cout << "size of mymset is: " <<mymset.size()<<endl;
    for (int elem : mymset){cout <<elem<<" ";}
    
    
    mylog->log_msg ("Using map and multimap\n");
    map <int, string> map;
    map.insert (make_pair (1, "Amaresh"));
    map.insert (make_pair (2, "Akki"));
    map.insert (make_pair (3, "Kirti"));
    map.insert (make_pair (4, "Rashmi"));
    
    cout <<"\nSize of map: " << map.size() << "\nand maximum possible size is: " << map.max_size()<<endl;
    mylog->log_msg ("Printing elements of map\n");
    
    for (auto ele : map){
        cout << ele.first <<" "<<ele.second<<endl;
    }
    
    map.insert (std::pair <int, string>(4, "Rashmi"));
    map.insert (std::pair <int, string>(5, "Papa"));
    map.insert (std::pair <int, string>(5, "Papa"));
    map.insert (std::pair <int, string>(6, "Mommy"));
    cout <<"AFter insert:\n";
    cout <<"\nSize of map: " << map.size() << "\nand maximum possible size is: " << map.max_size()<<endl;
    
    for (auto ele : map){
        cout << ele.first <<" "<<ele.second<<endl;
    }
   
    cout << "\nMulti map\n";
    
    mylog->log_msg ("Using mmap and multimmap\n");
    std::multimap<int, string> mmap; 
    mmap.insert (make_pair (1, "Amaresh"));
    mmap.insert (make_pair (2, "Akki"));
    mmap.insert (make_pair (3, "Kirti"));
    mmap.insert (make_pair (4, "Rashmi"));
    
    cout <<"Size of mmap: " << mmap.size() << "\nand maximum possible size is: " << mmap.max_size()<<endl;
    mylog->log_msg ("Printing elements of mmap\n");
    
    for (auto ele : mmap){
        cout << ele.first <<" "<<ele.second<<endl;
    }
    
    mmap.insert (std::pair <int, string>(4, "Rashmi"));
    mmap.insert (std::pair <int, string>(5, "Papa"));
    mmap.insert (std::pair <int, string>(5, "Papa"));
    mmap.insert (std::pair <int, string>(6, "Mommy"));
    cout <<"AFter insert:\n";
    cout <<"\nSize of mmap: " << mmap.size() << "\nand maximum possible size is: " << mmap.max_size()<<endl;
    
    for (auto ele : mmap){
        cout << ele.first <<" "<<ele.second<<endl;
    }
    */
    mylog->log_msg ("End of container practises\n");
    
    //To fix following
//    Tiger tiger ("Mytiger");
//    cout << "\nName: "<<tiger.get_name() << "\tType: "<<tiger.get_type()<<"\nArea: "<<tiger.habitant_area()<<endl;
//    
//    Tiger tiger2 ("White Tiger", "Felid class");
//    cout << "\nName: "<<tiger2.get_name() << "\tType: "<<tiger2.get_type()<<"\tArea: "<<tiger2.habitant_area()<<endl;
//    
//    //mylog->log_msg (tiger.no_of_tigers());
    
    mylog->log_msg("Practising Template functions\n");
    
    mylog->log_msg ("Value returned from my_temp_function: ");
    //mylog->log_msg (my_temp_function("Hi TEmplate"));
    //Tiger tiger; 
    //cout << "Size of class \"Size\" now is: " << sizeof(Size)<<endl;
    mylog->log_msg ("Threading revisited\n");
    
//    pthread_t th1; 
//    //pthread_t th2; 
//    
//    int rc; 
//    
//    rc = pthread_create(&th1, NULL, thread_func, (void*)"hello");
//    
//    if (!rc) cout <<"\nThread with id: \n" << th1;

//    if (argc < 1) {
//        cout << "Not suffiecient arguments!!\n";
//    }
//    cout << "Enter sequences to be reversed: \n";
////    std::vector<char> cont;
//    char cont;
//    int i = 0;
//    
//    while (getchar() != '\n'){
//        strcpy (cont, getchar());
//        i++;
//    } 
//    cout << "you entered: ";
//    for (int i = 0; i < strlen(cont); i++){
//        cout << cont[i] << " ";
//    }
//    for (int i = strlen(cont); i < 0; i--){
//        cout << cont[i]<<"\n";
//    }    
    
#endif //HISTORY
  

int main(int argc, char* argv[]) {
    cout << "==================================================\n";
#ifdef SMART_PTR
		auto sp_tring = make_shared < Triangle > (10, 8, 10, 4, 5);
		std::cout << "==================================================\n";
		cout << "\nArea of trianlge: " << sp_tring->get_area() << "\nAnd the Perimeter is: " << sp_tring->get_perimeter() << endl;

		shared_ptr < Triangle > sp_tring2 = sp_tring;
		cout << "\nArea of trianlge: " << sp_tring2->get_area() << "\nAnd the Perimeter is: " << sp_tring2->get_perimeter() << endl;
		std::cout << "==================================================\n";
		unique_ptr < Rectangle > auto_ptr_rec (new Rectangle (5, 10));
		//cout << "Area of Rectangle: " << auto_ptr_rec->get_area() << "\nAnd the Perimeter is: " << auto_ptr_rec->get_perimeter() << endl;

		unique_ptr < Rectangle > auto_ptr_rec2 (move(auto_ptr_rec));
		std::cout << "==================================================\n";
		cout << "\nArea of Rectangle: " << auto_ptr_rec2->get_area() << "\nAnd the Perimeter is: " << auto_ptr_rec2->get_perimeter() << endl;

		auto_ptr_rec2.reset (new Rectangle (10, 2));
		cout <<"After resetting auto_ptr_rec2\n";
		cout << "\nArea of Rectangle: " << auto_ptr_rec2->get_area() << "\nAnd the Perimeter is: " << auto_ptr_rec2->get_perimeter() << endl;
		std::cout << "==================================================\n";

		cout <<" Using my own smart pointer:\n";
		std::cout << "==================================================\n";

		SmartPtr < Triangle > pTriSmartPtr ( new Triangle (10, 8, 10, 4, 5) );
		cout << "\nArea of trianlge: " << pTriSmartPtr->get_area() << "\nAnd the Perimeter is: " << pTriSmartPtr->get_perimeter() << endl;
		SmartPtr < Rectangle > pRecSmartPtr (new Rectangle (5, 10));
		cout << "\nArea of Rectangle: " << pRecSmartPtr->get_area() << "\nAnd the Perimeter is: " << pRecSmartPtr->get_perimeter() << endl;
		std::cout << "==================================================\n";

#endif
		cout << "==================================================\n";
#ifdef POLYMORPHISM
		cout << "Polymorphism and Casting in C++\n";

		std::cout << "==================================================\n";

		cout << "Using Shape class pointer\n";
		Shape* sptr = new Triangle (10, 8, 10, 4, 5);
		cout << "\nArea of trianlge: " << sptr ->get_area() << "\nAnd the Perimeter is: " << sptr ->get_perimeter() << endl;

		cout << "Accessing derived class member function...\n";
		cout << "Using some other function (internally uses dynamic_cast\n";
		access_tri_mem_fun (sptr);

		cout << "Using dynamic_cast directly\n";
		cout << (dynamic_cast < Triangle* > (sptr))->tri_name() << endl;

		cout << "Copying the value of sptr(base) to tptr (derived) \n";
		Triangle* tptr = static_cast < Triangle* > (sptr);
		cout << "\nArea of Trianlge: " << tptr ->get_area() << "\nAnd the Perimeter is: " << tptr ->get_perimeter() << endl;

		cout << "Before copying the value of tptr2(derived) to sptr2(base) \n";
		Triangle* tptr2 = new Triangle (10, 8, 10, 4, 5);
		Shape* sptr2 = static_cast < Shape* > (tptr2);
		cout << "\nArea of Trianlge: " << sptr2 ->get_area() << "\nAnd the Perimeter is: " << sptr2 ->get_perimeter() << endl;


//		Rectangle* pRec = new Rectangle (5, 10);
//		cout << "\nArea of trianlge: " << pRec->get_area() << "\nAnd the Perimeter is: " << pRec->get_perimeter() << endl;
//		cout << "After\n";
//		Shape* sptr2 = static_cast < Shape* > (pRec);
//		cout << "\nArea of trianlge: " << sptr2->get_area() << "\nAnd the Perimeter is: " << sptr2->get_perimeter() << endl;

		delete sptr;
		delete tptr2;
		//delete pRec;

#endif //POLYMORPHISM
		cout << "==================================================\n";	
#ifdef THREADING
		cout << "Multithreading practises\n";
		
		//declare an array of int
		int int_arr[5] = {1, 6, 8, 10, 15};
		cout << "The average of int array is: " << avg_arr_elements (int_arr, 5);
		
		
		#endif //THREADING
		cout << "==================================================\n";
#ifdef LINKED_LIST
                /*cout << "Linked List operations and their implementation\n";
				std::cout << "==================================================\n";
                //create a head node with info value 5
                node* head = new node (5);
                               
                LinkedList list (head); 
				cout << "Adding items to the front\n" ;
				
				//To get the head update with insertion and deletetion
                head = list.add_to_front (head, new node (2));
                head = list.add_to_front (head, new node (10));
                head = list.add_to_front (head, new node (20));
                head = list.add_to_front (head, new node (100));
				
                cout << "Elements in the list are: ";
				list.display_list( head );
				cout << endl;
				
				cout << "Adding items to last\n";
                head = list.add_to_last (head, new node(1000));
                head = list.add_to_last (head, new node(5555));
				               
				cout << "Elements in the list are: ";
                list.display_list( head );
                
				cout <<"\n------\n";
               
                cout << "The first node in the list is: "; 
                cout << list.return_front_node(head) << endl;;
				cout << "The last node in the list: ";
				cout << list.get_last_node (head) << endl;
				
				int pos = 0; 
				cout << "enter the position to insert the new node: "; 
				cin >> pos;
				cout << "Enter the value: ";
				int value;
				cin >> value; 
				//value = (new node (value1))->info; 
				cout << "\nList after adding new node at position " << pos << " with value " << value <<" is:\n";
				head = list.add_after_pos (head, new node (value), pos);
				//delete head;
				list.display_list (head); 
				
				cout << "elements in the list after removing last item from the list\n";
				head = list.remove_last_item (head);
				list.display_list ( head );
				cout << endl; 
				cout << "elements in the list after removing head node from the list\n";
				head = list.remove_first_item  (head) ;
				list.display_list ( head );
				//cout << "No of items:" << list.population (head) << endl;
				cout << endl; 
				
				cout << "------------------\n";
				
				cout << "Populating new list with vectors...\n";
				
				node* head2 = new node(1);
				LinkedList list2 ( head2 );
				cout << "Items in the list before initializing with vectors: " ;
				list2.display_list( head2 );
				
				vector <int> myIntVect; 
				cout << "vector's items are:\n";
				for (int i = 0 ; i < 10; i++) {
					//add randon integer values in the vector
					int value = rand() % 500;
					myIntVect.push_back ( value );
					cout << value << " ";
				}
                head2 = list2.populate_list (head2, myIntVect); 
				cout << "\nItems in the list after initializing with vector's elements are:\n" ;
				list2.display_list( head2 );
				
				cout << "\n------------------\n";
				cout <<"Reverse linkedlist...\n";
				head2 = list2.reverse_list (head2);
				cout << "After reversal, the list became:";
				list2.display_list( head2 );
				cout << "\n------------------\n";
				*/
				cout <<"Creating a linked list with a loop" << endl;
				node* head3 = new node(2);
				LinkedList list3 ( head3 );
				cout << "Items in the list before creating a looped linked list: " << endl ;
				list3.display_list( head3 );

				vector <int> vloop;
				cout << "vector's items are:\n";
				for (int i = 0 ; i < 10; i++) {
					int value = rand() % 500;
					vloop.push_back ( value );
					cout << value << " ";
				}
			    head3 = list3.list_with_loop (head3, vloop);
			    cout << "List after creating a loop: " << endl;
			    list3.display_list( head3 );

			    cout << "\n------------------\n";
				std::cout << "==================================================\n";
#endif //LINKED_LIST
		cout << "==================================================\n";
#ifdef QUEUE

#endif //QUEUE
        cout << "==================================================\n";        
#ifdef CPP11
cout << "==================================================\n";

	cout << "Print elements of an array using Lambda..." << endl;
	vector <int> myIntVect;

	for (int i = 0 ; i < 10; i++) {
		myIntVect.push_back(i);
	}
	std::for_each ( begin(myIntVect), end(myIntVect), [&](int elem ) { cout << elem++ << " "; } );
#endif 

#ifdef SORTING
	vector <int> input;
	cout << "Enter elements to sort: ";

	while ( cin ) {
		int value;
		cin >> value;
		input.push_back (value);
	}

	cout << "Array to sort is: " << endl;
	std::for_each (begin(input), end(input), [](int ele) { cout << ele << " "; } );

	cout << "1. Quick Sort\n 2. Merge Sort\n 3. Count Sort\n 4. Heap Sort\n 5. Bucket Sort\n";
	int option;
	cin >> option;

	switch (option){
	case 1:
		break;
	default:
		cout << "Please select an option!" << endl;
	}
#endif //SORTING

#ifdef LINKEDLIST2

	//cout << "Creating a new list, list2" << endl;
	LinkedList2 list2;

	cout << "Enter items to initialize the list" << endl;
	int value;
	while ( cin >> value ){
		list2.add_to_last (value);
	}
	cin.clear();
	cin.ignore();

	cout << "Items are added in the list." << endl;
	//cout << "Display list: " << endl;
	//list2.display_list();

	cout << "Enter your option to proceed:" << endl;
	int option = 0;
	cout << " 1. Display list\n 2. Add items to front\n 3. Add items to end\n"
			" 4. Remove head\n 5. Remove last item\n 6. Count no of items\n"
			" 7. Exit\n";

	do {
		cout << "Option: ";
		cin >> option;

		switch (option) {
		case 1: {
					cout << "Display list: ";

					list2.display_list();
					break;
				}
		case 2: {
					cout << "enter item: " << endl;
					int value;
					cin >> value;
					list2.add_to_front (value);
					cout << "Items are added in the list." << endl;
					cout << "Diplay list: " << endl;
					list2.display_list();

					break;
				}
		case 3: {
					cout << "Enter item: " << endl;
					int value;
					cin >> value;
					list2.add_to_last(value);
					cout << "Items are added in the list." << endl;
					cout << "Display list: " <<endl;
					list2.display_list();

					break;
				}
		case 7: exit(0);
		default: cout << "Invalid entry. Please enter the valid option\n";

		}
	} while (cin >> option); //End of do-while loop

#endif //LINKEDLIST2

#ifdef DLINKEDLIST
	cout << "Doubly linked list implementation" << endl;
	cout << "----------------------------------" << endl;

	DLinkedList dlist;
	for (int i = 0 ; i < 7; i++) { dlist.add_to_last (rand()%100 + 1); }

	dlist.display_list();
	cout <<"After removing last item, list is: " << endl;
	dlist.remove_last_item();
	dlist.display_list();
	cout <<"Add to front: " << endl;
	dlist.add_to_front( 1 );
	dlist.display_list();

#endif //DLINKEDLIST
	
	my_utility();

    return 0;
} //End of main
