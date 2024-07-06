#include <stdio.h>
#include <stdlib.h>
struct tdado {
	char c;
};
typedef struct tdado dado;
struct tstack {
	dado info;
	struct tstack *prev;
};
typedef struct tstack stack;
struct tsent {
	stack *top;
};
typedef struct tsent sentinela;
//
int emptyStack(sentinela s)
{
	if (s.top==NULL) return 1;
	return 0;
}
//
//
void initStack(sentinela *s) 
{                            
	s->top=NULL;           
}              
//
void push(sentinela *s, dado d)
{
	stack *f;
	f=(stack *)malloc(sizeof(stack));
	f->info=d;
	f->prev=NULL;
	if (emptyStack(*s)==1) {
		s->top=f;
		return;
	}
	f->prev=s->top;
  s->top=f;
	return;
}
//
dado pop(sentinela *s) {
	dado d={'@'}; // dado d; d.c='@';
	if (emptyStack(*s)==1) return d;
	stack *aux=s->top;
  d=s->top->info;
	s->top=s->top->prev;
	free(aux);
	return d;
}
//
void freeStack(sentinela *s)
{
	stack *aux=s->top, *aux2;
	while (aux!=NULL)
	{
		aux2=aux;
		aux=aux->prev;
		free(aux2);
  }
  initStack(s);
  return;
}
//
int main()
{
	sentinela s;
	dado d;
	char *st={"Inserir na pilha!"};
	int i;
	initStack(&s);
	printf("Inserindo \"%s\" na pilha!\n",st);
	for (i=0;st[i]!=0;i++) {
		d.c=st[i];
		push(&s,d);
	}
	printf("Desempilhando...\n");
	while (emptyStack(s)!=1)
	{
		d=pop(&s);
		printf("%c",d.c);
	}
	printf("\n");
  freeStack(&s);
	return 0;
}