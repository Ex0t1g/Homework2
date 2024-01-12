#include <iostream>
#include <cmath>

using namespace std;

template<typename T>
T calculatePerimeter(T radius) {
    return 2 * M_PI * radius;
}

template<typename T>
T calculateArea(T radius) {
    return M_PI * pow(radius, 2);
}
template<typename T>
T calculateSideLength(T diagonal) {
    return sqrt(pow(diagonal, 2) / 2);
}

template<typename T>
T calculatePerimeter(T sideLength) {
    return 4 * sideLength;
}
template<typename T>
T calculateArea(T diagonal1, T diagonal2) {
    return (diagonal1 * diagonal2) / 2;
}
template<typename T>
T calculateSideLength(T perimeter) {
    return perimeter / 6;
}
template<typename T>
T calculatePerimeter(T sideLength) {
    return 6 * sideLength;
}
template<typename T>
T calculateArea(T sideLength) {
    return 2.598 * pow(sideLength, 2);
}

int main() {
    int shapeChoice;
    int precisionChoice;

    cout << "�������� ������ ��� ��������: " << endl;
    cout << "1. ����������" << endl;
    cout << "2. ����" << endl;
    cout << "3. �������������" << endl;
    cin >> shapeChoice;

    cout << "�������� �������� ��������: " << endl;
    cout << "1. �������������" << endl;
    cout << "2. ����������" << endl;
    cin >> precisionChoice;

    if (shapeChoice == 1) {
        double radius;
        cout << "������� ������ ����������: ";
        cin >> radius;

        if (precisionChoice == 1) {
            int perimeter = static_cast<int>(calculatePerimeter(radius));
            double area = static_cast<int>(calculateArea(radius));
            cout << "��������: " << perimeter << endl;
            cout << "�������: " << area << endl;
        }
        else {
            double perimeter = calculatePerimeter(radius);
            double area = calculateArea(radius);
            cout << "��������: " << perimeter << endl;
            cout << "�������: " << area << endl;
        }
    }
    else if (shapeChoice == 2) {
        double diagonal1, diagonal2;
        cout << "������� ������ ��������� �����: ";
        cin >> diagonal1;
        cout << "������� ������ ��������� �����: ";
        cin >> diagonal2;

        if (precisionChoice == 1) {
            int sideLength = static_cast<int>(calculateSideLength(diagonal1));
            int perimeter = static_cast<int>(calculatePerimeter(sideLength));
            int area = static_cast<int>(calculateArea(diagonal1, diagonal2));
            cout << "�������: " << sideLength << endl;
            cout << "��������: " << perimeter << endl;
            cout << "�������: " << area << endl;
        }
        else {
            double sideLength = calculateSideLength(diagonal1);
            double perimeter = calculatePerimeter(sideLength);
            double area = calculateArea(diagonal1, diagonal2);
            cout << "�������: " << sideLength << endl;
            cout << "��������: " << perimeter << endl;
            cout << "�������: " << area << endl;

        }
    }
    else if (shapeChoice == 3) {
        double perimeter;
        cout << "������� �������� ��������������: ";
        cin >> perimeter;

        if (precisionChoice == 1) {
            int sideLength = static_cast<int>(calculateSideLength(perimeter));
            int perimeter = static_cast<int>(calculatePerimeter(sideLength));
            int area = static_cast<int>(calculateArea(sideLength));
            cout << "�������: " << sideLength << endl;
            cout << "��������: " << perimeter << endl;
            cout << "�������: " << area << endl;
        }
        else {
            double sideLength = calculateSideLength(perimeter);
            double perimeter = calculatePerimeter(sideLength);
            double area = calculateArea(sideLength);
            cout << "�������: " << sideLength << endl;
            cout << "��������: " << perimeter << endl;
            cout << "�������: " << area << endl;
        }
    }
    else {
        cout << "������������ ����� ������." << endl;
    }

    return 0;
}
