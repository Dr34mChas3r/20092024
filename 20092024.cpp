#include <iostream>

using namespace std;

int main() {

  int number = 500;

while (number <= 1000) // цикл
{
    cout << number << " "; // то є інтервал між числами щоб числа не зливались між собою
    if (number % 50 == 0)
    {
        cout << "\n"; // то є новий рядок, якщо число кратне 50
    }

    number += 1; // то є збільшення лічильника на 1 , тобто 500+1 501+1 й тд
} 

return 0;
}