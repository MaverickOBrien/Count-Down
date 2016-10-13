#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int Seconds;
    time_t t = time(0);

    cout << "Welcome to the KoolKids timer" <<endl <<endl;
    cout << "Imput the amount of seconds you want to count down:" <<endl;
    cin >> Seconds;
    cout << "Starting count down from " << Seconds <<endl;
    for (int i = Seconds -1; i >= 0; i--)
    cout << "Time remaining: " << i <<endl;
    cout <<endl;
    cout << "KAAAAABOOOOOOOOOM, I R DUN!" <<endl;
    cout <<endl;
    cout << "Current Date/Time:" <<endl;
    struct tm * now =localtime( & t );
    cout << (now->tm_year +1900) << '-'
        << (now->tm_mon + 1) << '-'
        << now->tm_mday << '/'
        << now->tm_hour - 12 << ':'
        << now->tm_min << ':'
        << now->tm_sec <<endl;
    return 0;
}
