///                       L  O  G  I  N  _  U  S  E  R
///  ================================================================================

///  ALL LOGIN FUNCTIONALITIES ARE PRESENT IN THIS HEADERFILE
///  login()       : It is main function that calls other additional functions
///  checkuser()   : It checks weather enter credentials match or not
///  register()    : It is called when there exists no user record

///  =================================================================================
#define F1 59
#define F2 60

struct{char name[20];char pswd[20];}use;


FILE *fptr;

                                                   ///  WHEN NO USERFILE DATA IS FOUND THIS FUNCTION IS CALLED
                                                   ///  IT TELLS USER TO FIRST REGISTER THEM & THEN LOGIN
void registe()
{   gotoxy(22,12);
    {   printf("-"); delay(10);}
    gotoxy(27,14); printf("---x---xx--xx- NO USERFILE EXIT -xx--xx---x---");
    gotoxy(38, 16); printf("-- REGISTER FIRST --");
    gotoxy(32, 18); delay(800);
    printf("---- PRESS F2 FOR REGISTERATION ----\n");
    while(1){int k=getch(); if(k==F2)userreg();}   /// userreg() is defined in REGISTER_USER.h file
}


                                                  ///  CHECKS WEATHER ENTERED CREDENTIALS ARE VALID OR NOT
void checkuser(char uname[], char upass[])
{   fptr = fopen("userrecord.bin", "rb");         ///  opens file in read mode
    if(fptr==NULL)  registe();
    int chku, chkp, found=0;
    while(!feof(fptr))
    {   fread(&use, sizeof(use), 1,fptr);
        chku= check(uname, use.name);             /// check() is defined in REGISTER_USER.h file
        chkp= check(upass, use.pswd);             /// it basically takes parameter and tells weather string are equal or not

        if(chku==1 && chkp==1)
        {   found=1; fclose(fptr);                /// gotoxy() is defined in FUNCTIONS.h file
            for(int i=0; i<53; i++)
            gotoxy(22,12);
            for(int i=0; i<53; i++)
            { printf("-");delay( 10); }           /// delay() is defined in FUNCTIONS.h file
            gotoxy(27,14);
            printf("---x---xx--xx- DETAILS MATCHED -xx--xx---x---");
            gotoxy(29,16); delay(300);
            printf("---- PRESS ENTER TO OPEN NOTEPAD ----\n");
            gotoxy(22,18);
            for(int i=0; i<53; i++)
            {
                printf("-");
                delay(10);
            }   printf("\n");
            int k=getch();
            while(1)
            { if(k==13) notepadinput(uname); k= getch();}   /// notepadinput() is defined in NOTEPAD.h file
        }   else continue;
    }

    if(found==0)                                            /// When Details did'nt match
    {   gotoxy(22,12);
        for(int i=0; i<53; i++)
        { printf("-");delay(10); }
        gotoxy(26,14);
        printf("---x---xx--xx- INVALID LOGIN -xx--xx---x---");
        gotoxy(34, 16); delay(800);
        printf("---- PRESS F1 TO TRY AGAIN ----\n");
        while(1){int k=getch(); if(k==F1) login();}
    }
}



void login()                                                ///  MAIN LOGIN FUNCTION    ///
{   char uname[20], upass[20], c;
    int i;
    gotoxy(25, 26);
    for(int i=0; i<46; i++)
    { printf(">"); delay(15);}

    system("cls"); gotoxy(25, 6);
    printf("------------------ LOGIN PROMPT ----------------");
    gotoxy(38,8);
    printf("ENTER USERNAME: "); scanf("%s", uname);
    gotoxy(36,10);  printf("ENTER PASSWORD: ");
    for(i=0; c!=13; i++)
    {   c=getch();
        if(c==8) { i-=2; continue; }
        upass[i]=c; printf("*");
    }   upass[i-1]='\0';
    gotoxy(30,10); checkuser(uname, upass); return;
}
