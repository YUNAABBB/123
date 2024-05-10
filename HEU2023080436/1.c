#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{
	int i,n,m=0,d=0,e=0,all=0,qk=0,k,shu[100]={0},wei[100]={0},chu[100];
	char a[100],b[100];
	for(i=0;i<100;i++)
	{
		b[i]='a';
		shu[i]=666;
		chu[i]=666; 
	}
	
	scanf("%s",&a[0]);
	scanf("%s",&b[0]);
	
	for(i=0;i<100;i++)
	{
		n=(int)b[i]-48;
		k=(int)b[i+1]-48;
		if(n==43&&k!=45)
		{
			qk++;
			if(n>=0&&n<=9||n==-3)
			{
			  if(n==-3)
			  {	
			    shu[m]=n+2;
			  }
			  else
			  {
			  	shu[m]=n;
			  }
			   wei[m]=i;
			   m++;
			}
		}
		else
		{
			if(n>=0&&n<=9||n==-3)
			{
			  if(n==-3)
			  {	
			    shu[m]=n+2;
			  }
			  else
			  {
			  	shu[m]=n;
			  }
			   wei[m]=i;
			   m++;
			}
		}
	}
	
    for(i=0;i<m;i++)
    {
    	if( (wei[i]+1)==wei[i+1])
    	{
    		if(shu[i]>=0&&shu[i]!=666)
    		{
             	shu[i+1]=shu[i]*10+shu[i+1];
             	shu[i]=666;
 	    	}
 	    	else
 			{
			 	if(d==0)
			 	{
			 		shu[i+1]=0-shu[i+1];
			 		shu[i]=666;
			 		d++;
			 		if((wei[i+1]+1)!=wei[i+2])
					{
						d=0;
					}
				}
				else if(d!=0)
				{
					shu[i+1]=shu[i]*10-shu[i+1];
					shu[i]=666;
					if((wei[i+1]+1)!=wei[i+2])
					{
						d=0;
					}
				} 			 
			} 	    	
		}
	}  
    
    for(i=0;i<m;i++)
    {
    	if(shu[i]!=666)
    	{
    		chu[e]=shu[i];
    		e++;
    		all++;
		}
	}
	if(qk==1)
	{
		if(all==1)
		{
			for(i=0;i<chu[0];i++)
			{
				printf("N ");
			}
		}
		else
		{
			if(chu[0]>=all)
			{
				for(i=1;i<=(all-1);i++)
				{
		            printf("%d ",chu[i]);
				}
				for(i=0;i<=(chu[0]-all);i++)
				{
		            printf("0 ");
				}
			}
		}
	}
	else
	{
		i=0;
		while(1)
		{
			if(chu[i]!=666) 
			{ 
		        printf("%d ",chu[i]);
		        i++;
		    } 
		}	
	}
	return 0;
}




