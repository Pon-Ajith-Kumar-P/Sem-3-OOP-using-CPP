#include <iostream>
#include <string>
using namespace std;
class Item {
private:
    string iname;
    float iprice;
public:
    Item(string name = "", float price = 0.0) {
        iname = name;
        iprice = price;
    }
    void setItemDet(string name, float price) {
        iname = name;
        iprice = price;
    }
    string getItemName() const {
        return iname;
    }
    void getItemDet() const {
        cout << "Item Name: " << iname << ", Price: $" << iprice << endl;
    }
    float getPrice() const {
        return iprice;
    }
    ~Item() {}
};
class ShopCart 
{
private:
    Item* cart;
    int capacity;
    int itemcount;
public:
    ShopCart(int cap = 5) {
        capacity = cap;
        cart = new Item[capacity];
        itemcount = 0;
    }
    void addItem(string name, float price) {
        if (itemcount < capacity) {
            cart[itemcount].setItemDet(name, price);
            itemcount++;
            cout << "Item added to the cart!" << endl;
        } else {
            cout << "Cart is full! Cannot add more items." << endl;
        }
    }
    void deleteItem(string name) {
        bool itemFound = false;
        for (int i = 0; i < itemcount; i++) {
            if (cart[i].getItemName() == name) {
                itemFound = true;
                for (int j = i; j < itemcount - 1; j++) {
                    cart[j] = cart[j + 1];
                }
                itemcount--;
                cout << "Item '" << name << "' deleted from the cart." << endl;
                break;
            }
        }
        if (!itemFound) {
            cout << "Item not found in the cart!" << endl;
        }
    }
    void displayCart() const {
        if (itemcount == 0) {
            cout << "Cart is empty!" << endl;
        } else {
            cout << "Items in your cart: " << endl;
            for (int i = 0; i < itemcount; i++) {
                cart[i].getItemDet();
            }
        }
    }
    void printTotal() const {
        float total = 0.0;
        for (int i = 0; i < itemcount; i++) {
            total += cart[i].getPrice();
        }
        cout << "Total Price of order: $" << total << endl;
    }
    ~ShopCart() {
        delete[] cart;
        cout << "Shopping cart destroyed!" << endl;
    }
};
int main() {
    ShopCart cart(5);
    cart.addItem("Laptop", 1000.00);
    cart.addItem("Headphones", 50.00);
    cart.displayCart();
    cart.printTotal();
    cart.deleteItem("Laptop");
    cart.displayCart();
    cart.printTotal();
    cart.addItem("Keyboard", 25.00);
    cart.displayCart();
    cart.printTotal();
    return 0;
}