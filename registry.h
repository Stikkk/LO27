#ifndef _REGISTRY_H_
#define _REGISTRY_H_


typedef enum{Pending, Confirmed, Executed, Cancelled}Status;

typedef struct {
	long ID;
	char[15] Name;
}User;

typedef struct {
	double Amount;
	long EmitterID;
	long RecipientID;
	Status Status;
	long StartDateTime;
	long TTL;
	char[10];
}Transaction;

typedef struct elem{
	struct elem* previous;
	struct elem* next;
	Transaction transaction;
	
}TransactionElement;

typedef struct{
	TransactionElement* head;
	TransactionElement* tail;
	long transactionCount;
	long lastTransactionDate;
}Registry;

/*Fonctions utilisateur*/
User createUser(char[15]);

long getID(User);

char[15] getName(User);

void setName(User,char[15]);

/*Fonctions Transaction*/

Transaction createTransaction();

double getAmount(Transaction);

char getStatus(Transaction);

long getStartDateTime(Transaction);

long getEndDateTime(Transaction);

long getTTL(Transaction);

BOOL isExpired(Transaction,long);

/*Fonctions Registre pour un compte*/

double getBalance(Registry,User);

Transaction* getHistory(Registry,User);

Transaction* getHistoryLimit(

double getAverageCredit(Registry,User,long,long);

double getAveragerDebit(Registry,User,long,long);

/*Fonctions Registre pour une transaction*/

long getAmount(Registry,long);

TransactionStatus getStatus(Registry,long);




#endif