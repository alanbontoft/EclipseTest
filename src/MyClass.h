/*
 * MyClass.h
 *
 *  Created on: 17 Mar 2021
 *      Author: alanb
 */

#ifndef MYCLASS_H_
#define MYCLASS_H_

class MyClass {
public:
	MyClass();
	virtual ~MyClass();

	int value() { return _value; }
	void setValue(int value);

	void increment() { _value++; }
	void decrement() { _value--; }
private:
	int _value = 0;
};

#endif /* MYCLASS_H_ */
