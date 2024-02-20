#include <iostream>
#include<vector>
#include <algorithm>
#include <iomanip>
/* Inventory Management */

struct Product {
    std::string productName;
    int productId;
    double price;
    int quantity;
};
void addProduct(std::vector<Product>& inventory,int id, double price, int quantity, std::string name) {
    // Get user input for product details
    // Create a Product instance using the input
    // Add the Product to the inventory vector
    Product p;
    p.price = price;
    p.productId = id;
    p.productName = name;
    p.quantity = quantity;
    inventory.push_back(p);
}


void displayInventory(const std::vector<Product>& inventory) {
    std::cout << "Hello, here is your product Data:\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Product ID | Name         | Price    | Quantity\n";
    std::cout << "------------------------------------------------------------\n";

    for (const auto& product : inventory) {
        std::cout << std::setw(10) << product.productId << " | "
                << std::setw(12) << std::left << product.productName << " | "
                << std::setw(8) << std::fixed << std::setprecision(2) << product.price << " | "
                << std::setw(8) << product.quantity << std::endl;
    }

    std::cout << "------------------------------------------------------------\n";
}
void removeProduct(std:: vector<Product>& inventory,int id){
   /* inventory.erase(std::remove_if(inventory.begin(), inventory.end(),
                                [id](const Product& p) { return p.productId == id; }),
                inventory.end());*/
                //can use the commented code above in case there's products with the same id note don't give products the same id
    inventory.erase(inventory.begin()+id-1);            
}
void editProduct(std::vector<Product>&inventory,int id, int newq,int newp, std::string nemwn){
    for(Product&p:inventory){
        if(p.productId==id)
        {
            p.price = newp;
            p.productName = nemwn;
            p.quantity = newq;
        }
    }
}
int main()
{
    std::cout<< "||====Inventory Management====|| \n";
    std::vector<Product>invent;
    addProduct(invent,1,3000.5,5,"Fridge");
    addProduct(invent,2,1500,9,"Dish washer");
    addProduct(invent,3,999.5,15,"Freezer");
    addProduct(invent,4,99.5,100,"Table");
    addProduct(invent,5,9,550,"Skirt");

    displayInventory(invent);
    removeProduct(invent,2);
    editProduct(invent,3,40,156,"Slipper");
    displayInventory(invent);


}