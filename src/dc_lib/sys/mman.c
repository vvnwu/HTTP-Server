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
#include "mman.h"
#include <errno.h>
#include <sys/mman.h>


int dc_shm_open(const char *name, int oflag, mode_t mode)
{
    return dc_shm_open_error(dc_handle_error, name, oflag, mode);
}


int dc_shm_open_error(dc_errno_handler handler, const char *name, int oflag, mode_t mode)
{
    int status;
    
    status = shm_open(name, oflag, mode);
    
    if(status < 0)
    {
        if(handler)
        {
            handler("shm_open", __FILE__, __LINE__, errno);
        }
    }
    
    return status;
}