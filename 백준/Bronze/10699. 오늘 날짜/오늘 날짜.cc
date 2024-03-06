#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(NULL);
    tm *timeinfo = localtime(&now);

    char buffer[100];
    strftime(buffer, 100, "%Y-%m-%d", timeinfo);

    cout << buffer;

    return 0;
}
