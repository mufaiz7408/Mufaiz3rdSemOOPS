#include <stdio.h>

class Product {
public:
    char name[30];
    float price;

    void input(){
        printf("Product name: "); scanf("%s", name);
        printf("Price: "); scanf("%f", &price);
    }
    void show(){ printf("%s - Rs. %.2f\n", name, price); }
};

int main(){
    Product p[10];
    int n,i;
    float total=0;
    printf("How many products? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) p[i].input();

    printf("\nCart:\n");
    for(i=0;i<n;i++){ p[i].show(); total+=p[i].price; }
    printf("Total = Rs. %.2f\n", total);
    return 0;
}