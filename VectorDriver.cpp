//Yikai Peng
//Lab 4: VectorDriver.cpp
//Oct.08.18

#include "VectorDriver.h"
#include <algorithm>

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  vector<short> vec; //test of add_numbers and print()
  cout << "new new vector: ";//print out title
  add_numbers(vec);//call the add number method to fo the task
  print(vec);//call the print method to print out vector 
  print_even(vec);//print out the even index number 

  //THIS IS A TEST FOR SORT
  vector<short> vect{ 2,1,8,5,7 }; //create a new vector and assign 5 random numbers in it
  std::sort(vect.begin(),vect.end()); //sort the 5 numbers from beginning to the end
  cout << "Sorted vector: <";
  for (short a = 0; a < vect.size(); a++) //for short type a starting with 0, goes until less than the vector size, increase 1 each time
  {
	  cout<< vect[a] << " "; //print out each number
  }
  cout << ">";



  cout << "\n sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");
  return 0;
}
