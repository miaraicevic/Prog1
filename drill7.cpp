#include "std_lib_facilities.h"
// part 1
template <typename T>
struct S
{
private:
	T val;
public :
	//part 2
	S()
	{
		val = 0;
	}
	S(T val2)
	{
		val=val2;
	}
	
	T get();
	/*
	* // part 5
	{
	return val;
	}
	*/ 
	const T get() const;
	void operator=(const T&);
	/*
	 // part 9
	void set(T val3)
	{
		val = val3;
	}
	*/

};
