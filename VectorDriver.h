/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */

//Yikai Peng
//Lab 4: VectorDriver.h
//Oct.08.18


typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::qsort;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// TODO: implement add_numbers
void add_numbers(vector<short> &data)
{
	// std::vector<short> vecOfRanNums{ 2,5,7,10,8,2,0,19,8,5 }; //create a vector contains 10 numbers
	for (short i = 0; i < 10; i++) //for short type i starting with 0, goes to less than 10, increase 1 everytime
	{
		data.push_back(i); //assigning each i to the data vector
		//vecOfRanNums.push_back(i); //for-loop to assign all numbers "i" to the vector
	}
}

// TODO: implement print_even
void print_even(const vector<short>& data)
{
	if (data.empty())
	{
		cout << "<empty>"; //if the vector is empty, print out an empty message
	}
	else
	{
		cout << "\nEven index vector: <" << data.at(0); //else, print out the list of numbers starting with the first one on the vector (at position zero)
		for (int i = 2; i < data.size(); i++) // for int type i starting with 0, goesto less than the size of data, increase 1 everytime 
		{
			if ((i % 2)== 0) // if i devided by 2 is 0, which means there is no remainder, the index is a even number
			{
				cout << ", " << data.at(i); // print out that number
			}
		}
		cout << ">\n"; //print out ">"
	}
}

// TODO: implement is_present
/*short is_present(vector<short> &data) 
{
	std::vector<short>::const_iterator iter1 = data.begin(); //create a new vector iterator "iter", its the beginning (first number) of a list of data

	short vecElement = 0; //create a new short type variable 
	while (iter1 != data.end()) //while iter is not the last number
	{
		vecElement = *iter1;// vecElement pointe to the iterator value
		iter1++;// imcrement iterator.
	}

	return vecElement; //return the elements of the vector list
}*/

bool is_present(const vector<short> &data, short value) //assignment Lab4 on WyoCourses tells us to inplemnet bool is_present
{
	std::vector<short>::const_iterator iter1 = data.begin(); //create a new vector iterator "iter1", its the beginning (first number) of a list of data

	short vecElement = 0; //create a new short type variable 
	while (iter1 != data.end()) //while iter is not the last number
	{
		vecElement = *iter1;// vecElement pointe to the iterator value
		iter1++;// imcrement iterator.
	}

	//return vecElement; //return the elements of the vector list
	if (vecElement == value)
	{
		return true;
	}
	else
	{
		return false;
	}
}
