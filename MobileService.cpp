#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
This function is used for calculating total cost
Input: Customer's Plam, Used GBs;
Output: The total cost
*/
float calculatingMonthlyBill(int plan, float usedGBs){
    //Setting Plan Details
    float monthlyFee, gigabytePrice;
    int freeGBs;
    switch (plan)
    {
    case 1: // Plan A
        monthlyFee = 39.99;
        gigabytePrice = 8.00; 
        freeGBs = 2;
        break;
    case 2: // Plan B
        monthlyFee = 59.99;
        gigabytePrice = 8.00; 
        freeGBs = 8;
        break;
    case 3: // Plan C
        monthlyFee = 79.99;
        freeGBs = 999999;
        break;
    default:
        break;
    }

    //Checking if there are extra GBsthat need to charge
    if (freeGBs != 999999 && usedGBs > (float)freeGBs){
        monthlyFee += ((usedGBs - (float)freeGBs) * gigabytePrice);
    }
    return monthlyFee;
}


int main(){
    // Collecting customer's information
    string customerName;
    char customerPlan;
    float customerUsedGB;
        //name
    cout << "Enter cutomer's name: ";
    cin >> customerName;
        //plan
    cout << "Enter cutomer's Plan (A,B,C): ";
    cin >> customerPlan;
    while (!(customerPlan == 'A' || customerPlan == 'B' || customerPlan == 'C'))
    {
        cout << "Invaild Plan!" << endl;
        cout << "Enter correct cutomer's Plan (A,B,C): ";
        cin >> customerPlan;
    }
    int planNumber;
    switch (customerPlan)
    {
    case 'A':
        planNumber = 1;
        break;
    case 'B':
        planNumber = 2;
        break;
    case 'C':
        planNumber = 3;
        break;
    default:
        break;
    }
        //used GBs
    cout << "Enter how many gigabytes are used: ";
    cin >> customerUsedGB;


    //Calculating the bill
    float bill = calculatingMonthlyBill(planNumber,customerUsedGB);
    cout << "Hi dear " << customerName << ", your have currently used " << customerUsedGB << " GBs with plan " << customerPlan << ", and the total amount is " << bill << "$." << endl;

    //Comparing to other plans
    vector<char> planName = {'A','B','C'};
    while (planNumber < 3)
    {
        planNumber++;
        float upgradePlanBill = calculatingMonthlyBill(planNumber,customerUsedGB);
        if (upgradePlanBill < bill){
                cout << "If you upgrade to "<< planName[planNumber-1] << " Plan, you can save "<< bill - upgradePlanBill << "$ with the total amount "<< upgradePlanBill << "$." << endl;
        }
    }

    return 0;
}