#include <iostream>

template<typename T>
void swapMinMax(T arr[], int size) {
    if (size <= 1) {
        // ����� �� ����� ��� ���� ������ ��������, ���� ������� � ����
        return;
    }

    int minIndex = 0;
    int maxIndex = 0;

    // ��������� ������� ������� ���������� �� ������������� ��������
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    // ���� ������� �� ������ ��������� �� ������ ������������ ����������
    T temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int intArr[] = { 5, 2, 7, 3, 1 };
    char charArr[] = "Sport";

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]) - 1;  // -1 ��� ���������� ������� '\0'

    swapMinMax(intArr, intSize);

    std::cout << "Swapped integer array: ";
    for (int i = 0; i < intSize; i++) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;

    swapMinMax(charArr, charSize);

    std::cout << "Swapped char array: " << charArr << std::endl;

    return 0;
}