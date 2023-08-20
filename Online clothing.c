#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void mens_wear();
void womens_wear();
void children_wear();
void apparels();
void generate_bill();  
void addtoCart(char item[],int qty,float price);

//bill
int i=0;
char items[50][100];
int qty[50];
float rate[50];
float price[50];
//menswear
//formal shirts
char shirt1[]=         "Park avenue                          ";
char shirt2[]=         "Van heusen                           ";
char shirt3[]=         "Arrow                                ";
char shirt4[]=         "Peter england                        ";
//suits
char suit1[]=          "Manq black suit                      ";
char suit2[]=          "Louis philippe blue suit             ";
char suit3[]=          "Linyixun red suit                    ";
char suit4[]=          "Allen solly yellow suit              ";
//sweater
char sweater1[]=       "Alanjones blue sweater               ";
char sweater2[]=       "Denimholic grey sweater              ";
char sweater3[]=       "Almo red sweater                     ";
char sweater4[]=       "aarbe yellow sweater                 ";
//jacket
char jacket1[]=        "BenMartin black jacket               ";
char jacket2[]=        "Voxati green jacket                  ";
char jacket3[]=        "Venustas red jacket                  ";
char jacket4[]=        "Columbia grey jacket                 ";
//womenswear
//kurta
char kurta1[]=         "Gosriki blue kurta                   ";
char kurta2[]=         "Biba white kurta                     ";
char kurta3[]=         "Amayra black kurta                   ";
char kurta4[]=         "Siril green kurta                    ";
//saree
char Saree1[]=         "Jaanvi Gold saree                    ";
char Saree2[]=         "Winza violet saree                   ";
char Saree3[]=         "Shasmi black saree                   ";
char Saree4[]=         "Ranika red saree                     ";
//tops
char top1[]=           "Red slim fit top                     ";
char top2[]=           "Yellow sleeveless top                ";
char top3[]=           "Blue fit top                         ";
char top4[]=           "Black sleeveless top                 ";
//gowns
char gown1[]=          "Paltani pink gown                    ";
char gown2[]=          "Red up&down dress                    ";
char gown3[]=          "Black length dress                   ";
char gown4[]=          "Glare neck short dress               ";

//childrenwear
//pyjama
char pyjama1[]=        "Paltani pink gown                    ";
char pyjama2[]=        "Red up&down dress                    ";
char pyjama3[]=        "Black length dress                   ";
char pyjama4[]=        "Glare neck short dress               ";
//tshirt
char tshirt1[]=        "Chromozome kids black tees           ";
char tshirt2[]=        "Allensolly Junior red tshirt         ";
char tshirt3[]=        "T2F Yello tees                       ";
char tshirt4[]=        "Puma junior grey shirt               ";
//kidsjacket
char kidsjacket1[]=    "Addidas kids jacket                  ";
char kidsjacket2[]=    "Puma girls red tees                  ";
char kidsjacket3[]=    "Puma unisex white jacket             ";
char kidsjacket4[]=    "Nike small white tees                ";
char ethnic1[]=        "Aastha satin lehenga                 ";
char ethnic2[]=        "Fashiondream green ethnic wear       ";
char ethnic3[]=        "Baby girls net lehenga               ";
char ethnic4[]=        "Arshiafashion girls dhote set        ";

//apparels
char watch1[]=         "Fossil silver watch                  ";
char watch2[]=         "Titan couples watch                  ";
char watch3[]=         "Fatrack analog watch                 ";
char watch4[]=         "Timex womens watch                   ";
//perfumes
char perfume1[]=       "Bella vita organic perfume           ";
char perfume2[]=       "Park avenue for men                  ";
char perfume3[]=       "The man company Black perfume        ";
char perfume4[]=       "SKINN womens perfume                 ";
//wallets
char wallet1[]=        "Wildhorn Blue wallet                 ";
char wallet2[]=        "Otto red wallet                      ";
char wallet3[]=        "Rogue green wallet                   ";
char wallet4[]=        "Napa brown wallet                    ";
//bags
char bag1[]=           "Aqva canvas handbag                  ";
char bag2[]=           "Baggit leather handbag               ";
char bag3[]=           "Lavie black handbag                  ";
char bag4[]=           "Fostelo pink handbag                 ";





int main()
{
   

int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="";
    char pass[10]="pass";
    
    printf("\n  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb LOGIN \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  ");
    printf(" \n                        USERNAME:-");
	scanf("%s", &uname); 
	printf(" \n                        PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}

    printf("\n \n Hello %s, Welcome to our KN Online Shopping.\n",uname);

printf("\n\n\n\t\t\t\tPress any key to continue...");
	getch();//holds the screen

system("cls");
menu();
}
void menu()	
  { int choice;
	
//initiate bill generation structure here

	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Mens wear");
	printf("\n\t\tEnter [2] Womens wear");
	printf("\n\t\tEnter [3] Children wear");
	printf("\n\t\tEnter [4] Apparels");
	printf("\n\t\tEnter [5] Generate bill");
    printf("\n\n\t\tEnter your choice[1-4]");
	scanf("\t%d", &choice);

system("cls");
	
switch(choice)	
	{
		case 1:
			mens_wear();
			break;
	    case 2:
		    womens_wear();
			break;
		case 3:
		    children_wear();
			break;
		case 4:
		    apparels();
			break;
		case 5:
			generate_bill();
	}  

}
	void mens_wear()

	{    
		int cho1,cho2,cho3,cho4,cho5,total;


   L7: printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] FORMAL SHIRTS");
	printf("\n\t\tEnter [2] SUITS");
	printf("\n\t\tEnter [3] SWEATERS");
	printf("\n\t\tEnter [4] JACKETS");
	printf("\n\t\tEnter [5] MAIN MENU");
	printf("\n\n\t\tEnter your choice[1-5]");
    scanf("%d",&cho1);

system("cls");

L1:if(cho1==1)
{
    printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Park avenue");
	printf("\n\t\tEnter [2] Van heusen");
	printf("\n\t\tEnter [3] Arrow");
	printf("\n\t\tEnter [4] Peter england");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
    scanf("%d",&cho2);

if(cho2==1)//park avenue
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*200);
	addtoCart(shirt1,total,total*200);

}
if(cho2==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*450);
	addtoCart(shirt2,total,total*450);
}
if(cho2==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*265);
	addtoCart(shirt3,total,total*265);
}
if(cho2==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	
    printf("\nTotal price=%d",total*310);
	addtoCart(shirt4,total,total*310);
}
if(cho2==5)
{
	system("cls");
	goto L7;
	
}
goto L1;
system("cls");
}
L2:if(cho1==2)
{
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1]  Manq black suit");
	printf("\n\t\tEnter [2]  Louis philippe blue suit");
	printf("\n\t\tEnter [3]  Linyixun red suit");
	printf("\n\t\tEnter [4]  Allen solly yellow suit");
	printf("\n\t\tEnter [5]  Back");
    printf("\n\n\t\tEnter your choice[1-5]");
    scanf("%d",&cho3);

if(cho3==1)
{
   printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*1500);
	addtoCart(suit1,total,total*1500);

}
if(cho3==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*2000);
	addtoCart(suit2,total,total*2000);
}
if(cho3==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*2300);
	addtoCart(suit3,total,total*2300);
}
if(cho3==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*3000);
	addtoCart(suit4,total,total*3000);
}
if(cho3==5)
{
	system("cls");
	goto L7;
}
goto L2;
}
L3: if(cho1==3)
{
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1]  Alanjones blue sweater");
	printf("\n\t\tEnter [2]  Denimholic grey sweater");
	printf("\n\t\tEnter [3]  Almo red sweater");
	printf("\n\t\tEnter [4]  aarbe yellow sweater");
	printf("\n\t\tEnter [5]  Back");
    printf("\n\n\t\tEnter your choice[1-5]");
    scanf("\t%d",&cho4);
if(cho4==1)
{
   printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*670);
	addtoCart(sweater1,total,total*670);
	
}
if(cho4==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*780);
	addtoCart(sweater2,total,total*780);
}
if(cho4==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*800);
	addtoCart(sweater3,total,total*800);
}
if(cho4==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*530);
	addtoCart(sweater4,total,total*530);
}
if(cho4==5)
{
	system("cls");
	goto L7;
}
goto L3;
}
L4: if(cho1==4)
{
	printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1]  BenMartin black jacket");
	printf("\n\t\tEnter [2]  Voxati green jacket");
	printf("\n\t\tEnter [3]  Venustas red jacket");
	printf("\n\t\tEnter [4]  Columbia grey jacket");
	printf("\n\t\tEnter [5]  Back");
    printf("\n\n\t\tEnter your choice[1-5]");
    scanf("\t%d",&cho5);

if(cho5==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*540);
	addtoCart(jacket1,total,total*540);
}
if(cho5==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*870);
	addtoCart(jacket2,total,total*870);
}
if(cho5==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*450);
	addtoCart(jacket3,total,total*450);
}
if(cho5==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total);

	printf("\nTotal price=%d",total*500);
	addtoCart(jacket4,total,total*500);
}
if(cho5==5)
{
	system("cls");
	goto L7;
}
goto L4;
}
if(cho1==5)
{
	menu();
}
}
void womens_wear()
{

	int choice1,chow1,chow2,chow3,chow4,total1;

    L8: printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Kurta");
	printf("\n\t\tEnter [2] Saree");
	printf("\n\t\tEnter [3] Top wear");
	printf("\n\t\tEnter [4] Party wear");
	printf("\n\t\tEnter [5] MAIN MENU");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &choice1);

system("cls");

L9: if(choice1==1)
{
    printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Gosriki blue kurta");
	printf("\n\t\tEnter [2] Biba white kurta");
	printf("\n\t\tEnter [3] Amayra black kurta");
	printf("\n\t\tEnter [4] Siril green kurta");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chow1);

if(chow1==1)
{
    printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*600);
	addtoCart(kurta1,total1,total1*600);
}
if(chow1==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*680);
	addtoCart(kurta2,total1,total1*680);
}
if(chow1==3)
{
    printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*620);
	addtoCart(kurta3,total1,total1*620);
	}
if(chow1==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*720);
	addtoCart(kurta4,total1,total1*600);
}
if(chow1==5)
{
	system("cls");
	goto L8;
}
goto L9;
system("cls");
}
L10: if(choice1==2)
{
    printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Jaanvi Gold saree");
	printf("\n\t\tEnter [2] Winza violet saree");
	printf("\n\t\tEnter [3] Shasmi black saree");
	printf("\n\t\tEnter [4] Ranika red saree");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chow2);

if(chow2==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*784);
	addtoCart(Saree1,total1,total1*784);
}
if(chow2==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*890);
	addtoCart(Saree2,total1,total1*890);
}
if(chow2==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*740);
	addtoCart(Saree3,total1,total1*740);
}
if(chow2==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*765);
	addtoCart(Saree4,total1,total1*765);
}
if(chow2==5)
{
	system("cls");
	goto L8;
}
goto L10;
}
L11: if(choice1==3)
{
    printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Red slim fit top");
	printf("\n\t\tEnter [2] Yellow sleeveless top");
	printf("\n\t\tEnter [3] Blue fit top");
	printf("\n\t\tEnter [4] Black sleeveless top");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chow3);

if(chow3==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*950);
	addtoCart(top1,total1,total1*950);
}
if(chow3==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*670);
	addtoCart(top2,total1,total1*670);
}
if(chow3==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*1200);
	addtoCart(top3,total1,total1*1200);
}
if(chow3==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*1300);
	addtoCart(top4,total1,total1*1300);
}
if(chow3==5)
{
	system("cls");
	goto L8;
}
goto L11;
system("cls");
}
L12: if(choice1==4)
{
    printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Paltani pink gown");
	printf("\n\t\tEnter [2] Red up&down dress");
	printf("\n\t\tEnter [3] Black length dress");
	printf("\n\t\tEnter [4] Glare neck short dress");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chow4);
if(chow4==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*450);
	addtoCart(gown1,total1,total1*450);
}
if(chow4==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*768);
	addtoCart(gown2,total1,total1*768);
}
if(chow4==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*456);
	addtoCart(gown3,total1,total1*456);
}
if(chow4==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total1);

	printf("\nTotal price=%d",total1*650);
	addtoCart(gown4,total1,total1*650);
}
if(chow4==5)
{
	system("cls");
	goto L8;
}
goto L12;
}
if(choice1==5)
{
   menu();
}
}
void children_wear()
{
    int chok1,chok2,chok3,chok4,choice2,total2;

    L13: printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Bois&Girls Pyjamas");
	printf("\n\t\tEnter [2] Tops&Tshirts");
	printf("\n\t\tEnter [3] Kids sportswear");
	printf("\n\t\tEnter [4] Girls ethnicwear");
	printf("\n\t\tEnter [5] MAIN MENU");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &choice2);

system("cls");

L14: if(choice2==1)
{
    printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Boys red pyjama");
	printf("\n\t\tEnter [2] Boys white pyjama");
	printf("\n\t\tEnter [3] Girls flower pyjama");
	printf("\n\t\tEnter [4] Girls pink pyjama");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chok1);
if(chok1==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*760);
	addtoCart(pyjama1,total2,total2*760);
}
if(chok1==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*900);
	addtoCart(pyjama2,total2,total2*900);
}
if(chok1==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*560);
	addtoCart(pyjama3,total2,total2*560);
}
if(chok1==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*860);
	addtoCart(pyjama4,total2,total2*860);
}
if(chok1==5)
{
	system("cls");
	goto L13;
}
goto L14;
}
L15: if(choice2==2)
{
	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Chromozome kids black tees");
	printf("\n\t\tEnter [2] Allensolly Junior red tshirt");
	printf("\n\t\tEnter [3] T2F Yello tees");
	printf("\n\t\tEnter [4] Puma junior grey shirt");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chok2);
if(chok2==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*540);
	addtoCart(tshirt1,total2,total2*540);
}
if(chok2==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*760);
	addtoCart(tshirt2,total2,total2*760);
}
if(chok2==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*650);
	addtoCart(tshirt3,total2,total2*650);
}
if(chok2==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*860);
	addtoCart(tshirt4,total2,total2*860);
}
if(chok2==5)
{
	system("cls");
	goto L13;
}
goto L15;
}
L16: if(choice2==3)
{
	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Addidas kids jacket");
	printf("\n\t\tEnter [2] Puma girls red tees");
	printf("\n\t\tEnter [3] Puma unisex white jacket");
	printf("\n\t\tEnter [4] Nike small white tees");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chok3);
if(chok3==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*1200);
	addtoCart(kidsjacket1,total2,total2*1200);
}
if(chok3==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*761);
	addtoCart(kidsjacket2,total2,total2*761);
}
if(chok3==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*860);
	addtoCart(kidsjacket3,total2,total2*860);
}
if(chok3==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*456);
	addtoCart(kidsjacket4,total2,total2*456);
}
if(chok3==5)
{
	system("cls");
	goto L13;
}
goto L16;
}
L17: if(choice2==4)
{
	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Aastha satin lehenga");
	printf("\n\t\tEnter [2] Fashiondream green ethnic wear");
	printf("\n\t\tEnter [3] Baby girls net lehenga");
	printf("\n\t\tEnter [4] Arshiafashion girls dhote set");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &chok4);
if(chok4==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*650);
	addtoCart(ethnic1,total2,total2*650);
}
if(chok4==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*760);
	addtoCart(ethnic2,total2,total2*760);
}
if(chok4==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*980);
	addtoCart(ethnic3,total2,total2*980);
}
if(chok4==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total2);

	printf("\nTotal price=%d",total2*870);
	addtoCart(ethnic4,total2,total2*870);
}
if(chok4==5)
{
	system("cls");
	goto L13;
}
goto L17;
}
if(choice2==5)
{
   menu();
}
}
void apparels()
{ int choa1,total3,choice3;

   L18: printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Watches");
	printf("\n\t\tEnter [2] Perfumes");
	printf("\n\t\tEnter [3] Wallets");
	printf("\n\t\tEnter [4] Womens handbag");
	printf("\n\t\tEnter [5] MAIN MENU");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &choice3);

system("cls");
L19: if(choice3==1)
{
	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Fossil silver watch");
	printf("\n\t\tEnter [2] Titan couples watch");
	printf("\n\t\tEnter [3] Fatrack analog watch");
	printf("\n\t\tEnter [4] Timex womens watch");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &choa1);

if(choa1==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*1650);
	addtoCart(watch1,total3,total3*1650);
}
if(choa1==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*2760);
	addtoCart(watch2,total3,total3*2760);
}
if(choa1==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*4500);
	addtoCart(watch3,total3,total3*4500);
}
if(choa1==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*3450);
	addtoCart(watch4,total3,total3*3450);
}
if(choa1==5)
{
	system("cls");
	goto L18;
}
goto L19;
}
L20: if(choice3==2)
{
	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Bella vita organic perfume");
	printf("\n\t\tEnter [2] Park avenue for men");
	printf("\n\t\tEnter [3] The man company Black perfume");
	printf("\n\t\tEnter [4] SKINN womens perfume");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &choa1);

if(choa1==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*705);
	addtoCart(perfume1,total3,total3*705);
}
if(choa1==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*1200);
	addtoCart(perfume2,total3,total3*1200);
}
if(choa1==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);
	printf("\nTotal price=%d",total3*980);
	addtoCart(perfume3,total3,total3*980);
}
if(choa1==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);
	printf("\nTotal price=%d",total3*540);
	addtoCart(perfume4,total3,total3*540);
}
if(choa1==5)
{
	system("cls");
	goto L18;
}
goto L20;
}
L21: if(choice3==3)
{
	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Wildhorn Blue wallet");
	printf("\n\t\tEnter [2] Otto red wallet");
	printf("\n\t\tEnter [3] Rogue green wallet");
	printf("\n\t\tEnter [4] Napa brown wallet");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &choa1);
if(choa1==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*650);
	addtoCart(wallet1,total3,total3*650);
}
if(choa1==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*470);
	addtoCart(wallet2,total3,total3*470);
}
if(choa1==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*450);
	addtoCart(wallet3,total3,total3*450);
}
if(choa1==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*345);
	addtoCart(wallet4,total3,total3*345);
}
if(choa1==5)
{
	system("cls");
	goto L18;
}
goto L21;
}
L22: if(choice3==4)
{
	 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tEnter [1] Aqva canvas handbag");
	printf("\n\t\tEnter [2] Baggit leather handbag");
	printf("\n\t\tEnter [3] Lavie black handbag");
	printf("\n\t\tEnter [4] Fostelo pink handbag");
	printf("\n\t\tEnter [5] Back");
    printf("\n\n\t\tEnter your choice[1-5]");
	scanf("\t%d", &choa1);
if(choa1==1)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*1500);
	addtoCart(bag1,total3,total3*1500);
}
if(choa1==2)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*954);
	addtoCart(bag2,total3,total3*954);
}
if(choa1==3)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*2100);
	addtoCart(bag3,total3,total3*2100);
}
if(choa1==4)
{
	printf("\nEnter quantity-");
	scanf("%d",&total3);

	printf("\nTotal price=%d",total3*750);
	addtoCart(bag4,total3,total3*750);
}
if(choa1==5)
{
	system("cls");
	goto L18;
}
goto L22;
}
if(choice3==5)
{
	menu();
}

}
void addtoCart(char item[],int qty1,float totalPrice){

		 strcpy(items[i],item);
	 qty[i]=qty1;
	 rate[i]=totalPrice/qty1;
	 price[i]=totalPrice;
	 i++;
}
void generate_bill()
{
	system("cls");
 printf("\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb KN CLOTHING STORE \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
 printf("                                                                                         \n");
 printf(__TIMESTAMP__);
printf("\n--------------------------------------------------------------------------------------------------\n");
    printf("S.no   \tProduct                            \tQty   \t\t\tRate        \t\tAmount\n");
      int noOfItems=i;	
	   float total=0;
       for(int j=0;j<noOfItems;j++)
      
       {
        
        printf("%d \t%s \t%d   \t\t\t%.2f   \t\t%.2f  \n",j+1,items[j],qty[j],rate[j], price[j]);
		total = total +price[j];

       }
	printf("\nGross Amount in Rs.%.2f",total);
	printf("\ninclusive of all taxes\n");
printf("----------------------------------------------------------------------------------------------------\n");
	printf("\nThank you for visting our Store. Have a good day!");

}