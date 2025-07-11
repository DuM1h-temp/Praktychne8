#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include <string.h>

long long factorial(int n) {
    long long res = 1;
    int i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
    char word[15];
    printf("������ �����: ");
    scanf("%s", word);

    int freq[256] = {0};
    int len = strlen(word);

	int i;
    for (i = 0; i < len; i++) {
        freq[(unsigned char)word[i]]++;
    }

    long long result = factorial(len);
    for (i = 0; i < 256; i++) {
        if (freq[i] > 1)
            result /= factorial(freq[i]);
    }

    printf("ʳ������ �������: %lld\n", result);

    return 0;
}

