

/*===================================================================================*/
/*************************************************************************************/
/**
 * @file      boilerplate.c
 * @brief     Boilerplate template code
 * @details   An example structure of the file to be used for code development
 *            at Elear Solutions
 * @see
 * @author    Manav Kumar Mehta, manav@elear.solutions
 * @copyright Copyright (c) 2019 Elear Solutions Tech Private Limited. All rights
 *            reserved.
 * @license   To any person (the "Recipient") obtaining a copy of this software and
 *            associated documentation files (the "Software"):\n
 *            All information contained in or disclosed by this software is
 *            confidential and proprietary information of Elear Solutions Tech
 *            Private Limited and all rights therein are expressly reserved.
 *            By accepting this material the recipient agrees that this material and
 *            the information contained therein is held in confidence and in trust
 *            and will NOT be used, copied, modified, merged, published, distributed,
 *            sublicensed, reproduced in whole or in part, nor its contents revealed
 *            in any manner to others without the express written permission of
 *            Elear Solutions Tech Private Limited.
 */
/*************************************************************************************/
/*===================================================================================*/
#include "headers.h"

/*************************************************************************************
 *                          LOCAL MACROS                                             *
 *************************************************************************************/

/*************************************************************************************
 *                          LOCAL TYPEDEFS                                           *
 *************************************************************************************/

/*************************************************************************************
 *                          LOCAL PROTOTYPES                                         *
 *************************************************************************************/


/*************************************************************************************
 *                          GLOBAL VARIABLES                                         *
 *************************************************************************************/

/*************************************************************************************
 *                          LOCAL VARIABLES                                          *
 *************************************************************************************/

/*************************************************************************************
 *                          PRIVATE FUNCTIONS                                        *
 *************************************************************************************/
/**************************************************************************************************
Name        : example_helper
Input(s)    : toExclaim: pointer to the string to exclaim
Output(s)   : int: number of characters exclaimed
Description : This function is an example private function that prints out the input
              string and returns the number of characters printed
***************************************************************************************************/


/*************************************************************************************
 *                          PUBLIC FUNCTIONS                                         *
 *************************************************************************************/
/*************************************************************************************
 * Refer to the header file for a detailed description                               *


/*************************************************************************************
 * Refer to the header file for a detailed description                               *
 *************************************************************************************/

struct rec {
  int id;
  char name[80];
};

void mmap_file() {

int fd;
struct rec *record; ///pointer to an array of records
int size;

  if(-1 == (fd = open("bar" , O_RDWR))) {
    ec_debug_log(LOG_ERR, "Err: unable to open the file", NULL);
    return;
  }

   /////size is used to get the size of file
  if(-1 == (size = lseek(fd, 0, SEEK_END))) {
    ec_debug_log(LOG_ERR, "Err: unable to set the file offset", NULL);
    return;
  }

   //fd = open("bar" , O_RDWR);
   //size = lseek(fd, 0, SEEK_END);
   ec_debug_log(LOG_INFO, "size = %d", size);
  if(((void *) -1) == (record = (struct rec *)mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd,0))) {
     ec_debug_log(LOG_ERR, "Err: MAP_FAILED", NULL);
     return;
  }

    //record = (struct rec *)mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);

  record[0].id= 99;

  ec_debug_log(LOG_INFO, "id : %d name : %s", record[0].id, record[1].name);

  if(-1 == msync(record, size, MS_SYNC)) {
    ec_debug_log(LOG_ERR, "Err: synchronize a file with a memory map is failed", NULL);
    return;
  }

  ec_cleanup_and_exit;
}







