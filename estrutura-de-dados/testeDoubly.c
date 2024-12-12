#include <stdio.h>
#include <stdlib.h>

struct sxy {
   int x;
   int y;
   struct sxy *next, *prev;
};
typedef struct sxy txy;

struct stag {
   txy *first;
   txy *last;
};

typedef struct stag ttag;

void init_lista(ttag *t)
{
	t->first=NULL;
	t->last=NULL;
}

void incluirInicio(ttag *tag,int x, int y)
{
   txy *p;

   // Aloca a memória e atribui os valores
   p = (txy *)malloc(sizeof(txy));
   p->x = x;
   p->y = y;
   p->next = NULL;
   p->prev = NULL;

   // Se a lista estiver vazia define o elemento como o primeiro e o último da lista
   if (tag->first == NULL) {
      tag->first = p;
      tag->last = p;
      return;
   }

   // Se a lista não estiver vazia:
   tag->first->prev = p;
   p->next = tag->first;
   tag->first = p;
   return;
}

void incluirMeio(ttag *tag,int x, int y, int pos)
{
   txy *p;
   int contador = 0;

   // Aloca a memória e atribui os valores
   p = (txy *)malloc(sizeof(txy));
   p->x = x;
   p->y = y;
   p->next = NULL;
   p->prev = NULL;

   // Se a lista estiver vazia define o elemento como o primeiro e o último da lista
   if (tag->first == NULL) {
      tag->first = p;
      tag->last = p;
      return;
   }

   for (txy *aux=tag->first; aux != NULL; aux=aux->next) {
      if (contador == pos) {
         p->prev = aux->prev;
         p->next = aux;
         aux->prev->next = p;
         aux->prev = p;
         return;
      }
      contador++;
   }
   printf("Não foi possível incluir na posição %d\n", pos);
   return;
}

void incluirFim (ttag *tag,int x, int y)
{
   txy *p;

   // Aloca a memória e atribui os valores
   p = (txy *)malloc(sizeof(txy));
   p->x = x;
   p->y = y;
   p->next = NULL;
   p->prev = NULL;

   // Se a lista estiver vazia define o elemento como o primeiro e o último da lista
   if (tag->first == NULL) {
      tag->first = p;
      tag->last = p;
   }

   // Se a lista não estiver vazia:
   p->prev = tag->last; // O previous do elemento criado recebe o último elemento da lista
   tag->last->next = p; // O next do último elemento da lista recebe o elemento criado
   tag->last = p; // Atualiza para que o último elemento da lista seja o elemento criado
   return;
}

void consultar (ttag t,int x, int y)
{
	if (t.first==NULL)
	{
		return;
   }
   for (txy *aux = t.first; aux != NULL; aux=aux->next) {
      if (aux->x == x && aux->y == y) {
         printf("Ponto encontrado: (%d, %d)\n", x, y);
         return;
      }
   }
   printf("Ponto não encontrado\n");
   return;
}

void excluir (ttag *t,int x, int y)
{
	if (t->first==NULL)
	{
      return;
   }
   for(txy *aux= t->first; aux != NULL; aux=aux->next) {
      if (aux->x == x && aux->y == y) {
         if (aux->prev == NULL) {
            aux->next->prev = NULL;
            t->first = aux->next;
            free(aux);
            return;
         }
         if (aux->next == NULL) {
            aux->prev->next = NULL;
            t->last = aux->prev;
            free(aux);
            return;
         }
         aux->next->prev = aux->prev;
         aux->prev->next = aux->next;
         free(aux);
         return;
      }
   }
   return;
}

void lista_todos(ttag t)
{
   txy *aux;
	if (t.first==NULL)
	{
      return;
   }
   for(aux=t.first; aux != NULL; aux=aux->next) {
      printf("(%d,%d)\n", aux->x, aux->y);
   }
   
	return;
}

int menu()
{
    int op;
    printf("1 - Incluir\n2 - Consultar\n3 - Excluir\n4 - Listar \n5 - Incluir no meio\n0 - Finalizar\n: ");
    scanf("%d",&op);
    return op;
}
//
int main()
{
   ttag tag;
   int op, x,y;
   init_lista(&tag);
   op=menu();
   while (op!=0)
   {
      switch(op)
      {
         case 1: scanf("%d %d",&x,&y);
                 incluirInicio(&tag,x,y);
                 break;
         case 2: scanf("%d %d",&x,&y);
                 consultar(tag,x,y);
                 break;
         case 3: scanf("%d %d",&x,&y);
                 excluir(&tag,x,y);
                 break;
         case 4: lista_todos(tag);
                 break;
         case 5: scanf("%d %d", &x, &y);
                 incluirMeio(&tag, x, y, 2);
                 break;
      }
      op=menu();
   }
}
