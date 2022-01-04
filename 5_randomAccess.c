/*===================================================================================*/
/*************************************************************************************/
/**
 * @file      randonAccess.c
 * @brief     rawio template code
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
#include <stddef.h>

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
 *************************************************************************************/


/*************************************************************************************
 * Refer to the header file for a detailed description                               *
 *************************************************************************************/




struct st {
  int id;
  char name[80];
}rec;

void random_access() {

  int fd, size;
  size = sizeof(rec);


  if(-1 == (fd = open("datafile" , O_RDWR))) {
    ec_debug_log(LOG_ERR, "Err: unable to open the file", NULL);
    return;
  }


  if(-1 == lseek(fd, size, SEEK_SET)) {
    ec_debug_log(LOG_ERR, "Err: unable to set the file offset", NULL);
    return;
  }

  if(read(fd, &rec, size) < 0) {
    ec_debug_log(LOG_ERR, "Err: unable to read the file", NULL);
    return;
  }

  rec.id = 150;

  if(-1 == lseek(fd, -size, SEEK_CUR)) {
    ec_debug_log(LOG_ERR, "Err: unable to set the file offset", NULL);
    return;
  }

  if(-1 == write(fd, &rec, size)) {
    ec_debug_log(LOG_ERR, "Err: unable to write the data", NULL);
    return;
  }

  if(-1 == close(fd)) {
    ec_debug_log(LOG_ERR, "Err: failure status", NULL);
    return;
  }

}
