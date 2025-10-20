#include<stdio.h>

int main() {
    int a, b, temp, total;
    int data[20];
    printf("Masukkan jumlah data: ");scanf("%d", &total);
    for (a = 0; a < total; a++)
    {
        printf("Masukkan nilai padan INDEX ke-%d: ", a + 1);scanf("%d", &data[a]);
    }

    for ( a = 0; a < total-1; a++)
    {
        for ( b = a+1; b < total; b++)
        {
            if (data[a] > data[b])
            {
                temp = data[b];
                data[b] = data[a];
                data[a] = temp;
            }
        }
    }
    
    printf("\n\nData setelah diurutkan: ");
    for (a = 0; a < total; a++)
    {
        printf("%d ", data[a]);
    }
    printf("\n");
    
    return 0;
}