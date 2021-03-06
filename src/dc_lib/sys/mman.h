#ifndef DC_SYS_MMAN_H
#define DC_SYS_MMAN_H


/*
 * Copyright 2020 D'Arcy Smith + the BCIT CST Datacommunications Option students.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "../error.h"
#include <sys/stat.h>


int dc_shm_open(const char *name, int oflag, mode_t mode);
int dc_shm_open_error(dc_errno_handler handler, const char *name, int oflag, mode_t mode);


#endif
