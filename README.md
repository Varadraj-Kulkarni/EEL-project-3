PROJECT 3

NAME: Varadraj Kulkarni
ROLL NO: 127 (PRN: B25CE1127)
CLASS: FY CE 2
BATCH: C

AIM: To generate a bill (similar to electricity bill by calculating units consumed and finding total cost) by accepting customer information like customer ID, name etc. Bill should be in proper format.

RESEARCH:
Billing systems are used almost everywhere — from electricity boards to mobile recharges, Wi-Fi services, and online shopping.
 They help automate calculations like the total amount, taxes, and discounts. Earlier, people had to manually calculate bills, but now most companies use computer-based billing software.
For example, BSNL, Airtel, and JioFiber use online systems that generate bills instantly after the user selects a plan or uses a service. These bills show:
Customer name and ID
Plan type and duration
Base amount
GST and other taxes
Discounts and final total


In India, GST (Goods and Services Tax) is 18% on internet services, which includes 9% CGST and 9% SGST. This is applied to all telecom and broadband plans.
 (Source: Government of India, gst.gov.in


PROJECT: Internet Services Billing System

ANALYSIS:
To make the program efficient and logical, the following points were analyzed before implementation:
User input handling: Accepting customer details and plan choices.
Discount calculation: Combining both base plan discounts and term-based discounts for realistic billing.
Tax computation: Applying a fixed GST rate of 18%.
Validation: Handling invalid plan or term selections gracefully.
Output formatting: Printing an invoice similar to a real broadband bill, with all details clearly displayed.


IDEATE:
The project aims to combine simplicity with realism.
 Ideas considered included:
Electricity bill generator
Mobile recharge system
Broadband billing system
Chosen Project: Broadband billing system
BUILD:
The program uses conditional structures (if-else), variables, and arithmetic expressions to process input and compute billing.
Key Features Built:
User can select between Recharge or New Connection.
For recharges, users select one of three plans — ₹599 (Basic), ₹699 (Standard), ₹899 (Premium).
Discounts are given as follows:
Plan Discount: 0%, 3%, or 5% depending on plan.
Term Discount: 0% (1 month), 2% (3 months), 4% (6 months), or 7% (12 months).


GST is calculated at a fixed 18%.
The final output prints a formatted invoice with all key details such as name, ID, plan, discounts, taxes, and total.


TESTING:
Test Scenarios:
Recharge with 1-month plan: No discounts applied, only GST.
Recharge with 6-month Premium plan: 5% + 4% discounts applied cumulatively.
Recharge with invalid input: Error message displayed correctly.
New connection option: Pincode input taken, and availability message displayed.


IMPLIMENTATION:
Github link:  
https://github.com/Varadraj-Kulkarni/EEL-project-3/tree/1a0ae423d81af638bc2f0d1463946be117bbb671

CONCLUSION:
The project successfully demonstrates how c language can be applied to real-world business use cases like billing systems.
      
  SOURCES:
      Let Us C by Yashavant Kanetkar
      Programming in ANSI C by E. Balagurusamy
      Official GST information: https://www.gst.gov.in
      Plan structure references: Airtel Xstream, JioFiber official websites

