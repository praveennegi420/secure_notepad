///                  N O T E P A D _ H E L P . h

///  ````````````````````````````````````````````````````````````````````````````
///  It tells all important instructions regarding the use of notepad

///  ````````````````````````````````````````````````````````````````````````````

void notehelp()
{
    gotoxy(25,10); printf(". . . . . .^. i n s t r u c t i o n s .^. . . . . . .");
    gotoxy(33,12);
    for(int i=0; i<19; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }

    gotoxy(20,14);
    for(int i=0; i<63; i++)
    { printf("-"); delay(10); }

    gotoxy(32,16); printf("1. NOTES CAN BE SAVED WITH TIMESTAP ");
    gotoxy(28,18); printf("2. BACKSPACE HIT IS SPECIFIED WITH <- SYMBOL ");
    gotoxy(34,20); printf("3. ONLY UNIQUE USERS EXIST ");
    gotoxy(19,22); printf("4. OVERWRITE MODE DELETES PREXISTING FILE AND ADD NEW TEXT ");
    gotoxy(22,24); printf("5. TEXT EDITOR MODE CONTINUES TO WRITE AFTER LAST LEFT ");
    gotoxy(30,26); printf("6. TO END INSERTION MODE HIT ESC KEY ");
    gotoxy(24,28); printf("7. READ MODE SHOWS ALL TEXT USER LAST ENTERED IN FILE");
    gotoxy(23,30); printf("8. DEMO MODE PROVIDES VISUAL DEMO OF HOW TEXT IS INSERTED");
    gotoxy(30,32); printf("9. DEMO MODE DOESN'T SAVE TEXT TO FILE ");
    gotoxy(20,34); printf("10. IT DOESN'T SUPPORT KEYBORD SHORTCUTS ( CTRL+V, CTR+S) ETC ");
    gotoxy(21,36); printf("11. HIT ENTER IF LESS SPACE IS AVAILABLE TO MAINTAIN MARGIN ");
    gotoxy(20,38);
    for(int i=0; i<63; i++)
    { printf("-"); delay(10); }

    gotoxy(31,40);
    for(int i=0; i<19; i++)
    {
        printf("\\"); delay(10);
        printf("/");  delay(10);
    }
    gotoxy(34,42); printf(">>> PRESS ESC TO GO BACK <<<\n\n");
    while(1)
    {
        int k=getch();
        if(k==ESC) notepadinput(uname);
        else continue;
    }
}
