#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ajouter(char login[], char password[],int role)
{
	char a_login[30];char a_password[30];
	int a_role;
	FILE *f;
	f=fopen("/home/montassar/Projects/login/src/liste/users.txt","a");
	fprintf(f,"%s %s %d",a_login,a_password,a_role);
	fclose(f);

}
//=============================================================================

void afficher ()
{
	
	FILE* f;
	char r_login[30];char r_password[30];int r_role;
	f=fopen("/home/montassar/Projects/login/src/liste/users.txt","r");
		while (!EOF)
		{
		fscanf(f,"%s %s %d",r_login,r_password,&r_role);
		}
}

//=============================================================================

int verifier(char login[], char password[])
{
	int verif=-1;
	FILE* f;
	char r_login[30];char r_password[30];
	int r_role;
	f=fopen("/home/montassar/Projects/login/src/liste/users.txt","r");
	if(f!=NULL)
	{
		while (fscanf(f,"%s %s %d",r_login,r_password,&r_role)!=EOF)
		{
		
		if (((strcmp(login,r_login)==0)&&(strcmp(password,r_password)==0)))
		{
		verif=r_role;
		}
		}
	}
fclose(f);
return(verif);
}



