#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include<time.h>
struct add{
char dish[100];
int price;
char item[100];
int code;
char name[100];
char addre[100];
int num[100][100];
char hcode[100];
char yes[100];
char no[100];
}x;
struct price{
char dish[100];
int price;
char item[100];
int code;
char name[100];
char addre[100];
int num[100][100];
char hcode[100];
char yes[100];
char no[100];
}y;
void SetColor(int ForgA){
     WORD wColor;

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

     ///We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
        ///Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xB0) + (ForgA & 0x0B);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}

void ClearConsoleToColors(int ForgA, int BackA){
     WORD wColor = ((BackA & 0x0B) << 4) + (ForgA & 0x0B);
     ///Get the handle to the current output buffer...
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     ///This is used to reset the carat/cursor to the top left.
     COORD coord = {0, 0};
     ///A return value... indicating how many chars were written
     ///   not used but we need to capture this since it will be
     ///   written anyway (passing NULL causes an access violation).
     DWORD count;
     ///This is a structure containing all of the console info
     /// it is used here to find the size of the console.
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     ///Here we will set the current color
     SetConsoleTextAttribute(hStdOut, wColor);
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          ///This fills the buffer with a given character (in this case 32=space).
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
          ///This will set our cursor position for the next print statement.
          SetConsoleCursorPosition(hStdOut, coord);
     }
     return;
}

void SetColorAndBackground(int ForgA, int BackA){
     WORD wColor = ((BackA & 0x0B) << 4) + (ForgA & 0x0B);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}

COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int x, int y){
    coord.X = x; coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void drawRectangle(){
    int i, j;
    SetColor(0);
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 115; i++){
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(115,0);
    printf("%c",187);
    for(i = 1; i < 29; i++){
        gotoxy(115, i);
        if(i == 6){
            printf("%c",185);
        }else{
            printf("%c",186);
        }
    }
    gotoxy(115, 29);
    printf("%c",188);
    for(i = 114; i > 0; i--){
        gotoxy(i,29);
        if(i == 35 || i == 75){
            printf("%c",202);
        }else{
            printf("%c",205);
        }
    }
    gotoxy(0,29);
    printf("%c",200);
    for(i = 28; i > 0; i--){
        gotoxy(0,i);
        if(i == 6){
            printf("%c",204);
        }else{
            printf("%c",186);
        }
    }

    for(i = 1; i < 115; i++){
        gotoxy(i,6);
        if(i == 35 || i == 75){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    }
    for(i = 7; i < 29; i++){
        gotoxy(35,i);

        printf("%c",186);
    }


    for(i = 7; i < 29; i++){

        gotoxy(75,i);
        printf("%c",186);
    }

}
void drawRectangle1(){
    int i, j;
    SetColor(0);
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 110; i++){
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(110,0);
    printf("%c",187);
    for(i = 1; i < 110; i++){
        gotoxy(i, 6);
        if(i == 30 || i == 75){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    }
    for(i=1;i<7;i++){
        gotoxy(0,i);
       printf("%c",186);
       if(i == 6){
            gotoxy(0,i);printf("%c",200);
        }
    }
    for(i=1;i<7;i++){
        gotoxy(110,i);
       printf("%c",186);
       if(i == 6){
            gotoxy(110,i);printf("%c",188);
        }
    }
    for(i = 7; i < 58; i++){
        gotoxy(30,i);

        printf("%c",186);
    }


    for(i = 7; i < 58; i++){

        gotoxy(75,i);
        printf("%c",186);
    }





}
void clearWindow(){
    int i,j;
    for(i = 37; i < 75; i++){
        for(j = 7; j < 29; j++){
            gotoxy(i,j);printf(" ");
        }
    }

    return;
}
void clearWindow_1(){
    int i,j;
    for(i = 77; i < 115; i++){
        for(j = 7; j < 29; j++){
            gotoxy(i,j);printf(" ");
        }
    }
    return;
}
void clearWindow_2(){
  int i,j;
    for(i = 32; i < 75; i++){
        for(j = 7; j < 58; j++){
            gotoxy(i,j);printf(" ");
        }
    }


}
void mai(){
    system("cls");
    drawRectangle();

     SetColor(1);
     gotoxy(45,3);printf("W");
        for (int j =0; j<3; j++){
            for (int j =0; j<90000000; j++){

            }}
       gotoxy(46,3);printf("E");
       for (int j =0; j<3; j++){
            for (int j =0; j<90000000; j++){

            }}
       gotoxy(47,3);printf("L");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(48,3);printf("C");
       for (int j =0; j<3; j++){
            for (int j =0; j<90000000; j++){

       }}
       gotoxy(49,3);printf("O");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(50,3);printf("M");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(51,3);printf("E");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(54,3);printf("TO");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
        gotoxy(60,3);printf("M");
        gotoxy(61,3);printf("R");
        gotoxy(62,3);printf(".");
        gotoxy(63,3);printf("Z");
        gotoxy(38,4);
    time_t t;
    time(&t);
    printf("Time :%s",ctime(&t));




}
int c,f;
void manu(){
    system("cls");
    mai();
int a,b=2;
pp1:
SetColor(10);
gotoxy(b,9);printf("Choose one to continue : ");
SetColor(11);
gotoxy(b,10);printf("1. Menu Card.");
gotoxy(b,11);printf("2. Home Delivery. ");
gotoxy(b,12);printf("3. Check Delivery. ");
gotoxy(b,13);printf("4. Admin. ");
SetColor(4);
gotoxy(b,14);printf("Choose : ");scanf("%d",&a);
if (a == 1)
{

    FILE*txt;
    p1:
     txt = fopen("test.txt","r");

    clearWindow();
    SetColor(17);
    int c,d=37;
    gotoxy(42,8);printf("Please Pay First.");
    gotoxy(d,9);printf("What Do You Want?");
    SetColor(14);
    gotoxy(d,10);printf("1. Breakfast. ");
    gotoxy(d,11);printf("2. Lunch. ");
    gotoxy(d,12);printf("3. Dinner. ");
    gotoxy(d,13);printf("4. Beverage. ");
    gotoxy(d,14);printf("5. Dessert ");
    gotoxy(d,15);printf("6. Main Menu.");
    SetColor(15);
    gotoxy(d,16);printf("Choose : ");scanf("%d",&c);
    if(c==1)
    {
        clearWindow();
        SetColor(19);
        int b=0,af;
        int abc;
        clearWindow();
        gotoxy(42,8);printf("Please Pay First.");
        gotoxy(d,9);printf("What Do You Like To Have ?");
        SetColor(14);
        int w=10;
        while(fread(&x,sizeof(x),1,txt))
         {
         char a[100]="breakfast";
        if(strcmp(a,x.item)==0)
        {
            int y =w;
              gotoxy(d,y);printf("%s\tTK-%d/-\t%d",x.dish,x.price,x.code);
            w++;
        }

        }
        while(1){
        gotoxy(d,25);printf("Enter 0 0 For Bill");
        gotoxy(d,26);printf("Enter Dish Code and Quantity :");scanf("%d%d",&abc,&f);
        price(abc);
        if(f == 0){
            int i;
            ol5:
            gotoxy(d,27);printf("Your Bill Is : %d",b);
            gotoxy(d,28);printf("Payment This : ");scanf("%d",&i);
            if(i == b)
            {
                clearWindow();
                gotoxy(d,16);printf("Enjoy Your Food");
                for (int j =0; j<5; j++){
                for (int j =0; j<90000000; j++){

                 }}
               goto p1;
            }
            else if(i!= b){
                goto ol5;
            }
        }
        af = price(abc);
        b+=af;
        /*gotoxy(d,26);printf("1. Want more? : ");scanf("%d",&h);
        if(h==1){
            clearWindow();
            goto p2;
        }*/
        }




    }
    else if(c == 2)
    {
        clearWindow();
        SetColor(19);
        int b=0,af;
        int abc;
        clearWindow();
        gotoxy(42,8);printf("Please Pay First.");
        gotoxy(d,9);printf("What Do You Like To Have ?");
        SetColor(14);
        int w=10;
        while(fread(&x,sizeof(x),1,txt))
         {
         char a[100]="lunch";
        if(strcmp(a,x.item)==0)
        {
            int y =w;
              gotoxy(d,y);printf("%s\tTK-%d/-\t%d",x.dish,x.price,x.code);
            w++;
        }

        }
        while(1){
        gotoxy(d,25);printf("Enter 0 0 For Bill");
        gotoxy(d,26);printf("Enter Dish Code and Quantity :");scanf("%d%d",&abc,&f);
        price(abc);
        if(f == 0){
            int i;
            ol4:
            gotoxy(d,27);printf("Your Bill Is : %d",b);
            gotoxy(d,28);printf("Payment This : ");scanf("%d",&i);
            if(i == b)
            {
                clearWindow();
                gotoxy(d,16);printf("Enjoy Your Food");
                for (int j =0; j<5; j++){
                for (int j =0; j<90000000; j++){

                 }}
                goto p1;
            }
            else if(i!= b){
                goto ol4;
            }
        }
        af = price(abc);
        b+=af;
    }
    }
    else if(c == 3)
    {
        clearWindow();
        SetColor(19);
        int b=0,af;
        int abc;
        clearWindow();
        gotoxy(42,8);printf("Please Pay First.");
        gotoxy(d,9);printf("What Do You Like To Have ?");
        SetColor(14);
        int w=10;
        while(fread(&x,sizeof(x),1,txt))
         {
         char a[100]="dinner";
        if(strcmp(a,x.item)==0)
        {
            int y =w;
              gotoxy(d,y);printf("%s\tTK-%d/-\t%d",x.dish,x.price,x.code);
            w++;
        }

        }
        while(1){
        gotoxy(d,25);printf("Enter 0 0 For Bill");
        gotoxy(d,26);printf("Enter Dish Code and Quantity :");scanf("%d%d",&abc,&f);
        price(abc);
        if(f == 0){
            int i;
            ol3:
            gotoxy(d,27);printf("Your Bill Is : %d",b);
            gotoxy(d,28);printf("Payment This : ");scanf("%d",&i);
            if(i == b)
            {
                clearWindow();
                gotoxy(d,16);printf("Enjoy Your Food");
                for (int j =0; j<5; j++){
                for (int j =0; j<90000000; j++){

                 }}
                goto p1;
            }
            else if(i!= b){
                goto ol3;
            }
        }
        af = price(abc);
        b+=af;
    }
    }
    else if(c == 4)
    {
        clearWindow();
        SetColor(19);
        int b=0,af;
        int abc;
        clearWindow();
        gotoxy(42,8);printf("Please Pay First.");
        gotoxy(d,9);printf("What Do You Like To Have ?");
        SetColor(14);
        int w=10;
        while(fread(&x,sizeof(x),1,txt))
         {
         char a[100]="beverage";
        if(strcmp(a,x.item)==0)
        {
            int y =w;
              gotoxy(d,y);printf("%s\tTK-%d/-\t%d",x.dish,x.price,x.code);
            w++;
        }

        }
        while(1){
        gotoxy(d,25);printf("Enter 0 0 For Bill");
        gotoxy(d,26);printf("Enter Dish Code and Quantity :");scanf("%d%d",&abc,&f);
        price(abc);
        if(f == 0){
            int i;
            ol2:
            gotoxy(d,27);printf("Your Bill Is : %d",b);
            gotoxy(d,28);printf("Payment This : ");scanf("%d",&i);
            if(i == b)
            {
                clearWindow();
                gotoxy(d,16);printf("Enjoy Your Food");
                for (int j =0; j<5; j++){
                for (int j =0; j<90000000; j++){

                 }}
                goto p1;
            }
            else if(i!= b){
                goto ol2;
            }
        }
        af = price(abc);
        b+=af;
    }
    }
    else if(c == 5)
    {
        clearWindow();
        SetColor(19);
        int b=0,af;
        int abc;
        clearWindow();
        gotoxy(42,8);printf("Please Pay First.");
        gotoxy(d,9);printf("What Do You Like To Have ?");
        SetColor(14);
        int w=10;
        while(fread(&x,sizeof(x),1,txt))
         {
         char a[100]="beverage";
        if(strcmp(a,x.item)==0)
        {
            int y =w;
              gotoxy(d,y);printf("%s\tTK-%d/-\t%d",x.dish,x.price,x.code);
            w++;
        }

        }
        while(1){
        gotoxy(d,25);printf("Enter 0 0 For Bill");
        gotoxy(d,26);printf("Enter Dish Code and Quantity :");scanf("%d%d",&abc,&f);
        price(abc);
        if(f == 0){
            int i;
            ol1:
            gotoxy(d,27);printf("Your Bill Is : %d",b);
            gotoxy(d,28);printf("Payment This : ");scanf("%d",&i);
            if(i == b)
            {
                clearWindow();
                gotoxy(d,16);printf("Enjoy Your Food");
                for (int j =0; j<5; j++){
                for (int j =0; j<90000000; j++){

                 }}
                goto p1;
            }
            else if(i!= b){
                goto ol1;
            }
        }
        af = price(abc);
        b+=af;
    }
    }

    else if(c == 6){

        clearWindow();
        goto pp1;
    }
fclose(txt);
}
else if(a == 2){
    homedeli();

}
else if(a == 3){
    clearWindow();
    int w = 37;
    char na[100];
    FILE*txt1;
    txt1=fopen("delivery.txt","r");
    gotoxy(w,9);printf("Enter Random Code TO Check Delivery");
    gotoxy(w,11);printf("Enter Random Code: ");fflush(stdin);gets(na);
    while(fread(&y,sizeof(y),1,txt1)){

        if(strcmp(na,y.hcode)==0)
        {
            gotoxy(w,14);printf("On the Way : %s",y.yes);
            gotoxy(w,16);printf("Cooking : %s",y.no);
            int u;
            gotoxy(w,18);printf("Press '1' To Beck : ");scanf("%d",&u);
            if(u==1){
                    clearWindow();
                goto pp1;
            }
        }
    }
    fclose(txt1);

}

else if(a == 4){
    adminl();
}




}

void price(int a){
FILE*txt;
txt = fopen("test.txt","r");
while(fread(&x,sizeof(x),1,txt))
         {
         if((a == x.code))
        {
            c=x.price*f;
            return c;


        }

         }
fclose(txt);

}
int price1(int b){
FILE*txt;
txt = fopen("test.txt","r");
while(fread(&x,sizeof(x),1,txt))
         {
         if((b == x.code))
        {
            c=x.price*f;
            return c;


        }

         }
fclose(txt);
}

void homedelides(){
   SetColor(1);
     gotoxy(45,3);printf("O");
        for (int j =0; j<3; j++){
            for (int j =0; j<90000000; j++){

            }}
       gotoxy(46,3);printf("R");
       for (int j =0; j<3; j++){
            for (int j =0; j<90000000; j++){

            }}
       gotoxy(47,3);printf("D");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(48,3);printf("E");
       for (int j =0; j<3; j++){
            for (int j =0; j<90000000; j++){

       }}
       gotoxy(49,3);printf("R");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(53,3);printf("F");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(54,3);printf("O");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
       gotoxy(55,3);printf("R");
       for (int j =0; j<3; j++){
          for (int j =0; j<90000000; j++){

       }}
        gotoxy(60,3);printf("D");
        gotoxy(61,3);printf("E");
        gotoxy(62,3);printf("L");
        gotoxy(63,3);printf("I");
        gotoxy(64,3);printf("V");
        gotoxy(65,3);printf("E");
        gotoxy(66,3);printf("R");
        gotoxy(67,3);printf("Y");

}
int ag=0;
void homedeli(){
    system("cls");
    drawRectangle1();
    homedelides();
    int m=32;
    int w=10;
    int abc,b=0;
    FILE*txt;FILE*txt1;
    txt=fopen("test.txt","r");
    while(fread(&x,sizeof(x),1,txt)){
        int y = w;
        gotoxy(m,y);printf("%s\tTK-%d/-\t%d",x.dish,x.price,x.code);
        w++;
    }
    int g;
    txt1=fopen("delivery.txt","a");
    gotoxy(77,10);printf("Payment Slip : ");
    gotoxy(77,11);printf("Enter A Random Code : ");fflush(stdin);gets(y.hcode);
    gotoxy(77,12);printf("Enter Your Name : ");fflush(stdin);gets(y.name);
    gotoxy(77,14);printf("Enter Your Address : ");fflush(stdin);gets(y.addre);
    gotoxy(77,16);printf("Enter Your Phone Number : ");fflush(stdin);scanf("%d",&y.num[1][1]);
    fwrite(&y,sizeof(y),1,txt1);
    fclose(txt1);
    while(1){
        gotoxy(77,18);printf("Enter 0 0 For Bill");
        gotoxy(77,20);printf("Enter Dish Code and Quantity :");scanf("%d%d",&abc,&f);
        price1(abc);
        if(f == 0){
            int i;
            yl1:
            gotoxy(77,22);printf("Your Bill Is : %d",b);
            gotoxy(77,24);printf("Payment This : ");scanf("%d",&i);
            if(i == b)
            {
                gotoxy(77,25);printf("Your Food Deliver With in 2 hour ");
                for (int j =0; j<5; j++){
                for (int j =0; j<90000000; j++){

                 }}
                 manu();
            }
            else if (i!=b){
                goto yl1;
            }
        }
        ag = price1(abc);
        b+=ag;




}
fclose(txt);

}
void main(){
ClearConsoleToColors(10,8);
manu();
getch();
}
void adminl(){

  char lname[100], pass[100];
  plo1:
    gotoxy(77,15);printf("Enter Your Login Name : ");fflush(stdin);gets(lname);
    gotoxy(77,18);printf("Enter Your Password : ");fflush(stdin);gets(pass);
   if(strcmp(lname,"tahsin")==0&&strcmp(pass,"20100064")==0){

   admin();
   }
   else if (strcmp(lname,"tahsin")!=0&&strcmp(pass,"20100064")==0){
    gotoxy(77,20);printf("Your User name Is Invalid");
    goto plo1;
   }
   else if (strcmp(lname,"tahsin")==0&&strcmp(pass,"20100064")!=0){
    gotoxy(77,21);printf("Your Password Is Invalid");
            goto plo1;
   }
   else if (strcmp(lname,"tahsin")!=0&&strcmp(pass,"20100064")!=0){
    gotoxy(77,22);printf("Your User Name And Password Is Invalid");
            goto plo1;
   }

}
void admin(){
    int a;
    p3:
    clearWindow_1();

SetColor(10);
gotoxy(77,9);printf("Welcome To The Admin");
SetColor(11);
gotoxy(77,10);printf("What you want to change ");
gotoxy(77,11);printf("1. add Dish on menu card");
gotoxy(77,12);printf("2. Check home delivery");
gotoxy(77,13);printf("3. Delivery check");
gotoxy(77,14);printf("4. Edit menu");
gotoxy(77,15);printf("5. Log OUT");
SetColor(4);
gotoxy(77,17);printf("Choose : ");scanf("%d",&a);
if(a == 1){
   clearWindow_1();


FILE*txt;
txt = fopen("test.txt","a");
gotoxy(77,9);printf("Enter Dish Name : ");
fflush(stdin);
gets(x.dish);
gotoxy(77,12);printf("Enter Dish Price : ");
fflush(stdin);
scanf("%d",&x.price);
gotoxy(77,14);printf("Enter item Name : ");
fflush(stdin);
gets(x.item);
gotoxy(77,16);printf("Enter Dish Code : ");
fflush(stdin);
scanf("%d",&x.code);
fwrite(&x,sizeof(x),1,txt);
fclose(txt);
clearWindow_1();
goto p3;

   }
else if(a == 2){
    system("cls");
    drawRectangle1();
    int w = 32;
    FILE*txt1;
    txt1=fopen("delivery.txt","r");
    int s=10;
     int a=1;
    while(fread(&y,sizeof(y),1,txt1)){

      int v=s;
      gotoxy(w,v);printf("%d.Name : ",a);puts(y.name);
      s++;
      v=s;
      gotoxy(w,v);printf("Address : ");puts(y.addre);

      s++;
      v=s;
      gotoxy(w,v);printf("Random Code : ");puts(y.hcode);
      s++;
      v=s;
      gotoxy(w,v);printf("Phone Number : %d",y.num[1][1]);
      s++;
      a++;
      }
    fclose(txt1);
    int u;
    gotoxy(77,15);printf("Press '1' to beck");scanf("%d",&u);
    if(u==1){
            system("cls");
             mai();
        goto p3;
    }


}
else if(a == 3){
        clearWindow_1();
        int t = 77;
        char num1[100];
        FILE*txt1;
        gotoxy(t,9);printf("Enter Random Number : ");
        fflush(stdin);
        gets(num1);
        txt1=fopen("delivery.txt","rb+");
        while (fread(&y,sizeof(y),1,txt1))
        {
        if (strcmp(num1,y.hcode)==0)
        {
        gotoxy(t,15);printf("On The Way : ");
        fflush(stdin);
        gets(y.yes);
        gotoxy(t,17);printf("Cooking : ");
        fflush(stdin);
        gets(y.no);

        }
        }
        fseek(txt1,-sizeof(y),SEEK_CUR);

        fwrite(&y,sizeof(y),1,txt1);

        fseek(txt1,-sizeof(y),SEEK_CUR);

        fread(&y,sizeof(y),1,txt1);
        int u;
        gotoxy(77,20);printf("Press '1' to beck");scanf("%d",&u);
        if(u==1){

            goto p3;
        }

        fclose(txt1);
}
else if(a == 4){
    clearWindow_1();
    FILE*txt;
int gg=77;
    int id,choice;
    int a;
    txt=fopen("test.txt","rb+");
    gotoxy(gg,8);printf("Enter Dish Code : ");
    fflush(stdin);
    scanf("%d",&id);

     while ( fread ( &x, sizeof ( x ), 1, txt ))
        {
            //printf("Dish Price : %d",x.code);
            if((id==x.code))
            {
                gotoxy(gg,10);printf("YOUR OLD RECORD WAS AS:");
                gotoxy(gg,11);printf("Dish Name : ");
                gotoxy(91,11);puts(x.dish);
                gotoxy(gg,12);printf("Dish Price : %d",x.price);
                //gotoxy(86,12);printf("%d",x.price);
                gotoxy(gg,13);printf("Dish Code : %d",x.code);
                //gotoxy(86,13);printf("%d",x.code);
                gotoxy(gg,14);printf("Item : ");
                gotoxy(91,14);puts(x.item);
               gotoxy(gg,15); printf("WHAT WOULD YOU LIKE TO EDIT..");

                gotoxy(gg,16);printf("1. Dish Name. ");
                gotoxy(gg,17);printf("2. Dish Price. ");
                gotoxy(gg,18);printf("3. Dish Code. ");
                gotoxy(gg,19);printf("4. item. ");
                gotoxy(gg,20);printf("5. Back. ");
                do
                {

                    gotoxy(gg,21);printf("ENTER YOUR CHOICE:");
                    fflush(stdin);
                    scanf("%d",&a);
                    fflush(stdin);

                    switch(a)
                    {
                    case 1:
                        gotoxy(gg,22);printf("Enter New Data. ");
                        gotoxy(gg,23);printf("Enter Dish Name : ");
                        gets(x.dish);
                        break;
                    case 2:
                        gotoxy(gg,22);printf("Enter New Data. ");
                        gotoxy(gg,23);printf("Enter Dish Price : ");
                        scanf("%d",&x.price);
                        break;
                    case 3:
                        gotoxy(gg,22);printf("Enter New Data. ");
                        gotoxy(gg,23);printf("Enter Dish Code : ");
                        scanf("%d",&x.code);
                        break;
                    case 4:
                        gotoxy(gg,22);printf("Enter New Data. ");
                        gotoxy(gg,23);printf("Enter Item : ");
                        gets(x.item);
                        break;
                    case 5:
                       goto p3;
                        break;
                    }



               }
               while(a<1||a>6);

                fseek(txt,-sizeof(x),SEEK_CUR);

                fwrite(&x,sizeof(x),1,txt);

                fseek(txt,-sizeof(x),SEEK_CUR);

                fread(&x,sizeof(x),1,txt);

                choice=5;

                break;


        }
    }
    if(choice == 5){
        goto p3;
    }
}
else if(a == 5){

    clearWindow_1();
    main();
}
}






