#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", n<<1);
}

// 비트단위 시프트연산자 (<<.>>) : 2진수 형태에서 왼쪽or오른쪽으로 밀어줌
// ex
// int a=10;
// printf("%d", a<<1); //10을 2배 한 값인 20 이 출력된다.
// printf("%d", a>>1); //10을 반으로 나눈 값인 5 가 출력된다.
// printf("%d", a<<2); //10을 4배 한 값인 40 이 출력된다.
// printf("%d", a>>2); //10을 반으로 나눈 후 다시 반으로 나눈 값인 2 가 출력된다.
