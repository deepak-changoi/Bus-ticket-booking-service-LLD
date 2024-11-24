#include "Notification.h"
#include <bits/stdc++.h>
using namespace std;

void Notification::sendConfirmationEmail(string email)
{
    cout << "Confirmation email sent to: " << email << "." << endl;
}

void Notification::sendCancellationEmail(string email)
{
    cout << "Cancellation email sent to: " << email << "." << endl;
}
