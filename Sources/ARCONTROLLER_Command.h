/*
    Copyright (C) 2014 Parrot SA

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the 
      distribution.
    * Neither the name of Parrot nor the names
      of its contributors may be used to endorse or promote products
      derived from this software without specific prior written
      permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
    "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
    LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
    FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
    COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
    INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
    OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
    AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
    OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
    OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
    SUCH DAMAGE.
*/

/**
 * @file ARController_Command.h
 * @brief Command controller allow !!!!! TODO.
 * @date 02/03/2015
 * @author maxime.maitre@parrot.com
 */

#ifndef _ARCONTROLLER_COMMAND_PRIVATE_H_
#define _ARCONTROLLER_COMMAND_PRIVATE_H_

#include <libARSAL/ARSAL_Socket.h>
#include <libARSAL/ARSAL_Mutex.h>

#include <libARController/ARCONTROLLER_Error.h>
#include <libARController/ARCONTROLLER_Command.h>

#define ARCONTROLLER_COMMAND_TAG "ARCONTROLLER_COMMAND"
#define ARCONTROLLER_COMMAND_CALLBACKS_CAPACITY_DEFAULT 1

/**
 * @brief 
 */
typedef struct ARCONTROLLER_COMMAND_CALLBAK_LIST_ELEMENT_t ARCONTROLLER_COMMAND_CALLBAK_LIST_ELEMENT_t;

struct ARCONTROLLER_COMMAND_CALLBAK_LIST_ELEMENT_t
{
    ARCONTROLLER_FEATURE_DICTIONARY_CALLBACK_t callback; /**< callback used when the command is decoded. */
    void *customData;  /**< custom data given as parameter to the callback. */
    
    ARCONTROLLER_COMMAND_CALLBAK_LIST_ELEMENT_t *next;
    ARCONTROLLER_COMMAND_CALLBAK_LIST_ELEMENT_t *prev;
};

/**
 * @brief Command controller allow to !!!!!TODO.
 */
struct ARCONTROLLER_Command_t
{
    int commandKey; /**< Key associates to the command */
    ARCONTROLLER_COMMAND_CALLBAK_LIST_ELEMENT_t *callbacks; /**< array of the callback used when the command is decoded. */
    
    UT_hash_handle hh; /**< makes this structure hashable. */
};

#endif /* _ARCONTROLLER_COMMAND_PRIVATE_H_ */
