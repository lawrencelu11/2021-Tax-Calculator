#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int getFilingStatus(int &filingStatus);
long getTaxableIncome(long &taxableIncome);
double getTaxRate(long taxableIncome, int filingStatus, double &taxRate);
double computeTax(double taxRate, long taxableIncome, double &tax);
void printTax(double &tax);

int main()
{
    int filingStatus;
    long taxableIncome;
    double tax;
    double taxRate;

    getFilingStatus(filingStatus);
    getTaxableIncome(taxableIncome);
    getTaxRate(taxableIncome, filingStatus, taxRate);
    computeTax(taxRate, taxableIncome, tax);
    printTax(tax);
    return 0;
}

int getFilingStatus(int &filingStatus)
{
     cout << "What is your filing status?\n";
     cout << "1.Single\n";
     cout << "2.Married Filing Jointly\n";
     cout << "3.Married Filing Separately\n";
     cout << "4.Head of Household\n";
     cin >> filingStatus;
     cout << "\n";
     return filingStatus;
}

long getTaxableIncome(long &taxableIncome)
{
    cout << "Enter your taxable income\n";
    cin >> taxableIncome;
    cout << "\n";
    return taxableIncome;
}

double getTaxRate(long taxableIncome, int filingStatus, double &taxRate)
{
    switch(filingStatus)
    {
        case 1:
            if(taxableIncome <= 9950)
            {
                return taxRate = 0.10;
            }else if(taxableIncome >= 9951 && taxableIncome <= 40525)
            {
                return taxRate = 0.12;
            }else if(taxableIncome >= 40526 && taxableIncome <= 86375)
            {
                return taxRate = 0.22;
            }else if(taxableIncome >= 86376 && taxableIncome <= 164925)
            {
                return taxRate = 0.24;
            }else if(taxableIncome >= 164926 && taxableIncome <= 209425)
            {
                return taxRate = 0.32;
            }else if(taxableIncome >= 209426 && taxableIncome <= 523600)
            {
                return taxRate = 0.35;
            }else if(taxableIncome > 523600)
            {
                return taxRate = 0.37;
            }else{
                cout << "Your taxable income does not fall into the tax bracket!\n";
            }
        case 2:
            if(taxableIncome <= 19900)
            {
                return taxRate = 0.10;
            }else if(taxableIncome >= 19901 && taxableIncome <= 81050)
            {
                return taxRate = 0.12;
            }else if(taxableIncome >= 81051 && taxableIncome <= 172750)
            {
                return taxRate = 0.22;
            }else if(taxableIncome >= 172751 && taxableIncome <= 329850)
            {
                return taxRate = 0.24;
            }else if(taxableIncome >= 329851 && taxableIncome <= 418850)
            {
                return taxRate = 0.32;
            }else if(taxableIncome >= 418851 && taxableIncome <= 628300)
            {
                return taxRate = 0.35;
            }else if(taxableIncome > 628300)
            {
                return taxRate = 0.37;
            }else{
                cout << "Your taxable income does not fall into the tax bracket!\n";
            }
        case 3:
            if(taxableIncome <= 9950)
            {
                return taxRate = 0.10;
            }else if(taxableIncome >= 9951 && taxableIncome <= 40525)
            {
                return taxRate = 0.12;
            }else if(taxableIncome >= 40526 && taxableIncome <= 86375)
            {
                return taxRate = 0.22;
            }else if(taxableIncome >= 86376 && taxableIncome <= 164925)
            {
                return taxRate = 0.24;
            }else if(taxableIncome >= 164926 && taxableIncome <= 209425)
            {
                return taxRate = 0.32;
            }else if(taxableIncome >= 209426 && taxableIncome <= 314150)
            {
                return taxRate = 0.35;
            }else if(taxableIncome > 314150)
            {
                return taxRate = 0.37;
            }else{
                cout << "Your taxable income does not fall into the tax bracket!\n";
            }
        case 4:
            if(taxableIncome <= 14200)
            {
                return taxRate = 0.10;
            }else if(taxableIncome >= 14201 && taxableIncome <= 54200)
            {
                return taxRate = 0.12;
            }else if(taxableIncome >= 54291 && taxableIncome <= 86350)
            {
                return taxRate = 0.22;
            }else if(taxableIncome >= 86351 && taxableIncome <= 164900)
            {
                return taxRate = 0.24;
            }else if(taxableIncome >= 164901 && taxableIncome <= 209400)
            {
                return taxRate = 0.32;
            }else if(taxableIncome >= 209401 && taxableIncome <= 523600)
            {
                return taxRate = 0.35;
            }else if(taxableIncome > 523600)
            {
                return taxRate = 0.37;
            }else{
                cout << "Your taxable income does not fall into the tax bracket!\n";
            }


    }


}

double computeTax(double taxRate, long taxableIncome, double &tax)
{

    tax = taxRate * static_cast<double>(taxableIncome);
    return tax;
}

void printTax(double &tax)
{
    cout << setprecision(2) << fixed;
    cout << "Your tax is: " << tax;
}
