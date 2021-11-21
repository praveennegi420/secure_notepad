///                                                       a b o u t . H
///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void about()
{
    system("cls");
    printf("\n\n\n\n");
    printf(" ================  *   ===  *  === * S E C U R E . N O T E P A D * ===  *  ===  * ==================== \n\n\n");
    printf("     ============================================================================================\n\n");

    printf("    ABOUT PROJECT :\n\n");

    printf("    A BRIEF OVERVIEW OF 'Secure Notepad'\n");
    printf("    PROJECT IS DEVELOPED BY PRAVEEN NEGI, II year UG.\n\n");

    printf("    This Project is fully coded in C Language, and uses most of the basic understanding concepts of C.\n");
    printf("    It is implemented using concepts like: FILE HANDLING , FUNCTION, POINTERS, HEADER FILE, TIME etc ...\n\n");

    printf("    Secure Notepad provides a user-friendly interface which he/she can use to access their text from\n");
    printf("    It has a password protected, and a USER can either Login or Register themselves accordingly\n");
    printf("    LOGIN_USER.h      have login functionalities and        login()   performs Login task\n");
    printf("    REGISTER_USER.h   have register functionalities and     userreg() performs REGISTERATION task\n\n");

    printf("    Interface is presented beautifully using gotoxy(), delay() functions.\n");
    printf("    gotoxy() helps to set co-ordinate on console\n");
    printf("    delay()  is used in a manner such that it provides a little animation\n\n");

    printf("    AFTER USER CREATES ACCOUNT OR LOGIN HE CAN ACCESS TO HIS PERSONAL TEXT SERVICE\n\n\n");


    printf("                              --------------------------------------------\n\n\n");


    printf("    OVERWRITE - It deletes all the previous memory and starts storing everything again\n");
    printf("                'NOTEPAD_WRITE.h' has all functionalities of OVERWRITE MODE\n");
    printf("    ADD MODE  - It add more data after previously stored data.\n");
    printf("                'NOTEPAD_ADDTEXT.h' has all functionalities of ADD MODE\n");
    printf("    DEMO MODE - It provides a user-friendly interface where a user can check how everything works.\n");
    printf("                'NOTEPAD_DEMO.h' has all functionalities of DEMO MODE\n\n\n");


    printf("                       -------------------------------------------------------------\n\n\n\n");



    printf("    NOTEPAD & INTERFACE PROVIDED ARE DIFFERENT IN BEHAVIOUR AND HAVE CERTAIN SET OF RULES TO USE\n\n");

    printf("    1. NOTES CAN BE SAVED WITH TIMESTAP\n");
    printf("    2. BACKSPACE HIT IS SPECIFIED WITH <- SYMBOL\n");
    printf("    3. ONLY UNIQUE USERS EXIST 4. OVERWRITE MODE DELETES PREXISTING FILE AND ADD NEW TEXT\n");
    printf("    5. TEXT EDITOR MODE CONTINUES TO WRITE AFTER LAST LEFT\n");
    printf("    6. TO END INSERTION MODE HIT ESC KEY\n");
    printf("    7. READ MODE SHOWS ALL TEXT USER LAST ENTERED IN FILE\n");
    printf("    8. DEMO MODE PROVIDES VISUAL DEMO OF HOW TEXT IS INSERTED\n");
    printf("    9. DEMO MODE DOESN'T SAVE TEXT TO FILE\n");
    printf("    10. IT DOESN'T SUPPORT KEYBORD SHORTCUTS ( CTRL+V, CTR+S) ETC\n");
    printf("    11. HIT ENTER IF LESS SPACE IS AVAILABLE TO MAINTAIN MARGIN\n\n");

    printf("    THEY ARE PROVIDE IN 'NOTEPAD_HELP.h' FILE\n\n");

    printf("                                  -------------------------------------------\n\n");

    printf("    It also provides many other functionalities like\n");
    printf("    i)   securepassword() : IT CHECKS WEATHER PASSWORD ENTERED IS STRONG OR NOT\n");
    printf("    ii)  timestamp()      : IT STORES THE TIMING WHEN DATA IS ENTERED\n");
    printf("    iii) username_valid() : ALLOWS ONLY VALID USERNAME WITHOUT ANY SPECIAL CHAR OTHER THAN  ' _ '\n");
    printf("    iv)  userchk()        : IT MAKES SURE THAT ONLY UNIQUE USERNAME EXISTS. IF USERNAME EXITS ALREADY\n");
    printf("                            IT DISALLOWS TO MAKE CHANGES AND ASK TO LOGIN\n");
    printf("    v)   inputuser()      : Stores userdata credentials to a file\n\n");

    printf("    ================================================================================================= \n\n\n\n");
    gotoxy(37,73); printf("** PRESS ESC TO GO BACK **\n\n\n");
    printf("    ================================================================================================= \n\n\n\n");
    while(1){int k=getch(); if(k==27)main();}
}
