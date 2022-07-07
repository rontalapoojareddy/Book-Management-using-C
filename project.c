#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//structure definition
struct res_list
{
 char b_name[30];
 char price[5];
 char a_name[50];
 char reviews[50];
 char pages[50];
};
//function prototype
void read(void);
void sort(void);
void search(void);
void print(void);
void sort_name();
void sort_price();
void sort_aname();
void sort_reviews();
void sort_pages();
void search_name();
void search_price();
void search_aname();
void search_reviews();
void search_pages();
//global variables
char temp[50],sn[50],sag[50],sa[30],sb[30],sd[30],st[30],sbs[50],sds[50];
int ch,i,j,p1,x,n;
struct res_list *pas,*ptr;
//function definitions
void read(void)
{
printf("\n enter details of books");
for(i=0;i<n;i++)
{
 printf("\n enter details of book %d",i+1);
 printf("\n enter the name:");
 scanf("%s",pas->b_name);
 printf("\n enter the price:");
 scanf("%s",pas->price);
 printf("\n enter the author name:");
 scanf("%s",pas->a_name);
 printf("\n enter the reviews :");
 scanf("%s",pas->reviews);
 printf("\n enter the no of pages :");
 scanf("%s",pas->pages);
 pas++;
}
}
void sort()
{
printf("\n MENU FOR SORTING:\n 1.name WISE\n 2.price WISE\n 3.author name WISE\n 4.reviews WISE\n 5.no of pages WISE\n");
printf("\n enter option:");
scanf("%d",&ch);
//switch Case
switch(ch)
{
 case 1:sort_name();//function call
 break;
 case 2:sort_price();//function call
 break;
 case 3:sort_aname();//function call
 break;
 case 4:sort_reviews();//function call
 break;
 case 5:sort_pages();//function call
 break;
 default: printf("\n sorry you entered wrong option try again");
}
}
void sort_name()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->b_name);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==1)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
}
}
void sort_price()
{
 pas=ptr;
 char str[3][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->price);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==1)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
}
void sort_aname()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->a_name);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
}
void sort_reviews()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<n;i++)
 {
 strcpy(str[i],pas->reviews);
 pas++;
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
 
}
void sort_pages()
{
 pas=ptr;
 char str[10][50];
 int y;
 for(i=0;i<=n;i++)
 {
 strcpy(str[i],pas->pages);
 pas++;
 }
 for(i=0;i<=n;i++)
 {
 for(j=i+1;j<=n;j++)
 {
 y=strcmp(str[i],str[j]);
 if(y==0)
 {
 strcpy(temp,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],temp);
 }
 }
 }
 printf("\n sorted list:\n");
 for(i=0;i<n;i++)
 {
 puts(str[i]);
 }
}
void search()
{
 printf("\n MENU FOR SEARCHING:\n 1.name WISE\n 2.price WISE\n 3.author name WISE\n 4.reviews WISE\n 5.no of pages WISE");
 printf("\n enter option:");
 scanf("%d",&ch);
 //switch case
 switch(ch)
 {
 case 1:search_name();//function call
 break;
 case 2:search_price();//function call
 break;
 case 3:search_aname;//function call
 break;
 case 4:search_reviews();//function call
 break;
 case 5:search_pages();//function call
 break;
 default:printf("\n sorry you entered wrong option try again");
 }
}
void search_name()
{
 int cv=0;
 pas=ptr;
 printf("\n enter book name:");
 scanf("%s",sn);
 for(i=0;i<n;i++)
 {
 x=strcmp(sn,pas->b_name);
 if(x==0)
 {
 printf("\n name: %s",pas->b_name);
 printf("\n price: %s",pas->price);
 printf("\n author name: %s",pas->a_name);
 printf("\n reviews : %s",pas->reviews);
 printf("\n no of pages: %s",pas->pages);
 cv++;
 }
 else
 {
 printf("\n\n the book with above detais is not found \n ");
}
 pas++;
 }
}
void search_price()
{
 int cv=0;
 pas=ptr;
 printf("\n enter a price:");
 scanf("%s",sag);
 for(i=0;i<n;i++)
 {
 x=strcmp(sag,pas->price);
 if(x==0)
 {
 printf("\n name: %s",pas->b_name);
 printf("\n price: %s",pas->price);
 printf("\n author name: %s",pas->a_name);
 printf("\n reviews : %s",pas->reviews);
 printf("\n no of pages: %s",pas->pages);
 cv++;
 }
 else
 {
 printf("\n\n the book with above detais is not found \n ");
}
 pas++;
 }
}
void search_aname()
{
 int cv=0;
 pas=ptr;
 printf("\n enter the author name:");
 scanf("%s",sa);
 for(i=0;i<n;i++)
 {
 x=strcmp(sa,pas->a_name);
 if(x==0)
 {
 printf("\n name: %s",pas->b_name);
 printf("\n price: %s",pas->price);
 printf("\n author name: %s",pas->a_name);
 printf("\n reviews : %s",pas->reviews);
 printf("\n pages: %s",pas->pages);
 cv++;
 }
 else
 {
 printf("\n\n the book with above detais is not found \n ");
}
 pas++;
 }
 }
 void search_reviews()
 {
 int cv=0;
 pas=ptr;
 printf("\n enter the reviews:");
 scanf("%s",sb);
 for(i=0;i<n;i++)
 {
 x=strcmp(sb,pas->reviews);
 if(x==0)
 {
 printf("\n name: %s",pas->b_name);
 printf("\n price: %s",pas->price);
 printf("\n author name: %s",pas->a_name);
 printf("\n reviews : %s",pas->reviews);
 printf("\n no of pages: %s",pas->pages);
 cv++;
 }
 else
 {
 printf("\n\n the book with above detais is not found \n ");
}
 pas++;
 }
 }
 void search_pages()
 {
 int cv=0;
 pas=ptr;
 printf("\n enter the no of pages :");
 scanf("%s",sd);
 for(i=0;i<n;i++)
 {
 x=strcmp(sd,pas->pages);
 if(x==0)
 {
 printf("\n name: %s",pas->b_name);
 printf("\n price: %s",pas->price);
 printf("\n author name: %s",pas->a_name);
 printf("\n reviews : %s",pas->reviews);
 printf("\n no of pages: %s",pas->pages);
 cv++;
 }
 else
 {
 printf("\n\n the book with above detais is not found \n ");
}
 pas++;
 }
 }
 void print()
 {
 pas=ptr;
 for(i=0;i<n;i++)
 {
 printf("\n Details of books %d are:",i+1);
 printf("\n name: %s",pas->b_name);
 printf("\n price: %s",pas->price);
 printf("\n author name: %s",pas->a_name);
 printf("\n reviews: %s",pas->reviews);
 printf("\n no of pages: %s",pas->pages);
  pas++;
 }
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include "reservation.h"
//global variables
char a;
//main starts here
int main()
{
 //menu repetition
 printf("\n enter the no. of book detais you want to store:");
 scanf("%d",&n);
 ptr=(struct res_list *)malloc(n*sizeof(struct res_list));
 pas=ptr;
 do
 {
system("cls");
 printf("\n MENU:\n 1.READ DATA\n 2.SORTING\n 3.SEARCHING\n 4.PRINT DATA");
 printf("\n enter option:");
 scanf("%d",&ch);
 //switch case
 switch(ch)
 {
 case 1:read();//function call
 break;
 case 2:sort();//function call
 break;
 case 3:search();//function call
 break;
 case 4:print();//function call
 break;
 }
 printf("\n enter y or Y to continue,enter n or N to exit:");
 scanf(" %c",&a);
 }
 while(a=='y'||a=='Y'); 
}