#include "my_project_app.h"

//class  gc :public Utilities //Utilities sections are removed
class gc {
public:
	 gc ();
	~ gc ();
	void* operator new (size_t size);
	void operator delete(void*);
};

gc :: gc (){
	 cout << "Constructor of gc is called\n";
}

gc ::~ gc (){
	 cout << "Destructor of gc is called\n";
}

void* gc::operator new(size_t size){
	 void* storage = malloc(size);
	 if (storage == NULL){
		 cout << "no memory left to be allocated\n\n";
		 EXIT_FAILURE;
	 }
	 return storage;
}
 
void gc::operator delete (void* vp){
	 cout << "my delete is being called\n";
	 free(vp);
}
