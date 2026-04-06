#include <iostream>
using namespace std;

class Temperature {
private:
    double celsius;

public:
    Temperature(double c) {
        celsius = c;
    }

    void setCelsius(double c) {
        if (c < -273.15) {
            cout << "Invalid temperature" << endl;
        } else {
            celsius = c;
        }
    }

    double getCelsius() const { return celsius; }
    double getFahrenheit() const { return celsius * 9/5 + 32; }
    double getKelvin() const { return celsius + 273.15; }
};

int main() {
    Temperature t(25.0);

    t.setCelsius(-300.0);
    t.setCelsius(100.0);

    cout << t.getCelsius()    << endl;
    cout << t.getFahrenheit() << endl;
    cout << t.getKelvin()     << endl;

    return 0;
}