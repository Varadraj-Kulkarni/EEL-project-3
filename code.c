#include <stdio.h>

int main() {
    int serv_opt, term, wp1=599, wp2=699, wp3=899, pincode;
    float id, plan, plan_selct, disc, n1, n2, final;
    char name[30];
   
    printf("Welcome to Star Internet Services limited!");
    printf("\n\nTo get started, please choose a service:\n1.wifi recharge (1 month / 3 months / 6 months / annual recharge)\n2.Buy a new internet connection.\ninput: ");
    scanf("%d", &serv_opt);
    
    printf("You have selected option %d. To proceed further, please provide your information.", serv_opt);
    printf("\n\nPlease enter your name: ");
    scanf("%s", name);

    printf("Please enter Customer ID (in numbers only). If you are a new customer, please enter '0': ");
    scanf("%f", &id);
    
    if (serv_opt==1) {
        printf("Please select a monthly plan to recharge:\n1) ₹599\n2) ₹699 (3 percent discount)\n3) ₹899 (5 percent discount)\n select: ");
        scanf("%f", &plan);
        printf("please select term in months (1 / 3 / 6 / 12)\nselect: ");
        scanf("%d", &term);
        if (term==1) {
                wp1=wp1*1;
                wp2=wp2*1;
                wp3=wp3*1;
        }
        else if (term==3) {
                wp1=wp1*3;
                wp2=wp2*3;
                wp3=wp3*3;
        }
        else if (term==6) {
                wp1=wp1*6;
                wp2=wp2*6;
                wp3=wp3*6;
        }
        else if (term==6) {
                wp1=wp1*6;
                wp2=wp2*6;
                wp3=wp3*6;
        }
        else if (term==12) {
                wp1=wp1*12;
                wp2=wp2*12;
                wp3=wp3*12;
        }
    
        
        
        if (plan==1) {
            plan_selct = 599;
            disc = 0;
            n1 = wp1 + (18*wp1) / 100;
            n2 = n1;
        }
        else if (plan==2) {
            plan_selct = 699;
            disc = 3;
            n1 = wp2 + (18*wp2) / 100;
            n2 = n1 - (3 * n1)/100;
        }
        else if (plan==3) {
            plan_selct = 899;
            disc = 5;
            n1 = wp3 + (18 * wp3) / 100;
            n2 = n1 - (5 * n1)/100;
        }
        
       
       final = n2;
       
       
printf("\n\n\n***************************************************************************************************");
        printf("\n                                  Star Internet Services limited              ");
        printf("\n***************************************************************************************************");
        printf("\nCustomer Name: %s", name);
        printf("\nCustomer ID: %.0f", id);
        printf("\nPlan selected: ₹%.2f", plan_selct);
        printf("\n------------------------------------------------------------------------------------------------\n");
        printf("\nplan cost per month: ₹%.2f", plan_selct);
        printf("\nTerm selected: %d months", term);
        printf("\nToal taxes applicable: 18% (CGST & SGST INC.)");
        printf("\nInvoice ID: 677DG5GDYH");
        printf("\nDiscount applicable: %.2f percent", disc);
        printf("\n-------------------------------------------------------------------------------------------------");
        printf("\nTOTAL PRICE:   ₹%.2f", final);
        printf("\n-------------------------------------------------------------------------------------------------");
        printf("\nThank you for using our service!");
        printf("\n-------------------------------------------------------------------------------------------------");
        printf("\n***************************************************************************************************");
    }
    
    else if (serv_opt==2) {
        printf("Please enter your pincode: ");
        scanf("%d", &pincode);
        printf("We will check the area availability and contact you soon. Please refer our website to see plans and features.\n\nThank you for showing interest!");
    }
    
    return 0;
}
