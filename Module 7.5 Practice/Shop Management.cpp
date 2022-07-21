#include <bits/stdc++.h>
using namespace std;

class Shop
{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];
protected:
    int total_income;
public:
    int get_total()
    {
        return total_income;
    }
    void set_total(int total_income)
    {
        this->total_income+=total_income;
    }
};
int main()
{
    Shop *my_shop=new Shop;
    cout<<"Number of products : ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Product "<<i<<" Name: ";
        cin>>my_shop->product_name[i];
        cout<<"Product "<<i<<" Price: ";
        cin>>my_shop->product_price[i];
        cout<<"Product "<<i<<" Quantity: ";
        cin>>my_shop->product_quantity[i];
    }
    while(true)
    {
        cout<<endl;
        cout<<"\t\t BUY PRODUCT"<<endl;
        cout<<"\t\t______________"<<endl;
        cout<<"Product Index\t\t";
        for(int i=1;i<=n;i++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
        cout<<"Product Name\t\t";
        for(int i=1;i<=n;i++)
        {
            cout<<my_shop->product_name[i]<<"\t";
        }
        cout<<endl;
        cout<<"Product Price\t\t";
        for(int i=1;i<=3;i++)
        {
            cout<<my_shop->product_price[i]<<"\t";
        }
        cout<<endl;
        cout<<"Product Quantity\t";
        for(int i=1;i<=3;i++)
        {
            cout<<my_shop->product_quantity[i]<<"\t";
        }
        cout<<endl<<endl;
        cout<<"Which product do you want? From 1 to "<<n<<": ";
        int index,quantity;
        cin>>index;
        cout<<"What is the quantity that you want of "<<my_shop->product_name[index]<<" : ";
        cin>>quantity;
        if(my_shop->product_quantity[index] < quantity)
        {
            cout<<"This quantity is not available"<<endl;
        }
        else
        {
            my_shop->set_total(quantity*my_shop->product_price[index]);
            my_shop->product_quantity[index]-=quantity;
            cout<<endl;
            cout<<my_shop->product_name[index]<<" bought "<<quantity<<" pc successfully"<<endl;
            cout<<"Your total income : "<<my_shop->get_total()<<endl;
        }
    }
    return 0;
}

//Shirt
//550
//25
//Pant
//850
//45
//Cap
//150
//90
