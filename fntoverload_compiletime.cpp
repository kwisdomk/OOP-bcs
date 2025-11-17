#include <iostream>
using namespace std;

class RestaurantOrder {
    public:
        void placeOrder(string itemName) {
            cout << "Order placed for: " << itemName << endl;
        }

        void placeOrder(string itemName, int quantity) {  
            cout << "Order placed for: " << quantity << " x " << itemName << endl; 
        }
        void placeOrder(string itemName, int quantity, bool takeout) {
            cout << "Order placed for: " << quantity << " x " << itemName;
            if (takeout)
                cout << " (Takeout)" << endl;
            else 
                cout << " (Dine-in)" << endl; 
        }
}; 

int main() {
    RestaurantOrder order;

    order.placeOrder("Yams");
    order.placeOrder("Tea", 2);
    order.placeOrder("Chapoz", 3, true);  

    return 0;
}