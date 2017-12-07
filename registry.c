#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "registry.h"

/*Fonctions utilisateur*/
User createUser(char[15] Name)
{
	srand(time(0));
	User NewUser=(User*) malloc (sizeof(User));
	User.Name=Name;
	long ID=rand%10000+1;
	User.ID=ID;
	
	return User;
}

long getID(User user)
{
	return user.ID;
}

char[15] getName(User user)
{
	return user.Name;
}

void setName(User user,char[15] newname)
{
	user.Name=newname;
}

/*Fonctions Transaction*/

Transaction createTransaction()
{
	Transaction newT=(Transaction*) malloc(sizeof(Transaction));
	
	return newT;
}

double getAmount(Transaction transaction)
{
	return transaction.Amount;
}

Status getStatus(Transaction transaction)
{
	return transaction.Status
}
long getStartDateTime(Transaction transaction)
{
	return transaction.StartDateTime;
}

long getEndDateTime(Transaction transaction)
{
	return transaction.EndDateTime;
}

long getTTL(Transaction transaction)
{
	return transaction.TTL;
}

BOOL isExpired(Transaction transaction,long time)
{
	if transaction.TTL>time
	{
		return TRUE;
	} else	{
		return FALSE;
	}
}

/*Fonctions Registre pour un compte*/

double getBalance(Registry R,User user);
{
	double Balance=0;
	TransactionElement*t=R.head;
	while (t!=NULL)
	{
		if (t->transaction.EmitterID==user.ID)
		{
			Balance=Balance-(t->transaction.Amount);
		} else {
			if (t->transaction.RecipientID==user.ID)
			{
				Balance=Balance+(t->transaction.Amount);
			}
		}
		t=t->next;
	}
	return Balance
}

/*Transaction* getHistory(Registry,User)

Transaction* getHistoryLimit()
*/

double getAverageCredit(Registry R,User user,long Start,long End)
{
	double Balance=0;
	int Noftransaction;
	TransactionElement* t=R.head
	while(Start>t->transaction->StartDateTime)
	{
		t=t->next;
	}
	while((End>t->transaction->EndDateTime)&&((t->next)!=NULL)
	{
		if(t->transaction.RecipientID==user.ID)
		{
			Balance=Balance+(t->transaction.Amount);
			Noftransaction++;
		}
		t=t->next;
	}
	double AverageCredit=Balance/Noftransaction;
	return(AverageCredit);
}

double getAveragerDebit(Registry,User,long,long);
{
	double Balance=0;
	int Noftransaction;
	TransactionElement* t=R.head
	while(Start>t->transaction->StartDateTime)
	{
		t=t->next;
	}
	while((End>t->transaction->EndDateTime)&&((t!=NULL)
	{
		if(t->transaction.EmitterID==user.ID)
		{
			Balance=Balance+(t->transaction.Amount);
			Noftransaction++;
		}
		t=t->next;
	}
	double AverageCredit=Balance/Noftransaction;
	return(AverageCredit);
}

/*Fonctions Registre pour une transaction*/

long getAmount(Registry,long ID)
{
	TransactionElement* t=Registry.head;
	while((t->transaction.ID!=ID)&&(t!=NULL))
	{
		t=t->next;
	}
	return(t->transaction.Amount;
}

TransactionStatus getStatus(Registry,long);