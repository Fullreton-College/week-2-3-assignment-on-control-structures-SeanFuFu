#include <iostream>

using namespace std;
int main(){

  //Retail Price
  int retailPrice = 199;

  //Total Quality
  int totalQuality;
  cout << "How many packages?" <<endl;
  cin >> totalQuality;

  //Total Price
  int totalPrice = totalQuality * retailPrice;

  //Discount
  float discountPrice;
  if (totalQuality >= 10 && totalQuality <= 19) // 10-19 -> 20%
  {
    discountPrice = (float)(totalQuality * 0.8);
  } 
  else if (totalQuality >= 20 && totalQuality <= 49) // 20-49 -> 30%
  {
    discountPrice = (float)(totalQuality * 0.7);
  } 
  else if (totalQuality >= 50 && totalQuality <= 99) // 50-99 -> 40%
  {
    discountPrice = (float)(totalQuality * 0.6);
  } 
  else if (totalQuality >= 100) // 100 or more -> 50%
  {
    discountPrice = (float)(totalQuality * 0.5);
  }
  
  cout << "The total cost is : " << discountPrice << endl; 
  
  return 0;
}
