//
// Created by macedolg on 5/26/2024.
//

#include <stdio.h>

int main(void) {

    int n, predecessor, successor;

    printf("Enter a Number: \n");
    scanf("%d", &n);

    predecessor = n - 1;
    successor = n + 1;

    printf("\nThe predecessor of %d is %d.\nThe successor of %d is %d.\n", n, predecessor, n, successor);
    return 0;
}
