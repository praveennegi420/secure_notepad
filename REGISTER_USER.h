///                      R E G I S T E R _ U S E R . h
///  ========================================================================

///   ALL REGISTERATION FUNCTIONALITIES ARE PRESENT IN THIS HEADERFILE
///   userreg()         :   Main reg. function that calls other function
///   username_valid()  :   Checks weather username entered is valid or not
///   userchk()         :   Checks if username entered already exists
///   inputuser()       :   Enters userdata to a file.
///   check()           :   Checks weather parameters passed are equal or not

///  =========================================================================

#define SPE_CHAR      (( (uname[i]>='!' && uname[i]<='/') || uname[i]=='@' || uname[i]==' ')
#define INVALID_CHAR  ( (uname[i]>=':' && uname[i]<='?') || (uname[i]>='[' && uname[i]<='`') || (uname[i]>='{' && uname[i]<='~') ) )


struct { char name[20]; char pswd[20]; }user;                       /// DATA TYPE FOR USER  ///



int check(char upass[], char rpass[])                               /// CHECKS WEATHER STRING PASSED ARE EQUAL
{   if(strlen(upass)==strlen(rpass))
    {   for(int i=0; i<strlen(upass); i++)
        { if(upass[i]!=rpass[i]) return 0; } return 1;
    } else return 0;
}



void inputuser()                                                   ///  ADDS USERDATA TO RECORD FOR LATER USE  ///
{
    fptr = fopen("userrecord.bin", "ab");                          /// .bin is binary file & 'ab' opens
    fwrite(&user,sizeof(user),1,fptr);                             /// file in binary mode and append data
    fclose(fptr);
    gotoxy(37,18);
    printf("USER SUCCESSFULLY ADDED");
    delay(400); printf("  :");
    delay(400); printf("-");
    delay(400); printf(")\n\n");
    gotoxy(33,20); delay(300);
    printf("--- PRESS ENTER TO OPEN NOTEPAD ---\n\n");
    while(1){int k=getch(); if(k==13) notepadinput(user.name);}
}



void userchk(FILE *usercheck, char uname[])                      ///  CHECKS WEATHER USERNAME ALREADY EXISTS  ///
{
    int chku;
    while(!feof(usercheck))
    {
        fread(&use, sizeof(use), 1,usercheck);
        chku= check(uname, use.name);

        if(chku==1)
        {   fclose(usercheck); gotoxy(22,10);
            for(int i=0; i<62; i++) { printf("-"); delay(10);}
            gotoxy(28,14);
            printf("---x---xx--xx- USER ALREDY EXISTS -xx--xx---x----");
            gotoxy(22,18);
            for(int i=0; i<61; i++) { printf("-"); delay(10) ;}
            gotoxy(38,20); delay(600);
            printf("---- PRESS F1 TO LOGIN ----");
            gotoxy(36,22); delay(600);
            printf("---- PRESS F2 TO TRY AGAIN ----");
            gotoxy(22,24);
            for(int i=0; i<61; i++)
            { printf("-"); delay(10) ;}printf("\n");
            getch();
            while(1)
            {   int k=getch(); if(k==F1) login();
                else if(k==F2) userreg();
            }
        } else continue;
    }
}


void username_valid()                                           ///  CHECKS WEATHER USERNAME IS VAILD OR NOT  ///
{
    int k=0; char uname[30]; strcpy(uname, user.name);
    if(strlen(uname)<7)
    {   gotoxy(22,12);
        for(int i=0; i<61; i++)
        { printf("-"); delay(10); } k=1;
        gotoxy(34, 15); printf("USER NAME MUST BE OF ATLEAST 7 CHARACKTERS\n\n");
    }
    else
    {   for(int i=0; uname[i]!='\0'; i++)
        {   if SPE_CHAR || INVALID_CHAR
            {   gotoxy(22,12);
                if(uname[i]=='_') continue;
                for(int i=0; i<61; i++)
                { printf("-"); delay(10) ;}k=1;
                gotoxy(38, 14); printf("xxxx INVALID USERNAME xxxx\n\n");
                gotoxy(28,16);  printf("USERNAME CAN ONLY HAVE 1 , A , a , _ CHAR & NO SPACE ");  break;
            }   else continue;
        }
    }
    if(k==1)
    {   gotoxy(22,18);
        for(int i=0; i<61; i++)
        { printf("-"); delay(10) ;}
        gotoxy(36,20); delay(600);
        printf("---- PRESS F2 TO TRY AGAIN ----\n");
        gotoxy(33,22);
        for(int i=0; i<19; i++)
        {
            printf("/"); delay(10);
            printf("\\"); delay(10);
        }   printf("\n");
        getch();
        while(1){ int k=getch(); if(k==F2) userreg();}
    }
    else return;
}



void userreg()                                                  ///  MAIN REGISTERATION FUNCTION, IT CALLS ALL OTHER FUNCTIONS  ///
{   FILE *usercheck= fopen("userrecord.bin", "rb");
    char c, repass[20]; int n, i;

    gotoxy(25,26);
    for(int i=0; i<46; i++)
    {printf("~"); delay(20);}
    system("cls"); gotoxy(25, 6);
    printf("------------------ REGISTERATION PROMPT -----------------");
    gotoxy(40,8); printf("ENTER USERNAME: ");
    scanf("%s", user.name); username_valid();

    if(usercheck!=NULL)
        userchk(usercheck, user.name);
    gotoxy(40,10);
    printf("ENTER PASSWORD: "); scanf("%s", user.pswd);
    int j= passwordsecure(user.pswd);
    if(j==1)
    {
        gotoxy(38,12);
        printf("RE-ENTER PASSWORD: ");
        for(i=0; c!=13; i++)
        {   c=getch();
            if(c==8) {i-=2; printf("<-");continue;}
            repass[i]=c; printf("*");
        }   repass[i-1]='\0';
        int ch= check(user.pswd, repass);
        gotoxy(22,14);
        for(int i=0; i<61; i++)
        { printf("-");delay(10);}

        if(ch==1)
        {   gotoxy(40, 16);
            printf("PRESS ENTER TO CONTINUE\n\n");
            while(1){ int n=getch(); if(n==13) inputuser();}
        }
        else
        {   gotoxy(40, 16);
            printf("PASSWORD DOES'NT MATCH\n\n");
            gotoxy(22,18);
            for(int i=0; i<61; i++)
            { printf("-"); delay(10) ;}
            gotoxy(34,20); delay(600);
            printf("---- PRESS F2 TO TRY AGAIN ----\n");
            gotoxy(33,22);
            for(int i=0; i<19; i++)
            {
                printf("/"); delay(10);
                printf("\\"); delay(10);
            }   printf("\n");
            while(1){int n=getch(); if(n==F2) userreg();}
        }
    }
    else if(j==2)
    {   gotoxy(30,12);
        for(int i=0; i<46; i++)
        {printf("-");delay(20);}
        gotoxy(45,14); printf("WEAK PASSOWORD");
        gotoxy(24, 16);
        printf(" PASSWORDS MUST HAVE ATLEAST 7 CHAR & ALL CHAR A , a , 1 , @\n");
        gotoxy(22,18);
        for(int i=0; i<61; i++)
        { printf("-"); delay(10) ;}
        gotoxy(36, 20); delay(800);
        printf("---- PRESS F2 TO TRY AGAIN ----\n");
        gotoxy(33,22);
        for(int i=0; i<19; i++)
        {   printf("/"); delay(10);
            printf("\\"); delay(10);
        }   printf("\n");
        while(1){int n=getch(); if(n==F2) userreg();}
    }
    else if(j==3)
    {   gotoxy(22,12);
        for(int i=0; i<61; i++)
        { printf("-");delay(20);}
        gotoxy(30,14);
        printf("CHAR LIKE = , ^ , ~ , ~ , \" , ' , ARE INVALID\n");
        gotoxy(34, 16); delay(800);
        printf("---- PRESS F2 TO TRY AGAIN ----\n");
        while(1){int n=getch(); if(n==F2) userreg();}
    }   return;
}
