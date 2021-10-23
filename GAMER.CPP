#include<iostream>
#include<vector>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
class gamer
{
private:
    static int cnt;
    double balance;
    int num_of_purchased_games;
//    vector<game*> library;
public:
    gamer();
    void show_balance();
    double get_balance();
    void add_balance();
//    bool buy_game(game*);
};
int gamer::cnt=0;
gamer::gamer()
{
    balance=0;
    num_of_purchased_games=0;
    id=cnt;
    cnt++;
}
void gamer::show_balance()
{
    cout << " Current balance is : " << balance << endl;
}
double gamer::get_balance()
{
    return balance;
}
void gamer::add_balance()
{
    cout << "Enter your credit card number : "; //for the sake of realism only
    int n;                                      //we are not implementing the gateway to the concerned bank account
    cin >> n;
    cout << "Card verified." << endl;
    cout << "Enter the amount that you want to transfer : ";
    int x;
    cin >> x;
    balance+=x;
    cout << "Transaction completed! Credits added." << endl;
}
bool gamer::buy_game(game* new_game)
{
    if(new_game->get_price()<= balance)
    {
        balance-=new_game->get_price();
        cout << "Game purchased successfully" << endl;
        library.push_back(new_game);
        return 1;
    }
    else
    {
        cout << " Insufficient balance " << endl;
        return 0;
    }
}








