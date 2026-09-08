#include<stdio.h>
int main()
{ 
    int Math, Phy, Chem;
    int Total;
    printf("Math marks: ");
    scanf("%d", &Math);
    printf("Phy marks: ");
    scanf("%d", &Phy);
    printf("Chem marks: ");
    scanf("%d", &Chem);
    Total = Math + Phy + Chem;
    printf("Total marks are %d \n", Total);
    return 0;
}
