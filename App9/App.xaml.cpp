#include <iostream>  
#include <windows.h>  
using namespace std;
// aftours: LeRMoN, Kolia, XeSh, FlasH. school Shag, code: house worken. my tg:https://t.me/LERMONfupa <- click Ctrl+Left mouse, im check sms.Надеюсь правильно написал. \\   
void MemoryDistance() { // 1
    int a = 10;
    int b = 20;

    int* perv = &a;
    int* druv = &b;

    auto distanseee = perv - druv;
    int bytesss = (char*)perv - (char*)druv; 

    cout << "Растояние в елементах: " << distanseee << "\n";
    cout << "Растояние в байтах: " << bytesss << "\n";
}

void StepeniCalkult() { // 2
    int num;
    cout << "Введите число: ";
    cin >> num;

    int* errr = &num;

    int powst2= pow(*errr, 2);
    int powst3 = pow(*errr, 3);
    int powst4 = pow(*errr, 4);

    cout << "квадратик: " << powst2 << "\n";
    cout << "кубик: " << powst3 << "\n";
    cout << "четвертая степень: " << powst4 << "\n";
}

void SumOneThuRovnoTrii() { // 3
    int a, b, sumaa;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    int* perv = &a;
    int* druv = &b;
    int** err_sum = &perv;

    int sumaa = *err_sum + *druv;

    cout << "Сумма: " << sumaa << "\n";
}

void IdealWeight() { // 4 
    double height, reali_weight, ideal_weight;

    cout << "Введите рост (в сантиметриках): ";
    cin >> height;
    cout << "Введите реальный вес (в килограмчиках): ";
    cin >> reali_weight;

    double* err_height = &height;
    double* err_reali_weight = &reali_weight;
    double** err_ideal_weight = &err_height;

    ideal_weight = *err_ideal_weight - 110;

    cout << "Идеальненький вес: " << ideal_weight << " кг\n";
    cout << "Необходимо сбросить или набрать: " << (ideal_weight - *err_reali_weight) << " килограмчиков \n";
}

void FiveeLevell() { // 5
    int value = 42;

    int* erp1 = &value;
    int** erp2 = &erp1;
    int*** erp3 = &erp2;
    int**** erp4 = &erp3;
    int***** erp5 = &erp4;

    cout << "Адрес значения: " << &value << "\n";
    cout << "Адрес erp1: " << erp1 << "\n";
    cout << "Адрес erp2: " << erp2 << "\n";
    cout << "Адрес erp3: " << erp3 << "\n";
    cout << "Адрес erp4: " << erp4 << "\n";
    cout << "Адрес erp5: " << erp5 << "\n";
}

int main() {
    MemoryDistance();
    StepeniCalkult();
    SumOneThuRovnoTrii();
    IdealWeight();
    FiveeLevell();
    return 0;
}