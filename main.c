#include<stdio.h>
#include<string.h>

struct record   //structure definition to record or save mmeting
{
    char time[50];
    char name[50];
    char place[50];
    char duration[20];
};

struct record r[20];

void login();
void Add_record();
void View_record();
void display_record();
void security_notifications();
void funimage();
void logout();
char Name[100];
char Password[100];
int i,j,mtgs;
int flag;
int alert=0;
char ADMIN[]="Lenovo";
char PASSWORD[]="951159";
char opt;
int main()
{
    printf("\n                                    ####################################");
    printf("\n                                    #    PERSONAL DIARY MANAGEMENT     #");
    printf("\n                                    ####################################\n\n");
    printf("\n                                             KEEP IN MIND ^_^\n");
    printf("\n                                    ###################################");
    printf("\n                                    #     1  : LOGIN                  #");
    printf("\n                                    #     2  : ADD A RECORD           #");
    printf("\n                                    #     3  : VIEW SAVED RECORDS     #");
    printf("\n                                    #     4  : SECURITY NOTIFICATIONS #");
    printf("\n                                    #     5  : FUN DIAGRAM ;)         #");
    printf("\n                                    #     6  : LOGOUT                 #");
    printf("\n                                    ###################################\n\n");
    int choice;
    while(1)
    {
         label:printf("\nENTER YOUR CHOICE    :  ");
         scanf("%d",&choice);
         if(choice==1)
         {
             flag=1;
         }
         else if(flag==0)
         {
             printf("\n                                 #########################################");
             printf("\n                                 #       Sorry Permission Denied! :(     #");
             printf("\n                                 #  PLEASE LOGIN TO CHECK ADMIN OR NOT ? #");
             printf("\n                                 #           FOR LOGIN ENTER 1           #");
             printf("\n                                 #########################################\n\n");
             flag=0;
             alert +=1;
             goto label;
         }
         switch(choice)
         {
            case 1:
                login();
                break;
            case 2:
                Add_record();
                break;
            case 3:
                display_record();
                break;
            case 4:
                security_notifications();
                break;
            case 5:
                funimage();
                break;
            case 6:
                logout();
                break;
         }

    }
}
void login()
{
    int result1,result2;
    label : printf("\nENTER ADMINISTRATOR NAME   :  ");
    scanf("%s",&Name);
    printf("\nENTER YOUR PASSWORD        :  ");
    scanf("%s",&Password);
    result1=strcmp(Name,ADMIN);
    result2=strcmp(Password,PASSWORD);
    if(result1 == 0 && result2 == 0)
    {
        printf("\n\n                               ############################################");
        printf("\n                               #   PERMISSION GRANTED YOU MAY CONTINUE :) #");
        printf("\n                               ############################################\n\n");
    }
    else
    {
        printf("\n                                   ####################################");
        printf("\n                                   # SORRY :(  PERMISSION DENIED !    #");
        printf("\n                                   #INCORRECT ADMIN-NAME OR PASSWORD !#");
        printf("\n                                   ####################################\n\n");
        goto label;
    }
}

void Add_record()
{
    int no_mtngs;
    printf("\n                                  ######################################");
    printf("\n                                  # * * * * :) WELCOME! (:  * * * * * *#");
    printf("\n                                  ######################################\n");

    printf("\n\nENTER NUMBER OF MEETINGS TODAY  : ");
    scanf("%d",&no_mtngs);
    mtgs=no_mtngs;
    for(i=0;i<no_mtngs;i++)
    {
        printf("\n\n*************************************");
        printf("\n||  ENTER YOUR %d MEETING RECORD   ||",i+1);
        printf("\n*************************************\n");
        printf("\n\nENTER MEETING TIME   : ");
        scanf("%s",&r[i].time);
        printf("\nENTER CLIENT NAME    : ");
        scanf("%s",&r[i].name);
        printf("\nENTER MEETING PLACE  : ");
        scanf("%s",&r[i].place);
        printf("\nENTER MEETING DURATION :");
        scanf("%s",&r[i].duration);
    }
    printf("\n\nRECORD SUCESSFULLY SAVED :)\n\n");
}

void display_record()
{
        printf("\n                                  ######################################");
        printf("\n                                  #          SCHEDULED MEETINGS       #");
        printf("\n                                  ######################################");
        for(i=0;i<mtgs;i++)
        {
            printf("\n\n\n                                  ######################################");
            printf("\n                                  #MEETING %d :                   ",i+1);
            printf("\n                                  #              TIME     : %s     ",r[i].time);
            printf("\n                                  #              CLIENT   : %s     ",r[i].name);
            printf("\n                                  #              PLACE    : %s     ",r[i].place);
            printf("\n                                  #              DURATION : %s     ",r[i].duration);
            printf("\n                                  ######################################\n\n\n");
        }
}

void funimage()
{
    printf("\n          __________________                     _______________________");
    printf("\n          |              | |                    /   NEWS   /   PAPER   //");
    printf("\n          |  **********  | |                   /----------/-----------//");
    printf("\n          |              | |                  /[]~~~~~~~~/~~~~~~~~~~~//");
    printf("\n          |   PERSONAL   | |                 /~~~~~~~~~~/~~~~~~~~~~~//");
    printf("\n          |              | |                /~~~~~~~~~~/~~~~~~~[]~~//");
    printf("\n          |    DIARY     | |               /[]~~~~~~~~/~~~~~~~~~~~//");
    printf("\n          |              | |              /~~~~~~~~~~/~~~~~~~~~~~//      ~~");
    printf("\n          |  MANAGEMENT  | |             /----------^-----------//     ~~~~");
    printf("\n          |              | |                                       ~ ~ ~~~");
    printf("\n          |  **********  | |                                   ~ ~ ~ ~ ~");
    printf("\n          |______________| |                              ~  ~ ~ ~ ~ ~");
    printf("\n          \\_______________\\|                           ~__~___~___~__~_~");
    printf("\n          !~~~~~~~~~~_____________________              {              }~~~}");
    printf("\n          |_______|___________________|___}-             {            }   }");
    printf("\n                                                          {          }___}");
    printf("\n                                                           {________}");
    printf("\n                                                                         ");
}

void security_notifications()
{
    for(i=0;i<alert;i++)
    {
        printf("\n                                   ######################################");
        printf("\n                                   # SECURITY ALERT! : SIGN-IN BLOCKED #");
        printf("\n                                   ######################################\n");
    }
    printf("\n                                       TOTAL  : %d MISUSE ATTEMPTS\n\n",alert);
}

void logout()
{
    printf("\n                                      #################################");
    printf("\n                                      #    SUCCESSFULLY LOGGED OUT :) #");
    printf("\n                                      #################################");
    flag=0;
}
