#include <stdio.h> 
#include <stdlib.h> 

struct node 
{ 
   int data; 
   struct node *new;
};

struct Node *createNode(int n)
{
   struct node *newest;
   newest = (struct node *)malloc(sizeof(struct node));
   newest-> data = n;
   newest-> new = NULL;
   return newest;
}

void sortingList(struct node **bignew, struct node *whatnew)
{
   struct node *tmp;
   if( *bignew == NULL || (*bignew) -> data >= whatnew -> data)
   {
      whatnew -> new = *bignew;
      *bignew = whatnew;
   }
   else
   { 
      tmp = *bignew;
      while( tmp -> new != NULL && ( tmp -> new) -> data < (whatnew -> data))
      {
         tmp = tmp -> new;
      }
      whatnew -> new = tmp -> new;
      tmp -> new = whatnew;
   }
}

void printList(struct node *bignew)
{
   struct node *tmp;
   for( tmp = bignew; tmp ;tmp = tmp -> new )
   {
      printf("%d ",tmp -> data);
   }
}
int main()
{
   int num;
   struct node *bignew = NULL, *whatnew;

   while ( scanf("%d",&num) == 1 )
{
      if(num <= -1)
      {
         break;
      }
      whatnew = createNode(num);
      sortingList(&bignew , whatnew);
      }
      printList(bignew);
}