#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tstack{
	char info;
	struct tstack *next;
};
typedef struct tstack stack;

struct tsentstack{
	stack *top;
};
typedef struct tsentstack sstack;
//
int isEmptyStack(sstack s)
{
	return (s.top == NULL);
}

void initStack(sstack *s) 
{                              
	 s->top = NULL;            	
}                          
//
void push(sstack *s, char d)
{
	stack *f;
	f=(stack *)malloc(sizeof(stack)); //Passo 1
	f->info=d;   //Passo 2
	f->next = NULL;
	if (isEmptyStack(*s) == 1) {
		s->top = f;
		return;
	}
	f->next=s->top; // Passo 2
	s->top = f; // Passo 3
	return;
}
//
char pop(sstack *s) {
	char d={'@'}; // valor representa erro
	stack *aux;
	if (isEmptyStack(*s)==1) return d;
    aux = s->top;
	d = s->top->info;
    s->top = s->top->next;
    free(aux);
	return d;
}
//
void freeStack (sstack *s)
{
	stack *aux = s->top, *aux2;
	while (aux!=NULL)
	{
		aux2=aux;
		aux=aux->next;
		free(aux2);
    }
    initStack(s);
    return;
}
//
int main()
{
	sstack s;
	char d;
	char *st={"Inserir na pilha!"};
	int i;
	initStack(&s);
	for (i=0;i<strlen(st);i++) {
		d =st[i];
        printf("%c", st[i]);
		push(&s,d);
	}
	while (isEmptyStack(s)!=1)
	{
		d=pop(&s);
		printf("%c\n",d);
	}
	return 0;
}