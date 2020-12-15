#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float loanPayment;
    float insurance;
    float gas;
    float oil;
    float tires;
    float maintenance;
    float totalCost;
    float annualCost;
    
    cout << "Enter montly loan payment: ";
    cin  >> loanPayment;
    cout << "Enter montly insurance cost: ";
    cin  >> insurance;
    cout << "Enter montly gas cost: ";
    cin  >> gas;
    cout << "Enter montly tire costs: ";
    cin  >> oil;
    cout << "Enter monthly maintenance costs: ";
    cin  >> maintenance;
    
    totalCost = loanPayment + insurance + gas + oil + tires + maintenance;

    cout << "Total monthly cost is $" << totalCost << endl;
    
    annualCost = 12 * totalCost;
    cout << "Total annual cost is $" << annualCost;
   
 
}