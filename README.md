# Inventory-management-system

## Overview
This is a simple inventory management project implemented in C++. It provides basic functionalities to add, display, remove, and edit products in an inventory.

## Features
- **Add Product**: Add a new product to the inventory.
- **Display Inventory**: Display the list of products in the inventory.
- **Remove Product**: Remove a product from the inventory.
- **Edit Product**: Modify the details of a product in the inventory.

## Instructions
1. **Compilation**: Compile the code using a C++ compiler. For example, you can use g++:
   ```bash
   g++ main.cpp -o inventory_management
Execution: Run the compiled executable:
./inventory_management
Adding Products: Products can be added in the main function by calling the addProduct function.
Removing Products: Use the removeProduct function to remove a product by specifying its ID.
Editing Products: Modify product details using the editProduct function.
Functions
void addProduct(std::vector<Product>& inventory, int id, double price, int quantity, std::string name): Add a new product to the inventory.
void displayInventory(const std::vector<Product>& inventory): Display the list of products in the inventory.
void removeProduct(std::vector<Product>& inventory, int id): Remove a product from the inventory.
void editProduct(std::vector<Product>& inventory, int id, int newq, int newp, std::string nemwn): Modify the details of a product in the inventory.
Note
Products should not have the same ID.
The provided code in main is for demonstration purposes and can be modified or expanded upon as needed.
Feel free to customize and expand this project according to your requirements!
