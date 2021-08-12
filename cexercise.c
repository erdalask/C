#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define total_processes 20
#define processor_count 4

int process_ETs[20];

struct processor{
	int proc_ETs[5];
	int proc_id;
};

void* process (void *args){
	 
    struct processor *p = (struct processor*)args;
        
    int i,j;
    for(i = 0; i < 5; i++)
    {
    	int executionTime = (*p).proc_ETs[i];
    	for(j = executionTime; j >= 0; j--)
	    {
	    	printf("Process %d from Processor %d has Remaining %d ET.\n", i + 1, (*p).proc_id, j);
    		usleep(j * 1000);
	    }
    	
	}
    
    printf("Processor %d has completed all assigned processes.\n", (*p).proc_id);
    
    
    return NULL;
}


int main(void) {
	
	int i,j,k;
	struct processor p[4];
	pthread_t thread_id[4];
	
	for(i = 0; i < 20; i++){
		process_ETs[i] = (i % 4)+1;
 	}
 	
	
	for(j = 0; j < 4; j++){		
		p[j].proc_id = j+1;
		
		for(k = 0; k < 5; k++)
		{
			p[j].proc_ETs[k] = process_ETs[(j*5)+k];
		}
		
	    pthread_create(&thread_id[j], NULL, process, (void*) &p[j]);   
	}
	
	for(j = 0; j < 4; j++){		
		pthread_join(thread_id[j], NULL);
	    
	}
	

	usleep(100);
    printf("DONE.\n");
	return 0;
}
