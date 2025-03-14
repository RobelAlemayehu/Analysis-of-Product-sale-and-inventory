#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#define preProccTaxRate 0.15 // Define a constant tax rate
int main()
{

    // Introductory Message
    cout << "This program helps to analyze product sales and inventory for a store." << endl;
    cout << "Reminder: C++ is a compiled language." << endl;
    cout << " " << endl;

    // Product Detail's variable delaration
    string productName;
    int initialInventoryQuantity;
    int productCategory;
    float productPricePerUnit;
    int numberOfItemSold = 0;



    // prompt input from the user
    cout << "Please enter the product's name(Single word): ";
    cin >> productName;

    cout << "Please enter the product's category number(1-5): ";
    cin >> productCategory;

    cout << "Please enter the initial inventory quantity: ";
    cin >> initialInventoryQuantity;

    cout << "Please enter the product's price: $ ";
    cin >> productPricePerUnit;

    cout << "Please enter number of items sold: " ;
    cin >> numberOfItemSold;


    const double constantTax = 0.3;

    // Performing a calculation
    int newInventory = initialInventoryQuantity;
    newInventory -= numberOfItemSold;
    auto totalSalesAmount = numberOfItemSold * productPricePerUnit;
    decltype (initialInventoryQuantity)  helperVariable  = 12;

    string inventoryStatus;
    if (newInventory < 10)
        inventoryStatus = "Low Inventory";
    else
        inventoryStatus = "Sufficient Inventory";

    // Checking validation of a product category
    if (productCategory < 6 && productCategory > 0)
        cout << "Valid Product Category" << endl;
    else
        cout << "Invalid Product Category" << endl;



    switch (productCategory)
    {
    case 1:
        cout << "Category 1: Electronics" << endl;
        break;
    case 2:
        cout << "Category 2: Groceries" << endl;
        break;
    case 3:
        cout << "Category 3: clothing" << endl;
        break;
    case 4:
        cout << "Category 4: Stationary" << endl;
        break;
    case 5:
        cout << "Category 5: Miscellaneous" << endl;
        break;
        default:
            cout << "  " << endl;
    }

    // Receipt simulation loop

    cout << "        Receipt    " << endl;
    for (int i; i <= numberOfItemSold; i++)
    {
        cout << "Item " << i << ": $" << productPricePerUnit << endl;
    }


    cout << "         Report Summery     " << endl;
    cout << "Tax rates" << endl;
    cout << "Pre processor tax rate: " << preProccTaxRate * 100 << "%" << endl;
    cout << "Constant tax rate: " << constantTax * 100 <<"%" << endl;

    cout << "         Product Details    " << endl;
    cout << "Name:" << productName << endl;
    cout << "Category:" << productCategory << endl;
    cout << "Initial inventory :" << initialInventoryQuantity << endl;
    cout << "Price: $" << productPricePerUnit << endl;
    cout << "Item sold: " << numberOfItemSold << endl;

    cout << " " << endl;
    cout << "Remaining inventory: " << newInventory << endl;
    cout << "Total sales: " << totalSalesAmount << endl;
    cout << "Inventory status: " << inventoryStatus << endl;
    cout << "Helper Variable: " << helperVariable << endl;
    return 0;
}
