#include <stdio.h>
int main() {
    int serv_opt, term, wp1=599, wp2=699, wp3=899, pincode;
    float id, plan, plan_selct, disc, term_disc, total_disc, n1, n2, final;
    char name[30]; printf("Welcome to Star Internet Services Limited!"); 
    printf("\n\nTo get started, please choose a service:"); 
    printf("\n1. Wi-Fi Recharge (1 month / 3 months / 6 months / Annual)"); 
    printf("\n2. Buy a new internet connection."); 
    printf("\nInput: "); 
    scanf("%d", &serv_opt); 
    printf("\nYou have selected option %d. To proceed further, please provide your information.", serv_opt); 
    printf("\n\nPlease enter your name: "); 
    scanf("%s", name); printf("Please enter Customer ID (in numbers only). If you are a new customer, please enter '0': "); 
    scanf("%f", &id); 
    if (serv_opt == 1) { 
        printf("\nPlease select a monthly plan to recharge:"); 
        printf("\n1) ₹599 (Basic)"); 
        printf("\n2) ₹699 (Standard - 3%% discount)"); 
        printf("\n3) ₹899 (Premium - 5%% discount)"); 
        printf("\nSelect: "); 
        scanf("%f", &plan); 
        printf("\nPlease select term in months. Additional discount will apply accordingly.\nHow many months? [1 (no discount) / 3 (2%% discount) / 6 (4%% discount) / 12 (7%% discount)]\n: "); 
        scanf("%d", &term); 
        
        if (term == 1) { 
            wp1 *= 1; 
            wp2 *= 1; 
            wp3 *= 1; 
            term_disc = 0;
        } 
        else if (term == 3) { 
            wp1 *= 3; 
            wp2 *= 3; 
            wp3 *= 3; 
            term_disc = 2;
        } 
        else if (term == 6) { 
            wp1 *= 6; 
            wp2 *= 6; 
            wp3 *= 6; 
            term_disc = 4; 
        } 
        else if (term == 12) { 
            wp1 *= 12; 
            wp2 *= 12; 
            wp3 *= 12; 
            term_disc = 7; 
        } 
        else { 
            printf("\nInvalid term selected. Please restart and enter a valid term."); return 0; 
        } 
        
        
        if (plan == 1) { 
            plan_selct = 599; 
            disc = 0; 
            n1 = wp1 + (18 * wp1) / 100; 
        } 
        else if (plan == 2) { 
            plan_selct = 699; 
            disc = 3; n1 = wp2 + (18 * wp2) / 100; 
        } 
        else if (plan == 3) { 
            plan_selct = 899; 
            disc = 5; n1 = wp3 + (18 * wp3) / 100; 
        } 
        else { 
            printf("\nInvalid plan selected. Please restart and enter a valid plan."); return 0; 
        } 
        
        total_disc = disc + term_disc; 
        n2 = n1 - (total_disc * n1) / 100; final = n2;
        
        printf("\n\n\n************************************************************************************************"); 
        printf("\n Star Internet Services Limited"); printf("\n*************************************************************************************************"); 
        printf("\nCustomer Name: %s", name); 
        printf("\nCustomer ID: %.0f", id); 
        printf("\nPlan Selected: ₹%.2f per month", plan_selct); 
        printf("\nTerm Selected: %d months", term); 
        printf("\n------------------------------------------------------------------------------------------------"); 
        printf("\nGST and taxes: 18%% (SGST and CGST incl.)"); 
        printf("\nBase Plan Discount: %.2f%%", disc); 
        printf("\nAdditional Term Discount: %.2f%%", term_disc); 
        printf("\nTotal Discount Applied: %.2f%%", total_disc); 
        printf("\n------------------------------------------------------------------------------------------------"); 
        printf("\nTotal Payable Amount: ₹%.2f", final); 
        printf("\n----------------------------------------------------------------------------------------------"); 
        printf("\nInvoice ID: 677DG5GDYH"); 
        printf("\nThank you for using our service!"); 
        printf("\n************************************************************************************************"); 
        
    } 
    else if (serv_opt == 2) { 
        printf("\nPlease enter your pincode: "); 
        scanf("%d", &pincode); 
        printf("\nWe will check the area availability and contact you soon."); 
        printf("\nPlease visit our website to explore available plans and features."); printf("\n\nThank you for showing interest!"); 
        
    } 
    else { 
        printf("\nInvalid option selected. Please restart and try again."); 
        
    } 
    return 0; 
    
}
