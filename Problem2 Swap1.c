do 
{ 
waiting [i] = TRUE; 
key = TRUE; // key is local to Pi 
while (waiting[i] && key)
 swap(&lock, &key); 
waiting [i] = FALSE; // Execute in Critical Section
 j = (i+1)%n; //select next process
 while (j!=i && !waiting[i]) 
