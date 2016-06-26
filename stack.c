#define MAXITEMS 6
typedef struct{
	int top;
	int items[MAXITEMS];
}stack;

void push(stack *, int);
int pop(stack *);

void push (stack *s, int x)
{
	if(MAXITEMS-1 == (s->top)){
	printf("Stack overflow");
	}
	else{
			++(s->top);
		s->items [s->top]=x;
		
	}
}

int main(){
	stack s;
	s.top =-1;
	push(&s, 3);
	push(&s, 6);
	push(&s, 8);
	push(&s, 1);
	push(&s, 4);
	push(&s, 9);
	push(&s, 1);
	printf("\n%d",pop(&s));
	printf("\n%d",pop(&s));
		printf("\n%d",pop(&s));
	printf("\n%d",pop(&s));
		printf("\n%d",pop(&s));
	printf("\n%d",pop(&s));
		printf("\n%d",pop(&s));
	printf("\n %d \n",pop(&s));
	
}
int pop(stack *s)
{
	if(s->top <0){
			printf("\nStack Underflow");
			exit(0);
	}
	else
	{
	return s->items [s->top--];
		}
}
