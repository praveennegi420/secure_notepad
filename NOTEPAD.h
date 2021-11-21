///                             N o T e P a D . H

///   """"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

///   It has main notepad functionalities and call functions from other notepad file
///   notepadinput()  :  Presents opening window of NOTEPAD
///   choice()        :  Presents different functionalities to perform

///  """""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

#define F1 59
#define F2 60
#define F3 61
#define F4 62
#define F5 63
#define ESC 27
#define ENTER 13
#define BKSP 8


char uname[30];



void notepadinput(char name[])                      /// MAIN NOTEPAD FUNCTION
{
    system("cls");
    strcpy(uname, name);
    gotoxy(14, 4);
    printf("---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", name);
    gotoxy(37, 6); printf("e x p l o r e . f r e e l y ");
    gotoxy(29,10); printf("-+-+-+-+- ENTER YOUR CHOICE -+-+-+-+-");gotoxy(20,12);

    for(int i=0; i<57; i++) { printf("-");delay(15); }
    gotoxy(34,14); printf(">>> PRESS F1 FOR HELP <<<");
    gotoxy(34,16); printf(">>> PRESS F2 FOR DEMO <<<");
    gotoxy(31,18); printf(">>> PRESS F3 TO DISPLAY TEXT <<<");
    gotoxy(33,20); printf(">>> PRESS F4 TO ADD TEXT <<<\n\n");
    gotoxy(29,22);printf(">>>> PRESS F5 TO OVERWRITE FILE <<<<\n\n");
    gotoxy(34,24); printf(">>> PRESS ESC TO EXIT <<<"); gotoxy(20,26);

    for(int i=0; i<57; i++) { printf("-"); delay(10);} gotoxy(3, 30);
    while(1)
    {   int n=getch();
        switch(n)
        {
            case F1 : notehelp();break;
            case F2 : notedemo();break;
            case F3:  notedisplay();break;
            case F4:  noteadd(); break;
            case F5:  notewrite(); break;
            case ESC: escape(); break;
        }
    }
}
