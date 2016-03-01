#include "my_project_app.h"

#if __cplusplus >= 201103L

class A
{
	int x;
public:
	void setX(int i) { x = i; }
	void print2() { cout << x; }
};

class B : virtual public A
{
public:
	B()  { setX(10); }
};

class C : virtual public A
{
public:
	C()  { setX(20); }
};

class D : public B, public C {
public:
	D() { setX(50); }
};


class Base
{
public:
	int f(int i)
	{
		cout << "in base\n";
		cout << "f(int): ";
		return i + 3;
	}
	~Base(){
		cout << "base destructor called";
	}
};
class Derived : public Base
{
public:
	~Derived(){
		cout << "deribeds destructor called";
	}
	double f(double d)
	{
		cout << "in derived\n";
		cout << "f(double): ";
		return d + 3.3;
	}
};

//class Test2
//{
//private:
//	~Test2() { cout << "Destroying Object\n"; }
//public:
//	Test2() { cout << "Object Created\n"; }
//	friend void destructTest(Test2*);
//
//	void operator delete (void* ptr) {
//		delete [] ptr;
//	}
//};


class Test {
private:
	int my_int_data;
	int *p1;
	static int obj_index ;
public:
	Test(const Test& my_test){
		obj_index++;
		p1 = new int(my_test.my_int_data);  //make this pointer points to newly created object (int))
		my_int_data = my_test.my_int_data;
		std::cout << "\nobject number created is: " << obj_index << "\n";
	}

	Test(int value) : my_int_data(value) {
		obj_index++;
		p1 = new int(my_int_data);
		std::cout << "object number created is: " << obj_index << "\n";
	}

	const Test& operator = (const Test& my_op){
		// Check for self assignment
		if (this != &my_op){
			*p1 = my_op.my_int_data;
			return *this;
		}

		p1 = new int(my_op.my_int_data);  //make this pointer points to newly created object (int))
		my_int_data = my_op.my_int_data;

		return *this;
	}

	void take_data(int i) {
		*p1 = i;
	}

	int get_data() {

		return my_int_data;
	}

	void display(){
		std::cout << " value: " << *p1;
	}
};

int Test::obj_index = 0;



#if 0
struct node *first_node = new node;

add_into_list(first_node, 10);
add_into_list(first_node, 20);
add_into_list(first_node, 30);
add_into_list(first_node, 40);
display(first_node);
#endif 

#ifdef POINTERS
//Declarations
//PRIMITIVE
int *p1;
int *p2;
int *p3;
float *f1, *f2, *f3;

int vi1 = 1, vi2 = 2, vi3 = 3;
float vf1 = 11.1f, vf2 = 22.2f, vf3 = 33.3;

//CRASHING
//p1 = p2 = p3 = NULL;
//f1 = f2 = f3 = NULL;

p1 = &vi3;
p2 = &vi2;
p3 = &vi1;

f1 = &vf3;
f2 = &vf2;
f3 = &vf1;

int **pp1; //pointer to pointer

pp1 = &(p1);  //pp1 points to p1 which in turn points to vi3
cout << " value of pp1: " << *(pp1) << std::endl; //some address (a1)
cout << " value of p1: " << *(p1) << std::endl; //3
cout << " VALUE of vi3 : " << vi3 << std::endl; //3
cout << " address of vi3 : " << &vi3 << std::endl; // same as ADDRESS a1
cout << " address of p1 : " << &p1 << std::endl; //address of p1
cout << " not sure about it : " << p1 << std::endl; //same as adddress of vi3

//declare a array of pointers tp integers which points to all vi1, vi2 and vi3
int* p_arr[3];
p_arr[0] = &vi1;
p_arr[1] = &vi2;
p_arr[2] = &vi3;


for (int i = 0; i < 3; i++){
	std::cout << "p_arr[" << i << "] points to: " << *p_arr[i] << endl;
}

int** p_p = p_arr;
for (int i = 0; i < 3; i++){
	std::cout << "p_p[" << i << "] points to: " << ** ((p_p)+i) << endl;
}


//declare a array of pointers to pointers which points to all vi1, vi2 and vi3
int** p_p_i;
p_p_i = &(p1);

for (int i = 0; i < 1; i++){
	std::cout << "p_p_i[" << i << "] points to: " << ** ((p_p_i)+i) << endl;
}

std::cout << "some airthmatic:\n";
std::cout << "\nppi: " << p_p_i; //print the value of address of p1
std::cout << "\n&ppi: " << &p_p_i; //print the value of ppi
std::cout << "\n& (*p_p_i): " << &(*p_p_i); //address of p1
std::cout << "\n& (*(*p_p_i)): " << *(*p_p_i);  //3
//Increase the value by 10 of where p1 points to 

*p1 = *p1 + 10;
std::cout << "\nwith the help of p1: " << *p1 << std::endl;

//increase the value of vi1 by 100 with help of p_p_i
**p_p_i = **p_p_i + 100;
std::cout << "\n& (*(*p_p_i)): " << *(*p_p_i);  //13

std::cout << std::endl;

//pp1 = p1; syntax error




//std::cout << "\nValue of p1= " << *p1 <<" and address of this pointer is: " << p1 <<" and pointee is: "<< &vi1;
//std::cout << "\nValue of p2= " << *p2 << " and address of this pointer is: " << p2 << " and pointee is: " << &vi2;
//std::cout << "\nValue of p3= " << *p3 << " and address of this pointer is: " << p3 << " and pointee is: " << &vi3;
//
//p1 = p3; //make pointer p1 points to where p3 points. now p1 should have 1
//
//std::cout << "\nValue of p1= " << *p1;
//std::cout << "\nValue of p2= " << *p2;
//std::cout << "\nValue of p3= " << *p3;
//
//
//std::cout << "\nValue of f1= " << *f1;
//std::cout << "\nValue of f2= " << *f2;
//std::cout << "\nValue of f3= " << *f3;
//std::cout << std::endl;

#endif //POINTERS



void change_the_values(int a, int b){
	a = a*a;
	b = b*b;
}


void change_the_values(int* p1, int* p2) {

	*p1 = *p1 * *p1;
	*p2 = *p2 * *p2;
}


//void destructTest2(Test2* ptr) {
//	delete ptr;
//	cout << "object destroyed\n";
//}


//class MyClass
//{
//public:
//	MyClass()
//	{
//		cout << "GeeksforGeeks";
//	}
//}my_class;
//


void my_stl_vector(){
	std::vector <int> my_vect(10);
	std::vector <string> my_str_vect(20);

	
	for (int i = 0; i < my_vect.size(); i++){
		my_vect[i] = i;
	}
	
	for (int i = 0; i < my_vect.size(); i++){
		std::cout << my_vect[i] << " ";
	}

	std::cout << std::endl;
	for (int i = 0; i < my_str_vect.size(); i++){
		my_str_vect[i] = "my_string " + i;
	}
	std::cout << "size: " << my_str_vect.capacity();
	my_str_vect.push_back("kumar");
	std::cout << "\nsize: " << my_str_vect.capacity();
	std::cout << std::endl;
	my_str_vect.push_back("amaresh kumar");
	std::cout << "\nsize: " << my_str_vect.capacity();
	std::cout << std::endl;
	my_str_vect.push_back("amaresh kumar");
	std::cout << "\nsize: " << my_str_vect.capacity();
	std::cout << std::endl;
	for (int i = 0; i < my_str_vect.size(); i++){
		std::cout << my_str_vect[i] << " ";
	}
	
	std::cout<<"\nresize\n";
	my_vect.resize(15);
	
	std::cout << "capacity now: " << my_vect.capacity();
	std::cout << "\nsize now: " << my_vect.capacity();
	
	std::cout << "\n\nusing iterators now:\n";
	
	std::vector<int>::iterator my_int_v_iter;
	my_int_v_iter = my_vect.begin();
	
	std::cout << "\n\nPrint using iterators now:\n";
	for (int i = 0; i < my_vect.size(); i++){
		std::cout << my_vect[i]<< " ";
	}
	
	std::cout << "\n\nPrint using iterators now:\n";
	for (int i = 0; i < my_vect.size(); i++){
		std::cout << *my_int_v_iter << " ";
		my_int_v_iter++;
	}
	
	std::cout << "\ncapacity now: " << my_vect.capacity();
	std::cout << "\nsize now: " << my_vect.size();

	my_vect.push_back(20);
}

void my_stl_set(){
	std::set <int> my_set{ 1, 2, 3, 4, 5, 6 };
}

#ifdef NICE

class New
{
private:
	int data;
public:
	New() { data = 0; }
	virtual int getData() { return data; }
};

int main()
{
	New t;
	int* ptr = (int*)&t;
	*(ptr+2) = 10;
	cout << t.getData();
	return 0;

}

#endif //NICE

#endif //#if __cplusplus >= 201103L