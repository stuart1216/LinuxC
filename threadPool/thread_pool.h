/*
 * thread_pool.h
 *
 *  Created on: Feb 9, 2018
 *      Author: adam
 */

#ifndef THREAD_POOL_H_
#define THREAD_POOL_H_

typedef struct thread_pool *thread_pool_t;

thread_pool_t thread_pool_create(unsigned int thread_count);

void thread_pool_add_task(thread_pool_t pool, void *(*routine) (void *arg),
			  void *arg);

void thread_pool_destroy(thread_pool_t pool);

#endif /* THREAD_POOL_H_ */
