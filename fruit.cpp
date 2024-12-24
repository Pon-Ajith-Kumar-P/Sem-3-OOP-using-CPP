#include <iostream>
using namespace std;

class Fruit 
{
    protected:
        int ftotal;

    public:
        Fruit()
        {
            ftotal=0;
        }
        void addfruit(int count)
        {
            ftotal += count;
        }
        int get_total()
        {
            return ftotal;
        }
};

class Apples : public Fruit 
{
    public:
            Apples(int apples) 
            {
                cout<<"Number of apples in the basket: " << apples << endl;
            }
};

class Mangoes : public Fruit 
{
    public:
        Mangoes(int mangoes) 
        {
            cout << "Number of mangoes in the basket: " << mangoes << endl;
        }
};

int main() 
{
    int apples, mangoes;

    cout << "Enter the number of apples in the basket: ";
    cin >> apples;
    cout << "Enter the number of mangoes in the basket: ";
    cin >> mangoes;

    Fruit basket;
    Apples abasket(apples);
    Mangoes mbasket(mangoes);

    basket.addfruit(apples);
    basket.addfruit(mangoes);
 
   cout << "Total number of fruits in the basket: " << basket.get_total() << endl;
    return 0;
}
