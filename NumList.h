/*
Created by Jack Elliott, 10-22-2022
HW4 CS 2250

Declaration for NumList class
*/


#ifndef NUMLIST_H
#define NUMLIST_H

#include <iostream>

using namespace std;

class NumList
{
private:
	int *list;
	int size;

public:

	//First constructor, two parameters
	NumList(int*, int);

	//Second constructor, no parameters
	NumList();

	//Copy Constructor
	NumList(const NumList& obj);

	//Destructor
	~NumList();


	//Getters
	int* getList()
	{return list;}
		
	int getSize()
	{return size;}

	//Prototype for function to display contents of "list" dynamic array
	void display();


	//Setter
	void setList(int* arr, int s);


	//Overloaded = operator
	const NumList operator=(const NumList &instToCopy)
	{
		if (this != &instToCopy)
		{
			if (list != nullptr)
        delete [] list;

      size = instToCopy.size;
      list = new int[size];

      for (int i = 0; i < size; i++)
        list[i] = instToCopy.list[i];
		}
		return *this;
	}

	//Overloaded += operator
	void operator+=(NumList& instToAdd)
	{
		if (size != instToAdd.size)
		{
			cout << "\n\nError, the two arrays are not the same size.\n\n";
		}
		else if (this != &instToAdd)
		{
			int* temp = nullptr;
			temp = new int[size];

			for (int i = 0; i < size; i++)
				temp[i] = (list[i] + instToAdd.list[i]);

			for (int i = 0; i < size; i++)
        list[i] = temp[i];

			delete[] temp;
		}
	}
};

#endif
