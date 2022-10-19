#include "stack.h"
#include "stdlib.h"
#include "assert.h"

void initialize(stack* s){
  //implement initialize here
  s->head = NULL;

}

void push(int x, stack* s){
    //implement push here
    if (s->head == NULL)
    {
      s->head= (node *) malloc(sizeof(node));
      s->head->next = NULL;
      s->head->data = x;
    }
    else
    {
      node *temp = s->head;
  
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    
    temp->next = (node *) malloc(sizeof(node));
    temp->next->next = NULL;
    temp->next->data = x;
    }
}

int pop(stack* s){
    // implement pop here
    assert(s->head != NULL);

    node *temp = s->head;
    node *beforetemp;
  
    while (temp->next != NULL)
    {
      beforetemp = temp;
      temp = temp->next;
    }

    int y = temp->data;
    if (temp == s->head)
      s->head = NULL;
    else
      beforetemp->next = NULL;
    free(temp);
  return y;
}

bool empty(stack* s)
{
  //implement empty here
  if (s->head == NULL)
    return true;
  return false;
}

bool full(stack* s) {
    //implement full here
    // In this case the list is infinitely big :D
  return false;
}
