#include <stdio.h>
#include <string.h>
#include <math.h>




int main()
{
    int i,n;
    //Enter the string length
    scanf("%d",&n);
    char str[n];
    //Enter String of length
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if((str[i] == str[i+1] ) && (i >= 0) && str[i]!='\0')
        {
		int j=i;
            	for(j;str[j]!='\0';)
    		{
		str[j]=str[j+2];
		str[j+1]=str[j+3];
		j+=2;
    		}
		
		i--;
        }
    }
//incase of baab; it gives remainder as bb only thats why we can use this to remove last two same characters from a string.
/*
for(i=0;str[i]!='\0';i++)
    {
        if((str[i] == str[i+1] ) && (i >= 0) && str[i]!='\0')
        {
		int j=i;
            	for(j;str[j]!='\0';)
    		{
		str[j]=str[j+2];
		str[j+1]=str[j+3];
		j+=2;
    		}
		
		i--;
        }
    }
*/

//incase of baab; it gives remainder as bb only thats why we can use this to remove last two same characters from a string.
if(str[0]==str[1]){
	str[0]=str[2];
	str[1]=str[3];
}

    if(str[0]=='\0'){
	printf("Empty String");
	}
    else
	{
	
	printf("%s\n",str);
	}
    return 0;
}
