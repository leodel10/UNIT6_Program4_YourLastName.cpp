#include <iostream>
#include <algorithm>
#include "accounts.h"
using namespace std;

void printArray(int[], int);
void sortArrAsc(int[], int);

int main() 
{
//using built in sort Ascending

cout << "\nStart: " << cpuTime() << endl;
//built-in sort sort(ameOfArray, nameArray+size);
sort(accountBalances, accountBalances+maxAccounts);
printArray(accountBalances, maxAccounts);
//reverse call sort first!!!!
//built-in reverse reverse(nameOfArray, nameArray+size)
reverse(accountBalances, accountBalances+maxAccounts);
printArray(accountBalances, maxAccounts);

cout << "\nEnd: " << cpuTime() << endl;
return 0;
}



void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted values in array" << endl;
  for(int i = 0; i < size; i++)
    {
      cout << arrayVals[i] << ",";

    }
}

