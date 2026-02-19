#include <iostream>

using namespace std;

int main()
{
    //The first rectangle
    float firstLength, firstWidth;
    cout << "Enter the first rectangle's length : ";
    cin >> firstLength;
    cout << "Enter the first rectangle's width : ";
    cin >> firstWidth;

    //The second rectangle
    float secondLength, secondWidth;
    cout << "Enter the second rectangle's length : ";
    cin >> secondLength;
    cout << "Enter the second rectangle's width : ";
    cin >> secondWidth;

    //Calculating areas
    float firstArea, secondArea;
    firstArea = firstLength * firstWidth;
    secondArea = secondLength * secondWidth;

    //Print areas
    cout << "The first rectangle's area is " << firstArea << endl;
    cout << "The second rectangle's area is " << secondArea << endl;

    //Comparing areas
    if (firstArea != secondArea)
    {
        if (firstArea > secondArea)
        {
            cout << "The first rectangle has the greater area." << endl; 
        }else{
            cout << "The second rectangle has the greater area." << endl; 
        }
      
    }else{
        cout << "The areas are same." << endl;
    }
    

    return 0;
}

