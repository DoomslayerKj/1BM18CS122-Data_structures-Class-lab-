#include<stdio.h>
#include<stdlib.h>
#define MAX 3

void enqueue(int q[], int *f, int *r);
void dequeue(int q[], int *f, int *r);
void display(int q[], int *f, int *r);

void main(){
	int q[MAX], f=0, r=-1, choice, ele;
	f:
	do{
	printf("\n 1. Enqueue2. Dequeue 3. Display 4. Exit\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			enqueue(q, &f, &r);
			break;
		case 2:
			dequeue(q, &f, &r);
			break;
		case 3:
			display(q, &f, &r);break;
	    case 4:printf("\nExiting..\n");exit(69);break;
			break;
			default:printf("\n wrong choice ,try again \n");goto f;
	}
	}while(choice>=1&&choice<=3);
	
}

void enqueue(int q[], int *f, int *r){
	int ele;
	if((*r == MAX-1 && *f == 0)||(*r == (*f)-1 && *f>0)){
	        
			printf("QUEUE FULL\n");
		
	}
	
	    
    else{
    	
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
			printf("\t%d\n", q[i]);
		}
		for(j=*f; j<=MAX-1; j++){
			printf("\t%d\n", q[j]);
		}
	}
	else{
		for(i=*f; i<=*r;i++){
			printf("%d\n", q[i]);
		}
	}
}
