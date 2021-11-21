///                           n o t e p a d _ d e m o . H

///  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

///     It provides a beautiful interface where user can see a demo how use notepad properly

///  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


void enterhit_demo()                                        /// d e m o _ e n t e r _ h i t _ c a l l
{
    system("cls"); gotoxy(14,4);
    printf("---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(34,6); printf("e x p l o r e . f r e e l y ");
    gotoxy(25,10); printf(". . . . . .^. d e m o . w o r l d .^. . . . . . .");
    gotoxy(30,12);
    for(int i=0; i<19; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }
    gotoxy(27,46); printf("xx-xx press esc to exit insertion mode xx-xx");
    gotoxy(4, 14); printf("ENTER TEXT: ");
    char c; int i;
    char str[1800]; int f= 15;
    for(i=0; c!= ESC; i++)
    {
        c= getch(); int j=c;
        if(j== BKSP ) { i-=2; printf("<-"); continue; }
        if(j==ENTER) { str[i]='\n'; gotoxy(4,f); f++; continue;}
        str[i]=c; printf("%c",c);
    } str[i-1]='\0';
    gotoxy(10,f+3);
    for(int i=0; i<85; i++)
    { printf("="); delay(10);}
    f+=6; gotoxy(5,f); i=0;
    printf("TEXT ENTERED: ");
    gotoxy(18,f);
    while(str[i]!='\0')
    {
      if(str[i]=='\n'){ f++; gotoxy(4,f);}
      else printf("%c", str[i]); i++;
    } printf("\n");
    gotoxy(10,f+3);
    for(int i=0; i<85; i++)
    { printf("="); delay(10);}
    gotoxy(30,f+6);
    for(int i=0; i<19; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }

    gotoxy(27,f+8); printf("---||--||- press F1 to go back -||-||-||---");
    gotoxy(27,f+10); printf("||-||-||- press F2 to test again -||-||-||");
    gotoxy(30,f+12);
    for(int i=0; i<19; i++)
    {
        printf("\\"); delay(10);
        printf("/");  delay(10);
    } printf("\n\n\n");
    f=getch();
    while(1)
    {
        if(f==F1) notepadinput(uname);
        else if(f==F2) enterhit_demo();
        f=getch();
    }
}


void notedemo()                                           ///   M A I N _ D E M O _ F U N C T I O N
{
    system("cls"); gotoxy(14,4);
    printf("---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(34,6); printf("e x p l o r e . f r e e l y ");
    gotoxy(24,10); printf(". . . . . . .^. d e m o . w o r l d .^. . . . . . . .");
    gotoxy(26,15);
    for(int i=0; i<23; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }
    gotoxy(30,17); printf("PRESS ENTER TO START INSERTING TEXT");
    gotoxy(30,19); printf(">>>>>>  PRESS F1 TO GO BACK  <<<<<");
    gotoxy(30,21); printf("* PRESS ESC TO EXIT INSETION MODE *");
    gotoxy(23,23);
    for(int i=0; i<26; i++)
    {
        printf("\\"); delay(10);
        printf("/");  delay(10);
    }
    printf("\n\n\n");
    while(1)
    {
        int k= getch();
        if(k==ENTER) { enterhit_demo(); break;}
        else if(k==F1){ notepadinput(uname); break;}
        else if(k==ESC) {escape(); break; }
    }

}
