/*
Created by Jack Elliott, 10-22-2022
HW4 CS 2250

NumList class implementation
*/

#include "NumList.h"


//First constructor, takes list and size parameters
NumList::NumList(int *arr, int s )
{
  size = s;
  list = arr;

  list = new int[size];

  for (int i = 0; i < size; i++)
    list[i] = arr[i];
}

//Second constructor, no parameters
NumList::NumList()
{
	list = nullptr;
	size = 0;
}


//Third constructor, copy constructor
NumList::NumList(const NumList &obj)
{
	size = obj.size;
  list = new int[size];

  for (int i = 0; i < size; i++)
    list[i] = obj.list[i];
}

//Destructor
NumList::~NumList()
{
	delete[] list;
}

//Setter function definition
void NumList::setList(int *arr, int s)
{
  size = s;
  list = new int[size];

  for (int i = 0; i < size; i++)
    list[i] = arr[i];
}

//Function to display each element of an array held by a NumList object
void NumList::display()
{
	cout << "\n\n" << "* ";

	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << "*" << "\n\n";	
}




