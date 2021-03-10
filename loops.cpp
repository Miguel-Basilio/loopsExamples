// loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    int index = 1;
    int limit = 5;
    while (index <= limit)
    {
        cout << index << " (while loop) The number squared is " << index * index << endl;
        index++;
    }
    cout << " \n\n\ " << endl;
    index = 1;
    do
    {
        cout << index <<" (do loop) the number squared is " << index * index << endl;
        index++;

    } while (index <= limit);

    cout << " \n\n\ " << endl;
    for (index = 1; index <= 5; index++)
    {
        cout << index << " (for loop)the number square is "<< index * index<<endl;
    }

    //writes a loop to gofrom 1-20 add up the indexes to get the sum of the indexes from 1 to 20 but the sum is greater than 99 then stop

    cout << " \n\n\ " << endl;
    int sum;
    for (index = 1, sum =0; index <= 20; index++)
    {
     //   cout << index << " (for loop)the number square is " << index * index << endl;
        sum += index;
        if (sum > 99)
            break;
    }
    cout << "Sum of numbers from 1 to 20 is " << sum << endl;




    cout << " \n\n\ " << endl;

    index = 1;
    while (true)
    {
        cout << "inside the loop ; index = " << index << endl;
        if (index++ >= 10) break;  //example of post increment
    
    }
    cout << " \n\n\ " << endl;


    cout << " \n\n\ " << endl;

    index = 10;
    while (true)
    {
        cout << "inside the loop ; index = " << index << endl;
        if (index++ >=0) break;  //example of post increment

    }
    cout << " \n\n\ " << endl;


   /* common for loop
   for (index =1; index <=10; index++)*/
    index = 1;
    for (;   ; )
    {
        cout << "Strainge blank for loop index = " << index << endl;
        index++;
        if (index > 10) break;
    }



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
