#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    // ��ȯ ���
    const float KM_TO_MILES = 1.609f;
    float kilometers, miles;

    // ����ڷκ��� ų�ι��� �Է� �ޱ�
    printf("Please enter kilometers: ");
    scanf("%f", & kilometers);

    // ���Ϸ� ��ȯ
    miles = kilometers / KM_TO_MILES;

    // �Ҽ��� ù° �ڸ����� ���
    printf("%.1f km is equal to %.1f miles.\n", kilometers, miles);

    return 0;
}
