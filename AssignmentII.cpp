#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{   string customerName, typeOfCustomer;
    double quantityOfElectricity, monthlyBill, totalBill, ruralElectrification, governmentSubsidy, pay;

    cout << "Welcome dear customer we will get you started soon after some information is gotten." << endl;
    cout << "Please enter your name." << endl;
    cout << ">>";
    getline(cin, customerName);

    cout << "Please enter the quantity of electricity you have used(KW)." << endl;
    cout << ">>";
    cin >> quantityOfElectricity;
    quantityOfElectricity = abs(quantityOfElectricity);

    if(quantityOfElectricity <= 150){
        typeOfCustomer = "Domestic";
        monthlyBill = 1.2 * quantityOfElectricity;
        ruralElectrification = monthlyBill * 0.01;
        totalBill = monthlyBill + ruralElectrification;
        governmentSubsidy = totalBill * 0.5;
        pay = totalBill - governmentSubsidy;
    }
    else if(quantityOfElectricity > 150 && quantityOfElectricity <= 350){
        typeOfCustomer = "Industrial";
        monthlyBill = 2.3 * quantityOfElectricity;
        ruralElectrification = monthlyBill * 0.01;
        totalBill = monthlyBill + ruralElectrification;
        governmentSubsidy = totalBill * 0.5;
        pay = totalBill - governmentSubsidy;
    }
    else if(quantityOfElectricity > 350){
        typeOfCustomer = "Commercial";
        monthlyBill = 3.5 * quantityOfElectricity;
        ruralElectrification = monthlyBill * 0.01;
        totalBill = monthlyBill + ruralElectrification;
        governmentSubsidy = totalBill * 0.5;
        pay = totalBill - governmentSubsidy;
    }
    else{
        cout << "Please enter a valid quantity." << endl;
    }

    cout << "Customer's name: " << customerName << endl;
    cout << "Quantity of electricity consumed: " << quantityOfElectricity << "KW" << endl;
    cout << "Category: " << typeOfCustomer << endl;
    cout << "1% rural electrification charge: " << "GHS" << ruralElectrification << endl;
    cout << "Total amount for the month: " << "GHS" << totalBill << endl;
    cout << "50% government subsidy: " << "GHS" << governmentSubsidy << endl;
    cout << "Balance to be paid: " << "GHS"<< pay << endl;

    return 0;
}
