while(EOWNERDEAD==pthread_mutex_lock(&mutex)) {  
    pthread_mutex_consistent(&mutex);  
    pthread_mutex_unlock(&mutex);  
}  
while(global_count<=0) {  
    pthread_cond_wait(&cond, &mutex);  
}  
global_count--;  
pthread_mutex_unlock(&mutex); 