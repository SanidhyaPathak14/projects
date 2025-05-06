#include <iostream>
#include <string>

using namespace std;


class Payment {
public:
    virtual void processPayment(double amount) = 0; 
    virtual ~Payment() {} 
};

// Derived class: CreditCardPayment
class CreditCardPayment : public Payment {
private:
    string cardNumber;
    string cardHolder;

public:
    CreditCardPayment(const string& number, const string& holder)
        : cardNumber(number), cardHolder(holder) {}

    void processPayment(double amount) override {
        cout << "Processing credit card payment..." << endl;
        cout << "Card Holder: " << cardHolder << endl;
        cout << "Card Number: " << cardNumber << endl;
        cout << "Amount: $" << amount << endl;
    }
};

// Derived class: DebitCardPayment
class DebitCardPayment : public Payment {
private:
    string cardNumber;
    string bankName;

public:
    DebitCardPayment(const string& number, const string& bank)
        : cardNumber(number), bankName(bank) {}

    void processPayment(double amount) override {
        cout << "Processing debit card payment..." << endl;
        cout << "Bank: " << bankName << endl;
        cout << "Card Number: " << cardNumber << endl;
        cout << "Amount: $" << amount << endl;
    }
};


int main() {
    
    Payment* payment1 = new CreditCardPayment("1234-5678-9012-3456", "John Doe");
    Payment* payment2 = new DebitCardPayment("9876-5432-1098-7654", "Bank of Example");

    payment1->processPayment(150.75);
    cout << endl;
    payment2->processPayment(89.60);

    // Clean up
    delete payment1;
    delete payment2;

    return 0;
}
