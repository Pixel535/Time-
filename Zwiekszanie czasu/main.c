#include <stdio.h>

int main(){
    int h,m,s;
    printf("Podaj wartosc godzinowa: ");
    scanf("%i", &h);
    printf("Podaj wartosc minutowa: ");
    scanf("%i", &m);
    printf("Podaj wartosc sekundowa: ");
    scanf("%i", &s);
    if ((h>23 || m>59 || s>59) || (h<0) || (m<0) || (s<0))
    {
    	printf("Niewlasciwy format czasu ");
    }
    else
    {
    	if (s==59)
    	{
			s=0;
      		if (m==59)
      		{
       			m=0;
       			if(h==23)
       			{
       				h=0;
       			}
       			else
       			{
       				h+=1;
       			}
       		}
       		else
       		{
       			m+=1;
       		}
       	}
       	else
       	{
       		s+=1;
       	}
    }
    if(m<10 && s<10)
    	printf("%d:0%d:0%d", h,m,s);
    else if(m<10)
    	printf("%d:0%d:%d", h,m,s);
    else if(s<10)
    	printf("%d:%d:0%d", h,m,s);
    else
    	printf("%d:%d:%d", h,m,s);

    return 0;
}
