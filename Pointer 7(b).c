#include<stdio.h>

struct Account
{
    char name[50] ;
    int ac_num ;
    float balance ;
};

void addFund(struct Account *a , int n)
{
    int k ;
    for(k = 1 ; k <= n ; k++)
    {
        if(a[k].balance > 1000)
        {
            a[k].balance = a[k].balance + 100 ;

            printf("\nInformation of customers whose balance has been incremented");
            printf("\nCustomer's name is %s\n" , a[k].name);
            printf("Customer's account number is %d\n" , a[k].ac_num);
            printf("Customer's  incremented balance is %.3f$\n" , a[k].balance);
        }

    }
}

int main()
{
    int k , n ;
    printf("Enter customers number please\n");
    scanf("%d" , &n);

    struct Account a[n] ;
    for(k = 1 ; k <= n ; k++)
    {
        printf("Enter information of customer %d\n" , k);
        printf("Enter customer's name please\n");
        scanf("%s" , &a[k].name);

        printf("Enter customer's Account number please\n");
        scanf("%d" , & a[k].ac_num);

        printf("Enter customer's balance please\n");
        scanf("%f" , & a[k].balance);
    }

    for(k = 1 ; k <= n ; k++)
    {
        printf("\nInformation of customer %d\n" , k);
        printf("Customer's name is %s\n" , a[k].name);
        printf("Customer's account number is %d\n" , a[k].ac_num);
        printf("Customer's balance is %.3f$\n" , a[k].balance);
    }
    addFund(a , n) ;

    return 0 ;
}