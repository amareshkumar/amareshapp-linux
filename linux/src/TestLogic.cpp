/* 
 * File:   TestLogic.cpp
 * Author: akumar
 *
 * Created on 16 August, 2015, 3:19 PM
 */

#include "TestLogic.hpp"
#include <pthread.h>

extern MyLogger* mylog;

char* ReverseWordWise(const char* str) {
    static char* finalString = new char [sizeof (str)];
    char* revSubStr = new char[15];
    int i = 0;
    static int pos = 0;
    mylog->log_msg("Before loop");

    for (i = pos; i < strlen(str); i++) {
        //mylog->log_msg("Before assignment");
        //revSubStr [i] = str [i];
        //mylog->log_msg("condition check");
        if ((str[++i] == ' ')) {
            mylog->log_msg("The value of revSubStr: ");
            revSubStr [i] = str [i];
            mylog->log_msg(revSubStr);
            continue;
            //finalString = MyString::MyStringReverse(revSubStr);
            //strcpy (finalString, " ");
            //pos = i;
            //continue;
        }
    }
    //return finalString;
}

//function 2 for threading
void* square_it_up(int value) {
    cout << (value * value);
}

template <typename T>
T my_temp_function (T msg) {
    return msg; 
}
template const char* my_temp_function (const char*);
template int my_temp_function (int);

//#include "curl/curl.h""
//--------------------------------------------------------------------------------------------------------
#ifdef SEND_MAIL_UNIX
//sending an email
//an unix code 

#define HELO "HELO 192.168.1.1\r\n"
#define DATA "DATA\r\n"
#define QUIT "QUIT\r\n"

//#define h_addr h_addr_list[0]
//FILE *fin;
int sock;
struct sockaddr_in server;
struct hostent *hp, *gethostbyname();
char buf[BUFSIZ + 1];
int len;
char *host_id = "192.168.1.10";
char *from_id = "amaresh.kumar@live.in";
char *to_id = "kr.amaresh@gmail.com";
char *sub = "mail from my code\r\n";
char wkstr[100] = "Just checking if you are getting this message from my code\r\n";

/*=====Send a string to the socket=====*/

void send_socket(char *s)
{
	write(sock, s, strlen(s));
	write(1, s, strlen(s));
	//printf("Client:%s\n",s);
}

//=====Read a string from the socket=====*/

void read_socket()
{
	len = read(sock, buf, BUFSIZ);
	write(1, buf, len);
	//printf("Server:%s\n",buf);
}

//end of (sending an email)
#endif //SEND_MAIL_UNIX
//--------------------------------------------------------------------------------------------------------

void bit_vector_example(){}
	
#if BIT_VECTOR
	class my_bitvector_base {
	protected:
		class bitref { // Prevent this class from being used anywhere else.
		public:
			bitref(::std::uint64_t &an_int, ::std::uint64_t mask)
				: an_int_(an_int), mask_(mask)
			{
			}

			const bitref &operator =(bool val) {
				if (val) {
					an_int_ |= mask_;
				}
				else {
					an_int_ &= ~mask_;
				}
				return *this;
			}
			const bitref &operator =(const bitref &br) {
				return this->operator =(bool(br));
			}
			operator bool() const {
				return ((an_int_ & mask_) != 0) ? true : false;
			}

		private:
			::std::uint64_t &an_int_;
			::std::uint64_t mask_;
		};
	};

	template < ::std::size_t Size >
	class my_bitvector : public my_bitvector_base {
	private:
		static constexpr::std::size_t numints = ((Size + 63) / 64);
	public:
		my_bitvector() { ::std::fill(array, array + numints, 0); }

		bool operator [](::std::size_t bitnum) const {
			const ::std::size_t bytenum = bit / 64;
			bitnum = bitnum % 64;
			return ((ints_[bytenum] & (::std::uint64_t(1) << bitnum)) != 0) ? true : false;
		}
		bitref operator[](::std::size_t bitnum) {
			const ::std::size_t bytenum = bit / 64;
			bitnum = bitnum % 64;
			::std::uint64_t mask = ::std::uint64_t(1) << bitnum;
			return bitref(ints_[bytenum], mask);
		}

	private:
		::std::uint64_t ints_[numints];
	};

	void test(){}
	my_bitvector<70> bits; // A 70 bit long bit vector initialized to all false
	bits[1] = true; // Set bit 1 to true
	bool abit = bits[1]; // abit should be true.
	abit = bits[69]; // abit should be false.

}

	//int size = 5;
	//std::vector <bool> my_bit_vector(size);
	//cout << "Demonstration of bit vectors\n";
	//
	//for (int i = 0; i < my_bit_vector.size(); i++){
	//	my_bit_vector[i] = true;
	//	cout << "size of bit_vector elements : " << sizeof (my_bit_vector[i])<<"\n";
	//}
#endif 

#ifdef TEST_MAIN
//int main(){
//	Test obj1 (5);
//	std::cout << "Copy-Constructor\n";
//	std::cout << "before: obj1: ";
//	obj1.display();
//		
//	Test obj2 = obj1;  //shallow copy, copy constructor
//	obj1.take_data(100);
//	
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	
//	std::cout << "\nAssignment-Operator demonstrations\nBefore:\n";
//
//	Test obj3(200);
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	std::cout << "\tobj3: ";
//	obj3.display();
//
//	std::cout << "\nWithout own-assignment op\n";
//	obj3 = obj1;
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	std::cout << "\tobj3: ";
//	obj3.display();
//
//	std::cout << "\nMy own-assignment op\n";
//	Test obj4(400);
//	obj3 = obj1;
//	std::cout << "\nafter: obj1: ";
//	obj1.display();
//	std::cout << "\tobj2: ";
//	obj2.display();
//	std::cout << "\tobj3: ";
//	obj3.display();
//	std::cout << "\tobj4: ";
//	obj4.display();
//}
#endif //TEST_MAIN

#ifdef STL_MAIN
//int main(){
//	//stl vector
//	//my_stl_vector();
//
//	//stl set
//
//	Derived* objes = new Derived;
//	cout<<objes->f(3.3);
//	cout << "and\n";
//	cout<<objes->f(3);
//	std::cout << "\nnon-dynamic\n";
//	Derived object;
//	cout<<object.f(4.4);
//	cout<<object.f(4);
//
//	delete objes;
//	std::cout << std::endl;
//		
//	return 0;
//}

#endif //end of STL_MAIN

#ifdef MAIN_OTHER
//MyApplication::start();

//int arr[11] = { 0, 3, 4, 8, 9, 1, 5, 7, 10, 2, 6 };
//std::cout << "Median of the array passed is: " << calculate_median(arr)<<endl;
//my_sort(arr);
//
//print_array(arr);
////my_set();
//my_map();


//udt
//Cat* cat_s;				//static
//Cat* cat_d = new Cat(); //dynamic

//delete (cat_d);

//cat_s = cat_d;

//Cat* cat_d = new Cat;

//my_hash_map();
//print();
//Interview Q: 2

//		cout<<translateColumnIndexToName(28);
//rand_initialize_list();
//print();

//insert_at_front(rand_initialize_list(), 5);

//insert_at_end(rand_initialize_list(), 50);

//insert_at_pos(rand_initialize_list(), 25, 2);

//delete_first_node(rand_initialize_list()); //delete first element
//std::cout << (node_at_pos_n(rand_initialize_list(), 3))->data << std::endl;
#endif //MAIN_OTHER

#ifdef PUZZLE_1

class Test {
private:
    int x;
    int y;
public:

    Test(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    void setX(int a) {
        x = a;
    }

    void setY(int b) {
        y = b;
    }

    void destroy() {
        //delete this; 
    }

    void print() {
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main() {
    Test obj(5, 10);
    obj.destroy();
    obj.print();
    return 0;
}

#endif //PUZZLE_1

//class Size {
//    int myint= 0;
//    int *p_myint = NULL;
//    char mychar;
//    long mydoube;
//    float myfloat;
//    virtual void myfunct1(){}
//    virtual void myfunct2(){}
//    void myfunct3(){}
//    void myfunct4(){}
//    class B;
//    //Size::B b;
//};
//
//class B{ 
//    int a;
//};

#define NFORK 8
#define NTHREAD 5 

void stub_fuc (){
    static int i = 0;
    cout << i <<endl;
    i++;
}

void myfork_test(){
    int pid = 0;
    
    for (int i = 0; i < NFORK; i++){
        if ((pid = fork()) < 0){
            cout << "Error forking\n";
        }
        else if (pid == 0){
            cout << "process created\n";
            stub_fuc();
            exit(0);
        }
        else {
            //wait (pid, status, 0);
        }
    }
}

void* stub_fun_t (void* threadid){
    long i ;
    i = (long) threadid;
    cout <<"thread[" << threadid << "]" <<endl;
    pthread_exit(NULL);
}

//To do: Buggy: Segmentation fault
void mythread_test (){
    int rc; 
    pthread_t tid[NTHREAD];
    pthread_attr_t attr;
    
    //int threadids[NTHREAD];
    
    //make the thread created as joinable 
    pthread_attr_init(&attr);
    pthread_attr_getdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
    
    for (int i = 0 ; i < NTHREAD; i++){
        //threadids[i] = i;
        rc = pthread_create (&tid[i], &attr, stub_fun_t, (void *)&i);
        //rc = pthread_create (&threadids[i], &attr, stub_fun_t, (void *)i);
        //Error message
        if (rc){
            cout <<"ERROR!, return code from pthread_Create() is: " <<rc<<endl;
            exit(-1);
        }

        rc = pthread_join (tid[i], NULL);
        if (rc){
            cout <<" Error!, return code from pthread_join() is: "<< rc <<endl;
            exit(-1);
        }
    }
    
    pthread_attr_destroy(&attr);
    pthread_exit(NULL);
}