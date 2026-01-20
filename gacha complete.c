#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct itemOne{
	char name[20];
	int id;
	int amt;
}it1[22];
 
struct Student{
	char name[20];
    struct itemOne itone[22];
};
	struct Student st[4];
//	struct Student st;
int menuSelect();
int menu();
int input();
void gachaA();
void gachaB();
void gacha();
void gachaC();
void gachaD();
void gachaF();
int select();
int itA();
int itB();
void showinA();
void showinB();

void data() {       //Joe
strcpy (it1[0].name,"Ex.Otto"); //Ex
it1[0].id = 1000;

strcpy (it1[1].name,"Ex.Mary"); //Ex
it1[1].id = 2000;

strcpy (it1[2].name,"Kira"); //Epic
it1[2].id = 2100;

strcpy (it1[3].name,"Anna"); //Epic
it1[3].id = 2200;

strcpy (it1[4].name,"Rose"); //Epic
it1[4].id = 2300;

strcpy (it1[5].name,"Eve"); //Epic
it1[4].id = 2400;

strcpy (it1[6].name,"Lena"); //Rare
it1[6].id = 2500;

strcpy (it1[7].name,"Iris"); //Rare
it1[7].id = 2600;

strcpy (it1[8].name,"Vivian"); //Rare
it1[8].id = 2700;

strcpy (it1[9].name,"Sharon"); //Rare
it1[9].id = 2800;

strcpy (it1[10].name,"Jane"); //Rare
it1[10].id = 2900;

strcpy (it1[11].name,"Cara"); //Rare
it1[11].id = 3000;

strcpy (it1[12].name,"Jade"); //Rare
it1[12].id = 3100;

strcpy (it1[13].name,"Lily"); //Rare
it1[13].id = 3200;

strcpy (it1[14].name,"Helena"); //Common
it1[14].id = 3300;

strcpy (it1[15].name,"Liona"); //Common
it1[15].id = 3400;

strcpy (it1[16].name,"Ronda"); //Common
it1[16].id = 3500;

strcpy (it1[17].name,"Kate"); //Common
it1[17].id = 3600;

strcpy (it1[18].name,"Julia"); //Common
it1[18].id = 3700;

strcpy (it1[19].name,"Ruby"); //Common
it1[19].id = 3800;

strcpy (it1[20].name,"Bella"); //Common
it1[20].id = 3900;

strcpy (it1[21].name,"Lucy"); //Common
it1[21].id = 4000;


}
int main(){
	int ch = menu();
	do{ 
		switch(ch){
			case 1 : input(); break;
			case 2 : menuSelect(); break;
			case 3 : break;
			default: printf("Error!!!");
		}
		ch = menu();
	}while(ch!=5);
	return 0;
}

int menu(){
	int ch;
 printf("\nPls select Menu");
 printf("\n1.Input Data");
 printf("\n2.Select ID");
 printf("\n3.End\n");
 scanf("\n%d",&ch);
 return ch;
}
int menuSelect(){
	int c;
 printf("\nPls select Menu");
 printf("\n1.%s",st[1].name);
 printf("\n2.%s",st[2].name);
 printf("\n3.End\n");
 scanf("\n%d",&c);
 
	if(c==1)
	 showinA();
	else if(c==2)
	 showinB(); 
	else
	 main();
}

int input(){
	int i;
	for(i=1;i<=2;i++){
	printf("Enter Name : ");
	scanf("%s",st[i].name);
	}
}	

void showinA(){
 int i=1;
 int k;
 	printf("\nName : %s",st[i].name);	
    printf("\nPls select Menu");
    printf("\n1.Show Item");
    printf("\n2.Gacha");
    printf("\n3.Gacha A");
    printf("\n4.Gacha B");
    printf("\n5.Logout\n");
    scanf("\n%d",&k);
    if (k==1)
     itA();
     else if(k==2)
     gacha();
     else if(k==3)
     gachaA();
     else if(k==4)
     gachaB();
	 }

void showinB(){
 int i=2;
int k;
 	printf("\nName : %s",st[i].name);	
    printf("\nPls select Menu");
    printf("\n1.Show Item");
    printf("\n2.Gacha");
    printf("\n3.Gacha A");
    printf("\n4.Gacha B");
    printf("\n5.Logout\n");
    scanf("\n%d",&k);
    if (k==1)
     itA();
     else if(k==2)
     gachaC();
     else if(k==3)
     gachaD();
     else if(k==4)
     gachaF();
}

void gacha(){
	data();
	int i=1;
	int n,k;
    for (k = 0; k < 5; k++) {
        n=rand()%57; 
        if(n>=0&&n<=3){
        st[i].itone[21].amt++;
		printf("\t%s",it1[21].name);
		}
        else if(n>=4&&n<=7){
        st[i].itone[20].amt++;
		printf("\t%s",it1[20].name);
		}
		else if(n>=8&&n<=11){
        st[i].itone[19].amt++;
		printf("\t%s",it1[19].name);
		}
		else if(n>=12&&n<=15){
        st[i].itone[18].amt++;
		printf("\t%s",it1[18].name);
		}
		else if(n>=16&&n<=19){
        st[i].itone[17].amt++;
		printf("\t%s",it1[17].name);
		}
		else if(n>=20&&n<=23){
        st[i].itone[16].amt++;
		printf("\t%s",it1[16].name);
		}
		else if(n>=24&&n<=27){
        st[i].itone[15].amt++;
		printf("\t%s",it1[15].name);
		}
		else if(n>=28&&n<=32){
        st[i].itone[14].amt++;
		printf("\t%s",it1[14].name);
		}
		else if(n>=33&&n<=35){
        st[i].itone[13].amt++;
		printf("\t%s",it1[13].name);
		}
		else if(n>=36&&n<=38){
        st[i].itone[12].amt++;
		printf("\t%s",it1[12].name);
		}
		else if(n>=39&&n<=41){
        st[i].itone[11].amt++;
		printf("\t%s",it1[11].name);
		}
		else if(n>=42&&n<=44){
        st[i].itone[10].amt++;
		printf("\t%s",it1[10].name);
		}
		else if(n>=45&&n<=47){
        st[i].itone[9].amt++;
		printf("\t%s",it1[9].name);
		}
		else if(n>=48&&n<=50){
        st[i].itone[8].amt++;
		printf("\t%s",it1[8].name);
		}
		else if(n>=51&&n<=53){
        st[i].itone[7].amt++;
		printf("\t%s",it1[7].name);
		}
		else if(n>=54&&n<=56){
        st[i].itone[6].amt++;
		printf("\t%s",it1[6].name);
		}
		else if(n==2){
        st[i].itone[5].amt++;
		printf("\t%s",it1[5].name);
		}
		else if(n==1){
        st[i].itone[4].amt++;
		printf("\t%s",it1[4].name);
		}
		else if(n==0){
        st[i].itone[3].amt++;
		printf("\t%s",it1[3].name);
		}
		else{
        st[i].itone[2].amt++;
		printf("\t%s",it1[2].name);
		}
    }
}
    

    void gachaA(){
    	data();
		int i=1;
	    int n,k;
	    for (k = 0; k < 5; k++) {
	        n=rand()%31; 
        if(n>=0&&n<=3){
        st[i].itone[21].amt++;
		printf("\t%s",it1[21].name);
		}
		else if(n>=4&&n<=7){
        st[i].itone[20].amt++;
		printf("\t%s",it1[20].name);
		}
		else if(n>=8&&n<=11){
        st[i].itone[19].amt++;
		printf("\t%s",it1[19].name);
		}
		else if(n>=12&&n<=15){
        st[i].itone[18].amt++;
		printf("\t%s",it1[18].name);
		}
		else if(n>=16&&n<=18){
        st[i].itone[13].amt++;
		printf("\t%s",it1[13].name);
		}
		else if(n>=19&&n<=21){
        st[i].itone[12].amt++;
		printf("\t%s",it1[12].name);
		}
		else if(n>=22&&n<=24){
        st[i].itone[11].amt++;
		printf("\t%s",it1[11].name);
		}
		else if(n>=25&&n<=27){
        st[i].itone[10].amt++;
		printf("\t%s",it1[10].name);
		}
		else if(n>=26&&n<=27){
        st[i].itone[5].amt++;
		printf("\t%s",it1[5].name);
		}
		else if(n>=28&&n<=29){
        st[i].itone[4].amt++;
		printf("\t%s",it1[16].name);
		}
		else{
        st[i].itone[1].amt++;
		printf("\t%s",it1[1].name);
		}
	    }
	}
	void gachaB(){
		data();
	    int i=1;
	    int n,k;
	    for (k = 0; k < 5; k++) {
	        n=rand()%31;
        if(n>=0&&n<=3){
        st[i].itone[17].amt++;
		printf("\t%s",it1[17].name);
		}
		else if(n>=4&&n<=7){
        st[i].itone[16].amt++;
		printf("\t%s",it1[16].name);
		}
		else if(n>=8&&n<=11){
        st[i].itone[15].amt++;
		printf("\t%s",it1[15].name);
		}
		else if(n>=12&&n<=15){
        st[i].itone[14].amt++;
		printf("\t%s",it1[14].name);
		}
		else if(n>=16&&n<=18){
        st[i].itone[9].amt++;
		printf("\t%s",it1[9].name);
		}
		else if(n>=19&&n<=21){
        st[i].itone[8].amt++;
		printf("\t%s",it1[8].name);
		}
		else if(n>=22&&n<=24){
        st[i].itone[7].amt++;
		printf("\t%s",it1[7].name);
		}
		else if(n>=25&&n<=27){
        st[i].itone[6].amt++;
		printf("\t%s",it1[6].name);
		}
		else if(n==28){
        st[i].itone[3].amt++;
		printf("\t%s",it1[3].name);
		}
		else if(n==29){
        st[i].itone[2].amt++;
		printf("\t%s",it1[2].name);
		}
		else{
        st[i].itone[0].amt++;
		printf("\t%s",it1[0].name);
		}
	        
    //   return r,e;
 }
}
void gachaC(){
	data();
	int i=2;
	int n,k;
    for (k = 0; k < 5; k++) {
        n=rand()%57; 
        if(n>=0&&n<=3){
        st[i].itone[21].amt++;
		printf("\t%s",it1[21].name);
		}
        else if(n>=4&&n<=7){
        st[i].itone[20].amt++;
		printf("\t%s",it1[20].name);
		}
		else if(n>=8&&n<=11){
        st[i].itone[19].amt++;
		printf("\t%s",it1[19].name);
		}
		else if(n>=12&&n<=15){
        st[i].itone[18].amt++;
		printf("\t%s",it1[18].name);
		}
		else if(n>=16&&n<=19){
        st[i].itone[17].amt++;
		printf("\t%s",it1[17].name);
		}
		else if(n>=20&&n<=23){
        st[i].itone[16].amt++;
		printf("\t%s",it1[16].name);
		}
		else if(n>=24&&n<=27){
        st[i].itone[15].amt++;
		printf("\t%s",it1[15].name);
		}
		else if(n>=28&&n<=32){
        st[i].itone[14].amt++;
		printf("\t%s",it1[14].name);
		}
		else if(n>=33&&n<=35){
        st[i].itone[13].amt++;
		printf("\t%s",it1[13].name);
		}
		else if(n>=36&&n<=38){
        st[i].itone[12].amt++;
		printf("\t%s",it1[12].name);
		}
		else if(n>=39&&n<=41){
        st[i].itone[11].amt++;
		printf("\t%s",it1[11].name);
		}
		else if(n>=42&&n<=44){
        st[i].itone[10].amt++;
		printf("\t%s",it1[10].name);
		}
		else if(n>=45&&n<=47){
        st[i].itone[9].amt++;
		printf("\t%s",it1[9].name);
		}
		else if(n>=48&&n<=50){
        st[i].itone[8].amt++;
		printf("\t%s",it1[8].name);
		}
		else if(n>=51&&n<=53){
        st[i].itone[7].amt++;
		printf("\t%s",it1[7].name);
		}
		else if(n>=54&&n<=56){
        st[i].itone[6].amt++;
		printf("\t%s",it1[6].name);
		}
		else if(n==2){
        st[i].itone[5].amt++;
		printf("\t%s",it1[5].name);
		}
		else if(n==1){
        st[i].itone[4].amt++;
		printf("\t%s",it1[4].name);
		}
		else if(n==0){
        st[i].itone[3].amt++;
		printf("\t%s",it1[3].name);
		}
		else{
        st[i].itone[2].amt++;
		printf("\t%s",it1[2].name);
		}
    }
}
    

    void gachaD(){
    	data();
		int i=2;
	    int n,k;
	    for (k = 0; k < 5; k++) {
	        n=rand()%31; 
        if(n>=0&&n<=3){
        st[i].itone[21].amt++;
		printf("\t%s",it1[21].name);
		}
		else if(n>=4&&n<=7){
        st[i].itone[20].amt++;
		printf("\t%s",it1[20].name);
		}
		else if(n>=8&&n<=11){
        st[i].itone[19].amt++;
		printf("\t%s",it1[19].name);
		}
		else if(n>=12&&n<=15){
        st[i].itone[18].amt++;
		printf("\t%s",it1[18].name);
		}
		else if(n>=16&&n<=18){
        st[i].itone[13].amt++;
		printf("\t%s",it1[13].name);
		}
		else if(n>=19&&n<=21){
        st[i].itone[12].amt++;
		printf("\t%s",it1[12].name);
		}
		else if(n>=22&&n<=24){
        st[i].itone[11].amt++;
		printf("\t%s",it1[11].name);
		}
		else if(n>=25&&n<=27){
        st[i].itone[10].amt++;
		printf("\t%s",it1[10].name);
		}
		else if(n>=26&&n<=27){
        st[i].itone[5].amt++;
		printf("\t%s",it1[5].name);
		}
		else if(n>=28&&n<=29){
        st[i].itone[4].amt++;
		printf("\t%s",it1[16].name);
		}
		else{
        st[i].itone[1].amt++;
		printf("\t%s",it1[1].name);
		}
	    }
	}
	void gachaF(){
		data();
	    int i=2;
	    int n,k;
	    for (k = 0; k < 5; k++) {
	        n=rand()%31;
        if(n>=0&&n<=3){
        st[i].itone[17].amt++;
		printf("\t%s",it1[17].name);
		}
		else if(n>=4&&n<=7){
        st[i].itone[16].amt++;
		printf("\t%s",it1[16].name);
		}
		else if(n>=8&&n<=11){
        st[i].itone[15].amt++;
		printf("\t%s",it1[15].name);
		}
		else if(n>=12&&n<=15){
        st[i].itone[14].amt++;
		printf("\t%s",it1[14].name);
		}
		else if(n>=16&&n<=18){
        st[i].itone[9].amt++;
		printf("\t%s",it1[9].name);
		}
		else if(n>=19&&n<=21){
        st[i].itone[8].amt++;
		printf("\t%s",it1[8].name);
		}
		else if(n>=22&&n<=24){
        st[i].itone[7].amt++;
		printf("\t%s",it1[7].name);
		}
		else if(n>=25&&n<=27){
        st[i].itone[6].amt++;
		printf("\t%s",it1[6].name);
		}
		else if(n==28){
        st[i].itone[3].amt++;
		printf("\t%s",it1[3].name);
		}
		else if(n==29){
        st[i].itone[2].amt++;
		printf("\t%s",it1[2].name);
		}
		else{
        st[i].itone[0].amt++;
		printf("\t%s",it1[0].name);
		}
	        
    //   return r,e;
 }
}

int itA(){
	data();//dont forget ***************
	int i = 1;
printf("\n%s : %d",it1[0].name,st[i].itone[0].amt);
printf("\n%s : %d",it1[1].name,st[i].itone[1].amt);
printf("\n%s : %d",it1[2].name,st[i].itone[2].amt);
printf("\n%s : %d",it1[3].name,st[i].itone[3].amt);
printf("\n%s : %d",it1[4].name,st[i].itone[4].amt);
printf("\n%s : %d",it1[5].name,st[i].itone[5].amt);
printf("\n%s : %d",it1[6].name,st[i].itone[6].amt);
printf("\n%s : %d",it1[7].name,st[i].itone[7].amt);
printf("\n%s : %d",it1[8].name,st[i].itone[8].amt);
printf("\n%s : %d",it1[9].name,st[i].itone[9].amt);
printf("\n%s : %d",it1[10].name,st[i].itone[10].amt);
printf("\n%s : %d",it1[11].name,st[i].itone[11].amt);
printf("\n%s : %d",it1[12].name,st[i].itone[12].amt);
printf("\n%s : %d",it1[13].name,st[i].itone[13].amt);
printf("\n%s : %d",it1[14].name,st[i].itone[14].amt);
printf("\n%s : %d",it1[15].name,st[i].itone[15].amt);
printf("\n%s : %d",it1[16].name,st[i].itone[16].amt);
printf("\n%s : %d",it1[17].name,st[i].itone[17].amt);
printf("\n%s : %d",it1[18].name,st[i].itone[18].amt);
printf("\n%s : %d",it1[19].name,st[i].itone[19].amt);
printf("\n%s : %d",it1[20].name,st[i].itone[20].amt);
printf("\n%s : %d",it1[21].name,st[i].itone[21].amt);
}

int itB(){
	data();//dont forget ***************
	int i = 2;
printf("\n%s : %d",it1[0].name,st[i].itone[0].amt);
printf("\n%s : %d",it1[1].name,st[i].itone[1].amt);
printf("\n%s : %d",it1[2].name,st[i].itone[2].amt);
printf("\n%s : %d",it1[3].name,st[i].itone[3].amt);
printf("\n%s : %d",it1[4].name,st[i].itone[4].amt);
printf("\n%s : %d",it1[5].name,st[i].itone[5].amt);
printf("\n%s : %d",it1[6].name,st[i].itone[6].amt);
printf("\n%s : %d",it1[7].name,st[i].itone[7].amt);
printf("\n%s : %d",it1[8].name,st[i].itone[8].amt);
printf("\n%s : %d",it1[9].name,st[i].itone[9].amt);
printf("\n%s : %d",it1[10].name,st[i].itone[10].amt);
printf("\n%s : %d",it1[11].name,st[i].itone[11].amt);
printf("\n%s : %d",it1[12].name,st[i].itone[12].amt);
printf("\n%s : %d",it1[13].name,st[i].itone[13].amt);
printf("\n%s : %d",it1[14].name,st[i].itone[14].amt);
printf("\n%s : %d",it1[15].name,st[i].itone[15].amt);
printf("\n%s : %d",it1[16].name,st[i].itone[16].amt);
printf("\n%s : %d",it1[17].name,st[i].itone[17].amt);
printf("\n%s : %d",it1[18].name,st[i].itone[18].amt);
printf("\n%s : %d",it1[19].name,st[i].itone[19].amt);
printf("\n%s : %d",it1[20].name,st[i].itone[20].amt);
printf("\n%s : %d",it1[21].name,st[i].itone[21].amt);
}


