#include<stdio.h>
#define MAX 3

void enqueue(int q[], int *f, int *r);
void dequeue(int q[], int *f, int *r);
void display(int q[], int *f, int *r);

void main(){
	int q[MAX], f=0, r=-1, choice, ele;
	do{
	printf("\n 1. Enqueue2. Dequeue 3. Display 5. Exit\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			enqueue(q, &f, &r);
			break;
		case 2:
			dequeue(q, &f, &r);
			break;
		case 3:
			display(q, &f, &r);
			break;
	}
	}while(choice !=5);
	
}

void enqueue(int q[], int *f, int *r){
	int ele;
	if((*r == MAX-1 && *f == 0)||(*r == (*f)-1 && *f>0)){
	        printf("%d, %d\n", *r, *f);
			printf("QUEUE FULL\n");
		
	}
	
	    
    else{
    	printf("%d, %d\n", *r, *f);
        printf("ENTER THE ELEMENT TO INSERT\n");
	    scanf("%d", &ele);
	    
    	if(*r==MAX-1 && *f >0){
    		*r=0;
		    q[*r] = ele;
    	}
    	
    	else{
    		if((*f==0&&*r==-1)||(*r!=*f-1)){
    			q[++(*r)] = ele;
    		}
    	}    	
	    
    }
		
}	
	


void dequeue(int q[], int *f, int *r){
	if((*f==0)&&(*r==-1)){
		printf("QUEUE EMPTY\n");
	}	
	if(*f==*r){
		printf("%d", q[*f]);
		*r=-1;
		*f=0;
		
	}
	else{
		if(*f==MAX -1){
			printf("%d", q[*f]);
			*f = 0;
			
		}
		else {
			printf("%d", q[(*f)++]);
		}
	}
}

void display(int q[], int *f, int *r){
	int i, j;
	if(*f==0&&*r==-1){
		printf("QUEUE EMPTY");
	}
	if(*f>*r){
		for(i=0; i<=*r; i++){
			printf("\t%d", q[i]);
		}
		for(j=*f; j<=MAX-1; j++){
			printf("\t%d", q[j]);
		}
	}
	else{
		for(i=*f; i<=*r;i++){
			printf("%d", q[i]);
		}
	}
}
