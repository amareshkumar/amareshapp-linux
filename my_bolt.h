#pragma once
#ifndef MY_BOLT_H
#define MY_BOLT_H

class GpuSpecific {

public:
	void parallelism(){


	}

};


// templated functor to add numbers
template< typename T >
class add
{
public:
	T operator()(T a, T b)
	{
		return a + b;
	}
};

class my_functor_op {

public:
	void functor_op(){
		int x = 10; int y = 20; int z;
		add<int> func; // create an add functor for T=int
		z = func(x, y); // invoke functor on x and y
		//float x = 10; float y = 20; float z;
		//add<float> func; // create an add functor for T=float
		//z = func(x, y); // invoke functor on x and y	
	}
};


#endif //MY_BOLT_H