#include "Payment.h"
#include <bits/stdc++.h>
using namespace std;

bool Payment::processPayment(string userId, double amount)
{
    cout << "Payment of $" << amount << " processed successfully for User ID: " << userId << "." << endl;
    return true;
}