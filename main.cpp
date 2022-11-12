#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/////////////////////made by Mohamed Reda Bouamoud

typedef int num;

struct prof 
{
	int nump;
	char nomp[20];
	char prep[10];
	num tabmat[10];
	int nmp;
};

struct etud
{
	char nome[20];
	char pren[10];
	int nume;
};

struct mat
{
	char nomm[20];
	int numm;
};

struct niv
{
	etud *te;
	int ne;
	mat *tm;
	int nm;
	
};
struct etab
{
	prof *tp;
	int np;
	niv tn[5];
};

void menuP()
{
	system("cls");
	printf("\n");
	printf(" \t\t\t\t\t        -------------------\n");
	printf("\t\t\t\t\t        | MENU PRINCIPALE |\n");
	printf(" \t\t\t\t\t        -------------------");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\t\t\t\t\t || 1 <--- MENU prof\t\t||\n\t\t\t\t\t || 2 <--- MENU niveau\t\t||\n\t\t\t\t\t || 3 <--- save/load\t\t||\n\t\t\t\t\t || 4 <--- QUITTER\t\t||");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\n\t\t\t\t\t || ------------->votre choix:");
}
void menuPr()
{
	system("cls");
	printf("\n");
	printf(" \t\t\t\t\t\t  -------------\n");
	printf("\t\t\t\t\t\t  | MENU PROF |\n");
	printf(" \t\t\t\t\t\t  -------------");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\t\t\t\t\t || 1 <--- AJOUTER\t\t||\n\t\t\t\t\t || 2 <--- MODIFIER\t\t||\n\t\t\t\t\t || 3 <--- SUPRIMER\t\t||\n\t\t\t\t\t || 4 <--- LISTER\t\t||\n\t\t\t\t\t || 5 <---les matieres\t\t||\n\t\t\t\t\t || 6 <--- retour\t\t||");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\n\t\t\t\t\t || ------------->votre choix:");
}
void menuniv()
{
	system("cls");
	printf("\n");
	printf(" \t\t\t\t\t         -----------------\n");
	printf("\t\t\t\t\t         | MENU de niveau |\n");
	printf(" \t\t\t\t\t         -----------------");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\t\t\t\t\t || 1 <--- 1er annee\t\t||\n\t\t\t\t\t || 2 <--- 2eme annee\t\t||\n\t\t\t\t\t || 3 <--- 3eme annee\t\t||\n\t\t\t\t\t || 4 <--- 4eme annee\t\t||\n\t\t\t\t\t || 5 <--- 5eme annee\t\t||");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\n\t\t\t\t\t || ------------->votre choix:");
}
void menu()
{
	system("cls");
	printf("\n");
	printf(" \t\t\t\t\t         ---------------\n");
	printf("\t\t\t\t\t         | MENU NIVEAU |\n");
	printf(" \t\t\t\t\t         ---------------");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\t\t\t\t\t || 1 <--- MENU ETUDIANT\t||\n\t\t\t\t\t || 2 <--- MENU MATIERE\t\t||\n\t\t\t\t\t || 3 <--- RETOUR\t\t||");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\n\t\t\t\t\t || ------------->votre choix:");
}
void menuetud()
{
	system("cls");
	printf("\n");
	printf(" \t\t\t\t\t         -----------------\n");
	printf("\t\t\t\t\t         | MENU etudiant |\n");
	printf(" \t\t\t\t\t         -----------------");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\t\t\t\t\t || 1 <--- AJOUTER\t\t||\n\t\t\t\t\t || 2 <--- MODIFIER\t\t||\n\t\t\t\t\t || 3 <--- SUPRIMER\t\t||\n\t\t\t\t\t || 4 <--- LISTER\t\t||\n\t\t\t\t\t || 5 <--- retour\t\t||");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\n\t\t\t\t\t || ------------->votre choix:");
}
void menumat()
{
	system("cls");
	printf("\n");
	printf(" \t\t\t\t\t         -----------------\n");
	printf("\t\t\t\t\t         | MENU matiere |\n");
	printf(" \t\t\t\t\t         -----------------");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\t\t\t\t\t || 1 <--- AJOUTER\t\t||\n\t\t\t\t\t || 2 <--- MODIFIER\t\t||\n\t\t\t\t\t || 3 <--- SUPRIMER\t\t||\n\t\t\t\t\t || 4 <--- LISTER\t\t||\n\t\t\t\t\t || 5 <--- retour\t\t||");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\n\t\t\t\t\t || ------------->votre choix:");
}
void menusave()
{
	system("cls");
	printf("\n");
	printf(" \t\t\t\t\t         ---------------\n");
	printf("\t\t\t\t\t         | MENU save |\n");
	printf(" \t\t\t\t\t         ---------------");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\t\t\t\t\t || 1 <--- save\t\t\t||\n\t\t\t\t\t || 2 <--- load\t\t\t||\n\t\t\t\t\t || 3 <--- RETOUR\t\t||");
	printf(" \n\t\t\t\t\t ---------------------------------");
	printf(" \n\n\t\t\t\t\t || ------------->votre choix:");
}
int repp(etab *e,int num)
{
	int i;
	for(i=0;i<e->np;i++)
	{
		if(e->tp[i].nump==num)
		{
			return 1;
		}
	}
	return 0;
}
void ajouterProf(etab *&e)
{
	int cp,nbm,k,i,j;
	char m[10];
	
		if(e->np==0)
			{
				e->tp=(prof*)malloc(sizeof(prof));
			}
		else
			{
				realloc(e->tp,sizeof(prof)*((e->np)+1));
			}
		printf(" \t\t\t ------> donner le nom :");
		scanf("%s",e->tp[e->np].nomp);
		printf(" \t\t\t ------> donner le prenom :");
		scanf("%s",e->tp[e->np].prep);
		do
		{
			printf(" \t\t\t ------> donner le numero :");
			scanf("%d",&e->tp[e->np].nump);
			cp=repp(e,e->tp[e->np].nump);
		}while(cp!=0);
		e->tp[e->np].nmp=0;
		printf(" \t\t\t ------> donner le nombre de matierre enseigne :");
		scanf("%d",&nbm);
		for(k=1;k<=nbm;k++)
		{
			printf(" \t\t\t ------> donner la matiere numero %d :",k);
			scanf("%s",m);
			for(i=0;i<5;i++)
			{
				for(j=0;j<e->tn[i].nm;j++)
				{
					if(strcmp(m,e->tn[i].tm[j].nomm)==0)
					{
						e->tp[e->np].tabmat[e->tp[e->np].nmp]=e->tn[i].tm[j].numm;
						e->tp[e->np].nmp++;
					}
				}
			}
		}
		e->np++;		
}
void listerProf(etab *&e)
{
	int i,j;
	printf("\n\n\t\t\t--------------------------------------------------------------------------\n");
	printf("\t\t\t|infos  |     nom\t|     prenom\t|     numero\t|   matierres\n");
	printf("\t\t\t--------------------------------------------------------------------------\n");
	for(i=0;i<e->np;i++)
	{
		printf("\t\t\t|prof %d |    %s \t|     %s \t|      %d \t|",i+1,e->tp[i].nomp,e->tp[i].prep,e->tp[i].nump);
		for(j=0;j<e->tp[i].nmp;j++)
		{
			printf(" %d |",e->tp[i].tabmat[j]);
		}
		printf("\n\t\t\t-------------------------------------------------------------------------\n");	
	}
	getch();
}

int rechercherprof(etab *e,char nom[10])
{
	int i;
	for(i=0;i<e->np;i++)
	{
		if(strcmp(e->tp[i].nomp,nom)==0)
		{
			return i;
		}
	}
	return -1;
}
void modifierprof(etab *&e)
{
	int nbm,k,i,j,pos,cp;
	char m[10];
	char nom[10];
	prof tprof;
	printf(" \t\t\t ------> donner un nom pour modifier :");
	scanf("%s",nom);
	pos=rechercherprof(e,nom);
	if(pos==-1) 
	{
		printf("prof introuvable !"); getch();
	}
	else
	{
		printf(" \t\t\t ------> donner un nom :");
		scanf("%s",tprof.nomp);
		printf(" \t\t\t ------> donner un prenom :");
		scanf("%s",tprof.prep);
		do
		{
			printf(" \t\t\t ------> donner un numero :");
			scanf("%d",&tprof.nump);
			cp=repp(e,tprof.nump);
		}while(cp!=0 && tprof.nump!=e->tp[pos].nump);
		e->tp[pos]=tprof;
		e->tp[pos].nmp=0;
		printf(" \t\t\t ------> donner le nombre de matierre enseigne :");
		scanf("%d",&nbm);
		for(k=1;k<=nbm;k++)
		{
			printf(" \t\t\t ------> donner la matiere numero %d :",k);
			scanf("%s",m);
			for(i=0;i<5;i++)
			{
				for(j=0;j<e->tn[i].nm;j++)
				{
					if(strcmp(m,e->tn[i].tm[j].nomm)==0)
					{
						e->tp[pos].tabmat[e->tp[pos].nmp]=e->tn[i].tm[j].numm;
						e->tp[pos].nmp++;
					}
				}
			}
		}
	}
}
void suprimerprof(etab *&e)
{
	int pos,i;
	char nom[10];
	
	printf(" \t\t\t ------> donner un nom pour suprimer :");
	scanf("%s",nom);
	pos=rechercherprof(e,nom);
	if(pos==-1)
	{
		printf("\n \t\t\t ------> prof introuvable!!");
		getch();
	}
	else
	{
		
		for(i=pos;i<e->np;i++)
		{
			e->tp[i]=e->tp[i+1];
		}
		realloc(e->tp,sizeof(prof)*((e->np)-1));
		e->np--;
		
	}
}
void afficher(etab *e)
{
	int i,j,k,l;
	char m[10];
	printf("---->donner un prof pour afficher son tableau des matieres:");
	scanf("%s",m);
	for(i=0;i<e->np;i++)
	{
		if(strcmp(e->tp[i].nomp,m)==0)
		{
			for(j=0;j<e->tp[i].nmp;j++)
			{
				for(k=0;k<5;k++)
				{
					for(l=0;l<e->tn[k].nm;l++)
					{
						if(e->tp[i].tabmat[j]==e->tn[k].tm[l].numm)
						{
							printf("-->%s (niveau :%d)\n",e->tn[k].tm[l].nomm,k+1);
						}
					}
				}
			}
		}
	}
	getch();
}
int repe(etab *e,int num,int choixniv)
{
	int i,j;
	for(j=0;j<5;j++)
	{
			for(i=0;i<e->tn[j].ne;i++)
			{
					if(e->tn[j].te[i].nume==num)
					{
						return 1;
					}	
			}	
	}	
	return 0;
}
void ajouteretud(etab *&e,int choixniv,int v)
{
	int cp;
	if(v==0)
	{
		if(e->tn[choixniv-1].ne==0)
			{
				e->tn[choixniv-1].te=(etud*)malloc(sizeof(etud));
			}
		else
			{
				realloc(e->tn[choixniv-1].te,sizeof(etud)*((e->tn[choixniv-1].ne)+1));
			}
	}	
		printf(" \t\t\t ------> donner un nom :");
		scanf("%s",e->tn[choixniv-1].te[e->tn[choixniv-1].ne].nome);
		printf(" \t\t\t ------> donner un prenom :");
		scanf("%s",e->tn[choixniv-1].te[e->tn[choixniv-1].ne].pren);
		do
		{
			printf(" \t\t\t ------> donner un numero :");
			scanf("%d",&e->tn[choixniv-1].te[e->tn[choixniv-1].ne].nume);
			cp=repe(e,e->tn[choixniv-1].te[e->tn[choixniv-1].ne].nume,choixniv);
		}while(cp!=0);
		e->tn[choixniv-1].ne++;	
}
void listeretud(etab *e,int choixniv)
{
	
	int i;
	printf("\n\n\t\t\t\t---------------------------------------------------------\n");
	printf("\t\t\t\t|infos      |   nom\t|    prenom\t|    numero\t|\n");
	printf("\t\t\t\t---------------------------------------------------------\n");
	for(i=0;i<e->tn[choixniv-1].ne;i++)
	{
		printf("\t\t\t\t|etudiant %d |  %s\t|    %s\t|     %d \t|\n",i+1,e->tn[choixniv-1].te[i].nome,e->tn[choixniv-1].te[i].pren,e->tn[choixniv-1].te[i].nume);
		printf("\t\t\t\t---------------------------------------------------------\n");
	}
	getch();
}
int rechercheretud(etab *e,char nom[10],int choixniv)
{
	int i;
	for(i=0;i<e->tn[choixniv-1].ne;i++)
	{
		if(strcmp(e->tn[choixniv-1].te[i].nome,nom)==0)
		{
			return i;
		}
	}
	return -1;
}
void modifieretud(etab *&e,int choixniv)
{
	int i,pos,cp;
	char nom[10];
	etud tetud;
	printf(" \t\t\t ------> donner un nom pour modifier :");
	scanf("%s",nom);
	pos=rechercheretud(e,nom,choixniv);
	if(pos==-1) 
	{
		printf(" \t\t\t ------> etudient introuvable!!"); getch();
	}
	else
	{
		printf(" \t\t\t ------> donner un nom :");
		scanf("%s",tetud.nome);
		printf(" \t\t\t ------> donner un prenom :");
		scanf("%s",tetud.pren);
		do
		{
			printf(" \t\t\t ------> donner un numero :");
			scanf("%d",&tetud.nume);
			cp=repe(e,tetud.nume,choixniv);
		}while(cp!=0 && tetud.nume!=e->tn[choixniv-1].te[pos].nume);
		e->tn[choixniv-1].te[pos]=tetud;
	}
}
void suprimeretud(etab *&e,int choixniv)
{
	int pos,i;
	char nom[10];
	
	printf(" \t\t\t ------> donner un nom pour suprimer :");
	scanf("%s",nom);
	pos=rechercheretud(e,nom,choixniv);
	if(pos==-1)
	{
		printf(" \t\t\t ------> etudiant introuvable !!");
		getch();
	}
	else
	{
		for(i=pos;i<e->tn[choixniv-1].ne;i++)
		{
			e->tn[choixniv-1].te[i]=e->tn[choixniv-1].te[i+1];
		}
		realloc(e->tn[choixniv-1].te,sizeof(etud)*((e->tn[choixniv-1].ne)-1));
		e->tn[choixniv-1].ne--;
	}
}
int repm(etab *e,int num,int choixniv)
{
	int i,j;
	for(j=0;j<5;j++)
	{
				for(i=0;i<e->tn[j].nm;i++)
				{
					if(e->tn[j].tm[i].numm==num)
					{
						return 1;
					}	
				}	
	}	
	return 0;
}
void ajoutermat(etab *&e,int choixniv,int v)
{
	int cp;
	if(v==0)
	{
		if(e->tn[choixniv-1].nm==0)
			{
				e->tn[choixniv-1].tm=(mat*)malloc(sizeof(mat));
			}
		else
			{
				realloc(e->tn[choixniv-1].tm,sizeof(mat)*((e->tn[choixniv-1].nm)+1));
			}
	}	
		printf(" \t\t\t ------> donner une matiere :");
		scanf("%s",e->tn[choixniv-1].tm[e->tn[choixniv-1].nm].nomm);
		do
		{	
			printf(" \t\t\t ------> donner un numero :");
			scanf("%d",&e->tn[choixniv-1].tm[e->tn[choixniv-1].nm].numm);
			cp=repm(e,e->tn[choixniv-1].tm[e->tn[choixniv-1].nm].numm,choixniv);
		}while(cp!=0);
		e->tn[choixniv-1].nm++;
}
void listermat(etab *e,int choixniv)
{
	int i;
	printf("\n\n\t\t\t\t\t-----------------------------------------\n");
	printf("\t\t\t\t\t|infos     |   mtiere\t|   numero\t|\n");
	printf("\t\t\t\t\t-----------------------------------------\n");
	for(i=0;i<e->tn[choixniv-1].nm;i++)
	{
		printf("\t\t\t\t\t|matiere %d |    %s\t|     %d \t|\n",i+1,e->tn[choixniv-1].tm[i].nomm,e->tn[choixniv-1].tm[i].numm);
		printf("\t\t\t\t\t-----------------------------------------\n");
	}
	getch();
}
int recherchermat(etab *e,char nom[10],int choixniv)
{
	int i;
	for(i=0;i<e->tn[choixniv-1].nm;i++)
	{
		if(strcmp(e->tn[choixniv-1].tm[i].nomm,nom)==0)
		{
			return i;
		}
	}
	return -1;
}
void modifiermat(etab *&e,int choixniv)
{
	int i,j,pos,cp;
	char nom[10];
	mat tmat;
	printf(" \t\t\t ------> donner une matiere pour modifier :");
	scanf("%s",nom);
	pos=recherchermat(e,nom,choixniv);
	if(pos==-1) 
	{
		printf(" \t\t\t ------> matiere introuvable !!");
		getch();
	}
	else
	{
		printf(" \t\t\t ------> donner une matiere :");
		scanf("%s",tmat.nomm);
		do
		{
			printf(" \t\t\t ------> donner un numero :");
			scanf("%d",&tmat.numm);
			cp=repm(e,tmat.numm,choixniv);
		}while(cp!=0 && tmat.numm!=e->tn[choixniv-1].tm[pos].numm);
		for(i=0;i<e->np;i++)
		{
			for(j=0;j<e->tp[i].nmp;j++)
			{
				if(e->tp[i].tabmat[j]==e->tn[choixniv-1].tm[pos].numm)
				{
					e->tp[i].tabmat[j]=tmat.numm;
				}
			}
		}
		e->tn[choixniv-1].tm[pos]=tmat;
	}
}
void suprimermat(etab *&e,int choixniv)
{
	int pos,i,j,k;
	char nom[10];
	
	printf(" \t\t\t ------> donner une matiere pour suprimer :");
	scanf("%s",nom);
	pos=recherchermat(e,nom,choixniv);
	if(pos==-1)
	{
		printf(" \t\t\t ------> matiere introuvable");
		getch();
	}
	else
	{
		for(i=0;i<e->np;i++)
		{
			for(k=0;k<e->tp[i].nmp;k++)
			{
				if(e->tp[i].tabmat[k]==e->tn[choixniv-1].tm[pos].numm)
				{
					for(j=k;j<e->tp[i].nmp;j++)
					{
						e->tp[i].tabmat[j]=e->tp[i].tabmat[j+1];
					}
					e->tp[i].nmp--;
				}
			}
		}
		for(i=pos;i<e->tn[choixniv-1].nm;i++)
		{
			e->tn[choixniv-1].tm[i]=e->tn[choixniv-1].tm[i+1];
		}
		realloc(e->tn[choixniv-1].tm,sizeof(mat)*((e->tn[choixniv-1].nm)-1));
		e->tn[choixniv-1].nm--;
		
	}
}
void save(etab *e,char data[50])
{
	int i,j;
	FILE *f=NULL;
	f=fopen(data,"wb");
	if(f!=NULL)
	{
		fwrite(&e->np,sizeof(int),1,f);
		fwrite(e->tp,sizeof(prof),e->np,f);
		
		for(j=0;j<e->np;j++)
		{
			fwrite(&e->tp[j].nmp,sizeof(int),1,f);
			fwrite(e->tp[j].tabmat,sizeof(num),e->tp[j].nmp,f);
		}
		
		for(j=0;j<5;j++)
		{
			fwrite(&e->tn[j].ne,sizeof(int),1,f);
			fwrite(e->tn[j].te,sizeof(etud),e->tn[j].ne,f);
		}
		
		for(j=0;j<5;j++)
		{
			fwrite(&e->tn[j].nm,sizeof(int),1,f);
			fwrite(e->tn[j].tm,sizeof(mat),e->tn[j].nm,f);
		}
	}
	fclose (f);	
}

void up(etab *&e,char data[50])
{
	int i,j;
	FILE *f=NULL;
	f=fopen(data,"rb");
	if(f!=NULL)
	{	
		fread(&e->np,sizeof(int),1,f);
		e->tp=(prof*)malloc(sizeof(prof));
		realloc(e->tp,sizeof(prof)*((e->np)+1));
		fread(e->tp,sizeof(prof),e->np,f);
		
		for(j=0;j<e->np;j++)
		{
			fread(&e->tp[j].nmp,sizeof(int),1,f);
			fread(e->tp[j].tabmat,sizeof(num),e->tp[j].nmp,f);
		}
		
		for(j=0;j<5;j++)
		{
			fread(&e->tn[j].ne,sizeof(int),1,f);
			e->tn[j].te=(etud*)malloc(sizeof(etud));
			realloc(e->tn[j].te,sizeof(etud)*((e->tn[j].ne)+1));
			fread(e->tn[j].te,sizeof(etud),e->tn[j].ne,f);
		}
		
		for(j=0;j<5;j++)
		{
			fread(&e->tn[j].nm,sizeof(int),1,f);
			e->tn[j].tm=(mat*)malloc(sizeof(mat));
			realloc(e->tn[j].tm,sizeof(mat)*((e->tn[j].nm)+1));
			fread(e->tn[j].tm,sizeof(mat),e->tn[j].nm,f);
		}
		
	}
	fclose (f);	
}

main() {
	etab *e=NULL;
	int i,choixP,choixniv,choixetud,choix,choixmat,choixsave,v=0,cp;
	e=(etab*)malloc(sizeof(etab));
	e->np=0;
	e->tp=NULL;
	for(i=0;i<5;i++)
	{
		e->tn[i].ne=0;
		e->tn[i].te=NULL;
		e->tn[i].tm=NULL;
		e->tn[i].nm=0;
	}
	do{
		menuP();
		scanf("%d",&choixP);
		switch(choixP)
		{
			case 1: int choixPr;
					do{
						system("cls");
						
						menuPr();
						scanf("%d",&choixPr);
						switch(choixPr)
						{
							case 1 :
							 		ajouterProf(e);
									break;
							case 2 : 
									modifierprof(e);
									break;
							case 3:
									suprimerprof(e);
									break;
							case 4 : 
									listerProf(e); 
									 break;
							case 5 :
									afficher(e);
									break;
							default : break;
						}	
					}while(choixPr!=6);
					break;
			case 2 :
				do
				{
					system("cls");
					do
					{
						menuniv();
						scanf("%d",&choixniv);
					}while(choixniv>5);
					
					
							do
							{
								system("cls");
								menu();
								scanf("%d",&choix);
								switch(choix)
								{
									case 1:
										do
										{
											system("cls");
											menuetud();
											scanf("%d",&choixetud);
											switch(choixetud)
											{
												case 1 :
													ajouteretud(e,choixniv,v);
													break;
												case 2:
													
													modifieretud(e,choixniv);
													break;
												case 3:
													suprimeretud(e,choixniv);
													break;
												case 4 :
													listeretud(e,choixniv);
													break;
													
											}	
										}while(choixetud!=5);
										break;
									case 2 :
										do
										{
											system("cls");
											menumat();
											scanf("%d",&choixmat);
											switch(choixmat)
											{
												case 1:
													ajoutermat(e,choixniv,v);
													break;
												case 2:
													
													modifiermat(e,choixniv);
													break;
												case 3:
													suprimermat(e,choixniv);
													break;
												case 4:
													listermat(e,choixniv);
													break;
											}
										}while(choixmat!=5);
										break;
								}
							}while(choix!=3);
						default :break;
					
				}while(choixniv!=6);break;		
			case 3:
				do
				{
					menusave();
					scanf("%d",&choixsave);
					switch(choixsave)
					{
						case 1:
							save(e,"data");
							break;
						case 2:
							v=1;
							up(e,"data");
							break;
						default: break;
					}
				}while(choixsave!=3);break;	
		}
		
	}while(choixP!=4);
	free(e);
}
