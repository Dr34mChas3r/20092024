#include <iostream>

using namespace std;

int main() {

  int number = 500;

while (number <= 1000) // ����
{
    cout << number << " "; // �� � �������� �� ������� ��� ����� �� ��������� �� �����
    if (number % 50 == 0)
    {
        cout << "\n"; // �� � ����� �����, ���� ����� ������ 50
    }

    number += 1; // �� � ��������� ��������� �� 1 , ����� 500+1 501+1 � ��
} 

return 0;
}