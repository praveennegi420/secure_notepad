/// * == *   ===  *  === * S E C U R E . N O T E P A D * ===  *  == *

#include "HEADERFILES.h"                                    /// HEADERFILES.h includes all required headerfile for program
#include "ABOUT.h"
int main()
{
    system("cls"); int n;
    system("color 70");                                   /// CAN USE TO CHANGE INTERFACE AND TEXT COLOUR

    while(1)
    {
        n= logprompt();
        switch(n)
        {
            case F1 : login();   break;
            case F2 : userreg(); break;
            case F3 : about ();  break;
            case ESC : escape();
        }
        system("cls");                                       /// CLEARS SCREEN
    }
}


///  ========================  *   ===  *  === * S E C U R E . N O T E P A D * ===  *  ===  * ==========================
/*


    ===================================================================================================================

    ABOUT PROJECT :

    A BRIEF OVERVIEW OF "Secure Notepad"
    PROJECT IS DEVELOPED BY PRAVEEN NEGI, II year UG.

    This Project is fully coded in C Language, and uses most of the basic understanding concepts of C.
    It is implemented using concepts like: FILE HANDLING , FUNCTION , POINTERS , HEADER FILE , TIME , SYSTEM etc ...

    Secure Notepad provides a user-friendly interface which he/she can use to access their text from
    It has a password protected, and a USER can either Login or Register themselves accordingly
    LOGIN_USER.h      have login functionalities and        login()   performs Login task
    REGISTER_USER.h   have register functionalities and     userreg() performs REGISTERATION task

    Interface is presented beautifully using gotoxy(), delay() functions.
    gotoxy() helps to set co-ordinate on console
    delay()  is used in a manner such that it provides a little animation

    AFTER USER CREATES ACCOUNT OR LOGIN HE CAN ACCESS TO HIS PERSONAL TEXT SERVICE


                                            --------------------------------------------


    Various functionalities are provide for NOTEPAD
    Has Different Modes - READ , OVERWRITE , ADD , DEMO

    READ MODE - It displays all the text USER entered previously on interface
                "NOTEPAD_DISPLAY.h"  has all functionalities for READ MODE
    OVERWRITE - It deletes all the previous memory and starts storing everything again
                "NOTEPAD_WRITE.h" has all functionalities of OVERWRITE MODE
    ADD MODE  - It add more data after previously stored data.
                "NOTEPAD_ADDTEXT.h" has all functionalities of ADD MODE
    DEMO MODE - It provides a user-friendly interface where a user can check how everything works.
                "NOTEPAD_DEMO.h" has all functionalities of DEMO MODE


                                        ----------------------------------------------------


    NOTEPAD & INTERFACE PROVIDED ARE DIFFERENT IN BEHAVIOUR AND HAVE CERTAIN SET OF RULES TO USE

    1. NOTES CAN BE SAVED WITH TIMESTAP
    2. BACKSPACE HIT IS SPECIFIED WITH <- SYMBOL
    3. ONLY UNIQUE USERS EXIST 4. OVERWRITE MODE DELETES PREXISTING FILE AND ADD NEW TEXT
    5. TEXT EDITOR MODE CONTINUES TO WRITE AFTER LAST LEFT
    6. TO END INSERTION MODE HIT ESC KEY
    7. READ MODE SHOWS ALL TEXT USER LAST ENTERED IN FILE
    8. DEMO MODE PROVIDES VISUAL DEMO OF HOW TEXT IS INSERTED
    9. DEMO MODE DOESN'T SAVE TEXT TO FILE
    10. IT DOESN'T SUPPORT KEYBORD SHORTCUTS ( CTRL+V, CTR+S) ETC
    11. HIT ENTER IF LESS SPACE IS AVAILABLE TO MAINTAIN MARGIN

    THEY ARE PROVIDE IN "NOTEPAD_HELP.h" FILE

                                             -----------------------------------------

    It also provides many other functionalities like
    i)   securepassword() : IT CHECKS WEATHER PASSWORD ENTERED IS STRONG OR NOT
    ii)  timestamp()      : IT STORES THE TIMING WHEN DATA IS ENTERED
    iii) username_valid() : ALLOWS ONLY VALID USERNAME WITHOUT ANY SPECIAL CHAR OTHER THAN  ' _ '
    iv)  userchk()        : IT MAKES SURE THAT ONLY UNIQUE USERNAME EXISTS. IF USERNAME EXITS ALREADY IT DISALLOWS TO MAKE CHANGES AND ASK TO LOGIN
    v)   inputuser()      : Stores userdata credentials to a file

    ======================================================================================================================
*/

