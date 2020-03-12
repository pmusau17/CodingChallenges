//exceed.cpp --exceeding some integer limits

#include <iostream>
#include <climits> //defines INT_MAX as largest int value
#define ZERO 0 //makes ZERO symbol for 0 value

int main()
{
  using namespace std;
  short sam = SHRT_MAX; //initialize a variable to max value
  unsigned short sue=sam; 

  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << " dollars deposited." << endl
       << "Add $1 to each account" << endl << "Now ";
  //this should cause an overflow for sam and not for sue
  sam++;
  sue++;
  cout << "Sam has " << sam << " dollars and Sue has " << sue
       << " deposited." << endl << "Poor sam!" <<endl;
  
  //now let's look at underflow
  sam=ZERO;
  sue=ZERO;
  cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
  cout << "Take $1 from each account." << endl;
  sam--;
  sue--;
  cout << "Sam has " << sam << " dollars and Sue has " << sue
       << " deposited." << endl << "Lucky Sue!" <<endl;
  return 0;



}