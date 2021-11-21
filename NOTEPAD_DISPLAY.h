///                            n o t e p a d _ d i s p l a y . H

///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///       It prints all previous data user entered till now
///   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


/* DISPLAY ENTER HIT FUNCTIONALITIES */
void enterhit_display()
{
    system("cls"); gotoxy(14,4);
    printf("---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6); printf("e x p l o r e . f r e e l y ");
    gotoxy(23,10); printf(". . . . . . .  v i s u a l . w o r l d  . . . . . . . .");
    gotoxy(30,12);
    for(int i=0; i<19; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }
    FILE *userfile= fopen(uname, "rb");
    char text[50]=">>>>>  FILE TEXT  <<<<<", chr; int j= 19;
    gotoxy(4, 16);
    for(int i=0; i<36; i++)
    { printf("-"); delay(10);} int i=0;
    while(text[i]!='\0'){printf("%c",text[i]);i++;delay(10);}
    for(int i=0; i<36; i++)
    { printf("-"); delay(10);}

    gotoxy(4,18);
    for(int i=0; !feof(userfile); i++)
    {
        chr=fgetc(userfile);
        if(chr=='\n'){gotoxy(4,j);j++; continue;}
        printf("%c",chr);
    }   j+=5;
    gotoxy(4,j);
    for(int i=0; i<95; i++)
    { printf("-"); delay(5);}
    gotoxy(27,j+2); printf("---||--||- press F1 to add text -||-||-||---");
    gotoxy(26,j+4);printf("---||--||-  press F2 to overwrite  -||-||-||---");
    gotoxy(27,j+6); printf("---||--||- press F3 to go back -||-||-||---");
    gotoxy(27,j+8); printf("---||--||-  press ESC to EXIT  -||-||-||---\n\n");
    gotoxy(4,j+10);
    for(int i=0; i<95; i++)
    { printf("-"); delay(5);}
    fclose(userfile);
    while(1)
    {
        int k= getch();
        if(k==F1) { noteadd(); break;}
        else if(k==F2){ notewrite(); break;}
        else if(k==F3) {notepadinput(uname); break;}
        else if(k==ESC) {escape(); break;}
    }
}

/* DISPLAY FILE TEXT */
void notedisplay()
{   system("cls"); gotoxy(14,4);
    printf("---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6); printf("e x p l o r e . f r e e l y ");
    gotoxy(23,10); printf(". . . . . . .  v i s u a l . w o r l d  . . . . . . . .");
    gotoxy(26,13);
    for(int i=0; i<23; i++)
    {
        printf("/");  delay(10);
        printf("\\"); delay(10);
    }
    gotoxy(34,15); printf("PRESS ENTER TO DISPLAY TEXT");
    gotoxy(30,17); printf(">>>>>>  PRESS F1 TO GO BACK  <<<<<"); gotoxy(23,19);
    for(int i=0; i<26; i++)
    { printf("\\"); delay(10); printf("/");  delay(10);} printf("\n\n");
    while(1)
    {
        int k= getch(); if(k==ENTER) { enterhit_display(); break;}
        else if(k==F1){ notepadinput(uname); break;}
    }
}
