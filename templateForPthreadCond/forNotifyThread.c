while(EOWNERDEAD==pthread_mutex_lock(&mutex)) {  
    pthread_mutex_consistent(&mutex);  
    pthread_mutex_unlock(&mutex);  
}  
global_count++;  
pthread_cond_signal(&cond);  
pthread_mutex_unlock(&mutex); 