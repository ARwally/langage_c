#include <stdio.h>
int main()
{
	int i;
	scanf ("%d", &i);
       switch (i)
       {
	       case 1 : printf ("i a pour valeur 1\n");
			break;
		case 2 : printf ("i a pour valeur 2\n");
			 break;
		case 3 : printf ("i a pour valeur 3\n");
	 		break;
		default: printf ("choix invalide\n");
			 break;
       }	       
       return 0;
}
