///                              F U N C T I O N S . h

///  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

///  It holds all frequently called functions like -
///  gotoxy()      : Sets co-ordinates in console according to parameters passed
///  logprompt()   : Presents initial opening window
///  escape()      : Ends program
///  delay         : Helps in presenting little animation'

///  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



void gotoxy(int x, int y)                               /// PERFORM GOTO X , Y CO-ORDINATE IN PROMPT
{
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}



void delay(ms)                                          /// DELAY's OPERATION
{
    clock_t timeDelay=ms+ clock();
    while(timeDelay>clock());
}


int logprompt()                                        /// OPENING PROMPT FOR USER
{
    int n;
    gotoxy(9,6);
    printf("---- xx ------- xx ------- S e C u R e . N o T e P a D ------- xx -------- xx ----");
    gotoxy(18,10);
    for(int i=0; i<61; i++)
    { printf("=");}
    gotoxy(38,13);
    printf("** PRESS F1 TO LOGIN **");
    gotoxy(36,15);
    printf("** PRESS F2 TO REGISTER **");
    gotoxy(35,17);
    printf("** PRESS F3 TO SEE ABOUT **");
    gotoxy(37,19);
    printf("** PRESS ESC TO EXIT **");
    gotoxy(25,21);
    printf("---------------*-*-**-**-**-**-*-*-------------\n\n");
    gotoxy(18,24);
    for(int i=0; i<61; i++)
    { printf("=");} printf("\n\n\n");
    n=getch();
    return n;
}


void escape()                                              /// ESC HIT CODE
{
    system("cls");

    gotoxy(10,12);
    for(int i=0; i<85; i++)
    { printf("="); delay(10);}
    delay(50);
    gotoxy(30,16); delay(400);
    printf("!!!!!!!! -x-x-x-x- NoTePaD CloSeD -x-x-x-x-  !!!!!!\n\n\n\n");
    gotoxy(10,20);
    for(int i=0; i<85; i++)
    { printf("="); delay(20);}
    gotoxy(0,30); getch();
    exit(1);
}
