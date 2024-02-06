#include <iostream>
using namespace std;

float areaOfCircle(float radius) {
    return 3.14 * radius * radius;
}

float areaOfRing(float innerRadius, float outerRadius) {
    float areaInnerCircle = areaOfCircle(innerRadius);
    float areaOuterCircle = areaOfCircle(outerRadius);
    float areaRing = areaOuterCircle - areaInnerCircle;
    return areaRing;
}

int main() {
    
    float innerRadius, outerRadius;

    cout << "Введите внутренний радиус кольца: ";
    setlocale(LC_ALL, "Russ");
    cin >> innerRadius;

    cout << "Введите внешний радиус кольца: ";
    cin >> outerRadius;

    if (innerRadius >= outerRadius) {
        cout << "Ошибка. Внутренний радиус должен быть меньше внешнего радиуса." << endl;
        return 1;
    }

    float ringArea = areaOfRing(innerRadius, outerRadius);
    cout << "Площадь кольца: " << ringArea << endl;

    return 0;
}


