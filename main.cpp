/*
Author: Ashlee Tolentino
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab12

This program works with vectors.
*/

#include <iostream>
#include <vector>
#include "funcs.h"

int main()
{
  // Task A
  std::cout << "Task A\n\n";
  std::vector<int> v1 = makeVector(10);
  for(int i = 0; i < v1.size(); i++) {
    std::cout << v1[i] << std::endl;
  }
  std::cout << "--------------------------------\n";

  // Task B
  std::cout << "Task B\n\n";
  std::vector<int> vect;
  vect.push_back(1);
  vect.push_back(2);
  vect.push_back(-1);
  vect.push_back(3);
  vect.push_back(4);
  vect.push_back(-1);
  vect.push_back(6);
  std::vector<int> v2 = goodVibes(vect);
  for(int i = 0; i < v2.size(); i++) {
    std::cout << v2[i] << std::endl;
  }
  
  return 0;
}
