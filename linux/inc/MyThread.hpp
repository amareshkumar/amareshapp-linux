/* 
 * File:   MyThread.hpp
 * Author: akumar
 *
 * Created on 27 September, 2015, 4:58 PM
 */

#ifndef MYTHREAD_HPP
#define	MYTHREAD_HPP

#include "my_project_app.h"

//Mutex
void* showUpdatedBalance (void *null);
void thread_func_mutex ();

//condition variable
void* watch_balance (void* null);
void* update_balance_cv (void* null);
void thread_func_cond();

#endif	/* MYTHREAD_HPP */

