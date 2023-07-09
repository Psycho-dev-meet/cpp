#include <iostream>

using namespace std;

int main()
{   
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    const int penny_value{1};

    int provided_input{0};
    int count{0};
    
    int balance{}, dollar{}, quarter{}, dime{}, nickel{}, penny{};

    cout << "Enter an amount in cents: ";
    cin >> provided_input;

    balance = provided_input % dollar_value;
    dollar = balance / dollar_value;

    cout << "dollar: " << dollar << "\n";
    
    quarter = balance / quarter_value;
    balance = balance % quarter_value;
    
    cout << "quarter: " << quarter << "\n";

    dime = balance / dime_value;
    balance = balance % dime_value;

    cout << "dime: " << dime << "\n";
    
    nickel = balance / nickel_value;
    balance = balance % nickel_value;

    cout << "nickel: " << nickel << "\n";

    penny = balance / penny_value;
    balance = balance % penny_value;

    cout << "penny: " << penny << "\n";

    return 0;


}