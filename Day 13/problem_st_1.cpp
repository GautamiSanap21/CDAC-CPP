#include <iostream>
using namespace std;
class Item
{
    int itemID;
    string itemName;
    float price;
    int stockQuantity;
}

class Bill
{
    int billID;
    string customerName;
    string[20] list_of_purchased_items;
}