 swap(&lock, &key); 
waiting [i] = FALSE; // Execute in Critical Section
 j = (i+1)%n; //select next process
 while (j!=i && !waiting[i]) 
j = (j+1)%n; 
if (j==i) lock = FALSE; 
else waiting [j] = FALSE; // Execute in remainder section 
}while (TRUE);
