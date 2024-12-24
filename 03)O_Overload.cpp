#include <iostream>
using namespace std;

class Box {
      double length;  
      double breadth; 
      double height;      
   public:
      void setdata( double len,double bre,double hei ) 
      {
         length = len;
         breadth = bre;
         height = hei;
      }
       void input() 
       {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
        cout << "Enter height: ";
        cin >> height;
    }
      double getVolume(void) 
      {
         return length * breadth * height;
      }
      
      // Overload + operator to add two Box objects.
      Box operator+(Box& b) {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
      

};

// Main function for the program
int main() {
   Box Box1;                
   Box Box2;                
   Box Box3;                
   double volume = 0.0;     
 
    cout << "Enter dimensions for Box1:" << endl;
    Box1.input();

    cout << "Enter dimensions for Box2:" << endl;
    Box2.input();

   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   Box3 = Box1 + Box2;

   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}