#include<stdio.h>
int a;
int t_withdraw_p;
int t_deposit_p;
void passbook();
int check_password;
long int balance=0;
int withdraw;
int password;
int deposit;
void deposits();
void information();
void current();
void saving();
void check();
void search();
void withdraws();
     //Void main
void main()
{
    printf("------------------------------------------------------------------------------------------------------------------------\n\t\t\t\t\t\t-: Maruti Bank System :-\n------------------------------------------------------------------------------------------------------------------------");
     int type;
     //For open type of account...
     printf("\nCreat Any Off This Accounts");
    printf("\nPress 1 to Current Account");
    printf("\nPress 2 to Saving Account\n");
      scanf("%d",&type);
        switch(type)
         {
             case 1:
                 current();
             break;
             case 2:
                  saving();
              break;
             default:
                 printf("Enter valid number");

         }

}

   //Void current function
     void current()
             {
                      information();
                      //account deposit
                        printf("Please deposit Your money for Open Account...\n ");
                        printf("\nMinimum amount of 10,000\n");
                        printf("\nEnter your deposit amount: \n");
                           scanf("%d",&deposit);
            //to check the deposit to up 9,999
                             balance=deposit;
                             t_deposit_p=t_deposit_p+deposit;
                           if(balance>9999)
                           {
                               printf("\n\tYour current Account is Open...\n");
                           }
                           else
                           {
                               printf("!!Please, add more money to open account!!\n");
                               printf("Enter deposit amount again! ");
                                  scanf("%d",&deposit);
                               balance=balance+deposit;
                            t_deposit_p=t_deposit_p+deposit;
                                  if(balance>9999)
                                  {
                                      printf("\n\tYour current Account is Open...\n");
                                  }
                                  else
                                  {
                                   printf("\n\t\t!!!Your account will not be opened because you have not paid the fixed amount!!!\n");
                                   exit (0);
                                  }
                           }
                           search();
             }
             //Saving function
     void saving()
            {
                information();
                search();
            }
            //user information function
     void information( )
            {
                printf("\nPlease fill Your information for Open Account\n");
                   //User Password
                 printf("\nSet your Password for 4 digits: ");
                   scanf("%d",&password);
            }
            //search function
              void search()
        {
           do{
                    printf("\nPress 1 to Check Balance");
                    printf("\nPress 2 to Deposit Money");
                    printf("\nPress 3 to Withdraw Money");
                    printf("\nPress 4 to passbook");
                    printf("\nPress 0 to Exit\n");
                    scanf("%d",&a);
                     switch(a)
                      {
                      case 1:
                         check();
                             break;
                      case 2:
                          deposits();
                             break;
                      case 3:
                        withdraws();
                             break;
                      case 4:
                        passbook();
                             break;
                      default:
                        printf("This is not valid Number...");
                      }
                }while(a!=0);
                printf("You are Exit for Bank...Thanks for Visit...");

            }

            //check function
                void check()
                {
                    printf("Enter your 4 digit password ");
                       scanf("%d",&check_password);
                    if(password==check_password)
                           {

                               printf("\nYour Balance is: %ld\n",balance);
                           }
                     else
                     {
                         printf("\nYour password is not valid... \n");
                         exit (0);
                     }
                }

        //deposit function
                void deposits()
                    {
                        check();
                        printf("Enter Your deposit amount");
                          scanf("%d",&deposit);
                        balance=deposit+balance;
                         t_deposit_p=t_deposit_p+deposit;

                        printf("After deposit Your Balance: %ld",balance);
                    }

                    //withdraw function
               void withdraws()
               {
                   check();
                   printf("Enter Your withdraw amount\n");
                     scanf("%d",&withdraw);
                     balance=balance-withdraw;
                         t_withdraw_p=t_withdraw_p+withdraw;
                   printf("After withdraw Your Balance: %ld\n",balance);
               }

//passbook functions
            void passbook()
            {
                check();
                printf("\nyour last deposit is:- %d\n",deposit);
                printf("\nyour  last withdraws is:- %d",withdraw);
                printf("\n\nyour  Total deposit is:- %d\n",t_deposit_p);
                printf("\nyour  Total withdraw is:- %d\n\n\n",t_withdraw_p);
            }




































