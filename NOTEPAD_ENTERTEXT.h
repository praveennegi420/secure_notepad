/*  NOTEPAD INPUT FUNCTIONALITIES   */

/*  INSERTS DATA IN FILE AND GIVE TIMESTAMP WITH CHOICE */
void notewrite_timestamp(int t, int f, int a, char text[])
{
    FILE *userfile;
    if(a==1) { userfile= fopen(uname, "wb"); }
    else if(a==2) { userfile= fopen(uname, "ab"); }
    if(t==1)
    {
        time_t t; time(&t);
        char *j= ctime(&t);
        char curr[200]="\n-+-+-+- TIME STAMP: ";
        strcat(curr,j); curr[45]=' ';
        strcat(curr, "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
        curr[93]='\n';curr[94]='\n';
        fwrite(&curr, sizeof(char),95,userfile);
    }
    else{char j[2]="\n\n"; fwrite(&j, sizeof(char),2,userfile); }
    int len= strlen(text);
    gotoxy(30,f);
    for(int i=0; i<19; i++)
    {
        printf("/"); delay(10);
        printf("\\"); delay(10);
    }
    fwrite(&text, sizeof(char),len,userfile);
    if(t==1)
    {
        time_t t; time(&t);
        char *j= ctime(&t);
        char curr[200]="\n\n-^-^-^- TIME STAMP: ";
        strcat(curr,j); curr[46]=' ';
        strcat(curr,"-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-");
        fwrite(&curr, sizeof(char),94,userfile);
    }
    gotoxy(36,f+2); printf("***  TEXT - INSERTED  ***\n\n");
    fclose(userfile);
    gotoxy(32,f+4); printf("***  PRESS ENTER TO GO BACK  ***\n\n");
    while(1){int k=getch(); if(k==13) notepadinput(uname);}
}

/* NOTEPAD OVERWRITE ENTER HIT FUNCTIONALITY */
void enterhit_write()
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
    gotoxy(4,18); int f= 19; fflush(stdin);
    char text[1800], c;
    for(i=0; c!= ESC; i++)
    {
        c= getch(); int j=c;
        if(j== BKSP ) { i-=2; printf("<-"); continue; }
        if(j== ENTER) { text[i]='\n'; gotoxy(4,f); f++; continue;}
        text[i]=c; printf("%c",c);
    }
    text[i-1]='\0'; f+=3;
    fflush(stdin); gotoxy(4,f);
    for(int i=0; i<95; i++)
    { printf("-"); delay(5);}
    gotoxy(25,f+2); printf("f---||--||- press F1 to add timstamp -||-||-||---");
    gotoxy(28,f+4);    printf("---||--||- press F2 to add text -||-||-||---");
    gotoxy(29,f+6);     printf("---||--||- press F3 to go back -||-||-||---");
    gotoxy(30,f+8);      printf("---||--||- press ESC to exit -||-||-||---");
    fflush(stdin);
    gotoxy(4,f+10);
    for(int i=0; i<95; i++)
    { printf("-"); delay(5);} printf("\n\n");
    while(1)
    {
        int k= getch();
        if     (k==F1)  { notewrite_timestamp(1, f+12, 1, text); break;} ///        FUNCTION YET TO ADD
        else if(k==F2)  { notewrite_timestamp(2, f+12, 1, text); break;}    ///         FUNCTION YET TO ADD
        else if(k==F3)  { notepadinput(uname); break;}
        else if(k==ESC) { escape(); break;}
    }
}


/* NOTEPAD OVERWRITE MAIN FUNCTION */
void notewrite()
{
    system("cls"); gotoxy(14,4);
    printf("---^---x--^x^--- WELCOME %s , TO SECRET WORLD OF TEXT ---^x^--x---^---", uname);
    gotoxy(37,6); printf("e x p l o r e . f r e e l y ");
    gotoxy(23,10); printf(". . . . . . .  c r e a t e . w o r l d  . . . . . . . .");
    gotoxy(26,13);
    for(int i=0; i<23; i++)
    {
        printf("/"); delay(10);
        printf("\\");delay(10);
    }
    gotoxy(34,15); printf("PRESS ENTER TO OVERWRITE TEXT");
    gotoxy(30,17); printf(">>>>>>  PRESS F1 TO GO BACK  <<<<<");
    gotoxy(28,19);printf(">>>>>>   PRESS F2 TO ADD TEXt   <<<<<");
    gotoxy(23,21);
    for(int i=0; i<26; i++)
    { printf("\\"); delay(10); printf("/");  delay(10);}
    printf("\n\n");
    while(1)
    {
        int k= getch();
        if(k==ENTER)  {  enterhit_write(); break;}
        else if(k==F1){  notepadinput(uname); break;}
        else if(k==F2){  noteadd(); break; }
    }
}
