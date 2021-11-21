///             p a s s w o r d _ s e c u r i t y . H

///  ------------------------------------------------------------------------
///      It basically checks weather password entered is strong or weak
///  -------------------------------------------------------------------------


#define FUNCTION       int passwordsecure(char pswd[])
#define DECLATION      int a=0, A=0, num=0, spe=0;
#define LOOP           for(int i=0; i<strlen(pswd); i++)
#define LENGTH         if(strlen(pswd)<7)  return 2;
#define SMALL          if(pswd[i]>='a' && pswd[i]<='z') a=1;
#define LARGE          else if(pswd[i]>='A' && pswd[i]<='Z') A=1;
#define NUMBER         else if(pswd[i]>='0' && pswd[i]<='9')  num=1;
#define SEP_CHAR       else if( (pswd[i]>='!' && pswd[i]<='/') || pswd[i]=='@' || pswd[i] == '_') spe=1;
#define INVALID_CHAR   else if( (pswd[i]>=':' && pswd[i]<='?') || (pswd[i]>='[' && pswd[i]<='`') || (pswd[i]>='{' && pswd[i]<='~') ) return 3;

#define STRENGTH       if(a==1 && A==1 && num==1 && spe==1) return 1;
#define IN_LOOP        { SMALL LARGE NUMBER SEP_CHAR INVALID_CHAR }
#define RETURN         return 2;


FUNCTION
{
    DECLATION
    LENGTH
    LOOP
    IN_LOOP
    STRENGTH
    RETURN
}
