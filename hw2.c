#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
    // 변환 상수
    const float KM_TO_MILES = 1.609f;
    float kilometers, miles;

    // 사용자로부터 킬로미터 입력 받기
    printf("Please enter kilometers: ");
    scanf("%f", & kilometers);

    // 마일로 변환
    miles = kilometers / KM_TO_MILES;

    // 소수점 첫째 자리까지 출력
    printf("%.1f km is equal to %.1f miles.\n", kilometers, miles);

    return 0;
}
