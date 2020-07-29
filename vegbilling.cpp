#include<stdio.h>
#include<string.h>
#include<windows.h>
struct veg 
			{
				char vn[20];//name
				int vgwt;//weight
				int vgcost;//cost per kg	
			}v[20];
struct billpay
           {
           	char vegname[20];//name
           	int vegweight;//weight of the veg purchased
           	int vegunitp;//price per kg
           	int vegprice;//total price
           	
           }b[20];			
			int read(void);
			void sort(void);
			void search(void);
			void cal(void);
			void bill(void);
			char a,vname[10];
			int n,pin,m=0;
		int ch,i,j;
		main()
		{
			printf("\n WELCOME TO THE VEGETABLE STORE \n\n");
			do
			{
			
			printf("\n Enter  1.Entering the Info \t  2.SORTING \t  3.Stock Display \t  4.Cost calculation \t 5.Bill\n");		
			printf("\n Enter your option --   ");
			scanf("%d",&ch); 
			switch(ch)
			{
				case 1: read();//function call
				break;
				case 2: sort();//function call
				break;
				case 3:search();//function call
				break;
				case 4:cal();//function call
				break;
				case 5:bill();
				   Sleep(2000);//#include<windows.h>..time gap
				   	exit(0);
				    break;
				default:printf("\n Sorry you entered wrong option...Re-check it");
			}
			
			printf("\n Enter y or Y to MAIN MENU --    ");
			scanf(" %c",&a);
		       
		     }
			while(a=='y'||a=='Y');
		}
	       int read(void)
			{	
			printf("Enter the PIN :  ");
			scanf("%d",&pin);
			if(pin==23123)
			{
				printf("\n Welcome \n");
			printf("Enter the number of entries --    ");
			scanf("%d",&n);
			m=n;
			printf("Enter stock info\n");
			for(i=0;i<n;i++)
			{
				printf(" %d ...  Name of the vegetable : ",i+1);
				scanf("%s",v[i].vn);
				printf("Available weight of the %s:",v[i].vn);
				scanf("%d",&v[i].vgwt);
				printf("Cost of %s for 1 kg:",v[i].vn);
				scanf("%d",&v[i].vgcost);
			}
			}
			else
			printf("Invalid pin number -- You cannot enter the data");
			return m;
			}
			void sort(void)
			{
			printf("\n Enter the name of the vegetable :  ");
			scanf("%s",vname);
			for(i=0;i<m;i++)
			{
				
				char x=strcmp(vname,v[i].vn);
				if(x==0)
				{
				printf("Vegetable Name \t Qunatity \t Cost\n");	
		        printf("%s \t\t %d \t\t %d",v[i].vn,v[i].vgwt,v[i].vgcost);	  	
				}
			}
		    }
		   		void search()
		{
			printf("     \nVegetable Name \t Qunatity \t Cost\n");
			for(i=0;i<m;i++)
			{
				printf("\n%d - ",i+1 ); 
				printf("%s \t\t %d \t\t %d",v[i].vn,v[i].vgwt,v[i].vgcost);
			}
		}  
		   void cal()
		{
			printf("Vegetable Name \t Qunatity \t Cost");
		for(i=0;i<m;i++)
			{
				printf("\n%d - ",i+1 ); 
				printf("%s \t %d \t %d",v[i].vn,v[i].vgwt,v[i].vgcost);
		     }
			int num,t;
            float wt,c;
			printf("\n Enter the vegetable number : ");
			scanf("%d",&num);
		    printf("\n Enter the weight required :   ");
			scanf("%f",&wt);
			t=v[num-1].vgcost;
			c=(wt)*(t);
			printf("Cost of %dkg of %s id : %2f",num,v[num-1].vn,c);
		}
		
void bill()
  { 

	int items,number,weight,r1,r2,k,sum=0;
	if(items<=m && m!=0)
	{
  printf("Enter the number of vegetables purchased :  ");
	scanf("%d",&items);
    for(k=0;k<items;k++)
    { 
			printf("Enter the vegtable number  :   ");
			scanf("%d",&number);
			printf("\t Enter the weight of vegtable :  ");
			scanf("%d",&weight);
			strcpy(	b[k].vegname,v[number-1].vn); 
		//vegtable name is copied
			b[k].vegweight=weight;//weight given by the user
			r1=b[k].vegweight=weight;//storing weight value
			b[k].vegunitp=v[number-1].vgcost;//price of vegetable is copied
			r2=b[k].vegunitp=v[number-1].vgcost;//storing price value
			b[k].vegprice=r1*r2;//price of vegetable is copied
			/*
			%s -- b[i].vegname =tamato
			%d -- b[i].weight = weight of the tamato given by the user
			%d -- b[i].vegunitp =price of tamato per kg
				%d -- b[i].vegprice =weight given by customer * weight of the vegetabke per kg
			
			*/
    }	
    printf("\n\n\n   * * *  T H E   V E G E T A B L E   S T O R E  *** \n\n\n" );
    printf("------------------------------------------------------------------------------\n");
    printf("ITEM    \tWEIGHT\t\tPricePerKg   \t COST \n\n");			
    for (k=0;k<items;k++)
    {
   	sum=sum+b[k].vegprice;
    printf("\n%s\t\t%d\t\t %d\t\t%d \n",b[k].vegname,b[k].vegweight,b[k].vegunitp,b[k].vegprice);
     }
   
   	printf("\n\n T O T A L C O S T - %d\n",sum);
   printf("------------------------------------------------------------------------------");
			printf("\n\n\n T H A N K Y O U -- V I S I T  A G A I N !!!");
   }
    else
    printf("You cannot Proceed ");
    
  }


