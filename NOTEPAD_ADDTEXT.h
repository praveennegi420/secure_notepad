///                            n o t e p a d _ a d d t e x t . H

///  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

///       It adds entered text after last data and gives option of adding timestamp

///  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

// ADD NEW TEXT TO FILE //
void noteadd()
{
    system("cls"); gotoxy(14,4);
    printf("---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6); printf("e x p l o r e . f r e e l y ");
    gotoxy(23,10); printf(". . . . . . .  c r e a t e . w o r l d  . . . . . . . .");
    gotoxy(30,12);
    for(int i=0; i<19; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }
    char head[25]=">>>>>  ENTER TEXT  <<<<<", chr; int j= 19;
    gotoxy(4, 16);
    for(int i=0; i<36; i++)
    { printf("-"); delay(10);} int i=0;
    while(head[i]!='\0'){printf("%c",head[i]);i++;delay(10);}
    for(int i=0; i<36; i++)
    { printf("-"); delay(10);}
    gotoxy(27,46); printf("xx-xx press esc to exit insertion mode xx-xx");
    gotoxy(4,18); int f= 19;
    fflush(stdin);
    char text[1800], c;
    getch();
    for(i=0; c!= ESC; i++)
    {
        c= getch(); int j=c;
        if(j== BKSP ) { i-=2; printf("<-"); continue; }
        if(j== ENTER) { text[i]='\n'; gotoxy(4,f); f++; continue;}
        text[i]=c; printf("%c",c);
    } text[i-1]='\0'; f+=3;
    fflush(stdin); gotoxy(4,f);
    for(int i=0; i<95; i++)
    { printf("-"); delay(5);}
    gotoxy(25,f+2); printf("f---||--||- press F1 to add timstamp -||-||-||---");
    gotoxy(28,f+4);    printf("---||--||- press F2 to add text -||-||-||---");
    gotoxy(29,f+6);     printf("---||--||- press F3 to go back -||-||-||---");
    gotoxy(30,f+8);      printf("---||--||- press ESC to exit -||-||-||---");
    fflush(stdin); gotoxy(4,f+10);
    for(int i=0; i<95; i++)
    { printf("-"); delay(5);}
    while(1)
    {
        int k= getch();
        if(k==F1)       { notewrite_timestamp(1, f+12, 2, text); break;} ///        FUNCTION YET TO ADD
        else if(k==F2)  { notewrite_timestamp(2, f+12, 2, text); break;}    ///         FUNCTION YET TO ADD
        else if(k==F3)  { notepadinput(uname); break;}
        else if(k==ESC) { escape(); break;}
    }
}
