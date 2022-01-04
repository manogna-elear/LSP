/*===================================================================================*/
/*************************************************************************************/
/**
 * @file      copy.c
 * @brief     copy template code
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
 *************************************************************************************/


/*************************************************************************************
 * Refer to the header file for a detailed description                               *
 *************************************************************************************/


void copies_contents() {

  int srcFileDesc, tarFileDes, count;
  char ch[80];

  ec_debug_logger_init("a");

  if(-1 == (srcFileDesc = open("foo", O_RDONLY))) {

    ec_debug_log(LOG_ERR, "Err: no such file", NULL);
    return;

  }

  if(-1 == (tarFileDes = open("bar", O_WRONLY | O_CREAT | O_TRUNC, 0644))) {

    ec_debug_log(LOG_ERR, "Err: no such file", NULL);
    return;
  }


  while((count = read(srcFileDesc, ch, 80))) {

    if(-1 == write(tarFileDes, ch, count)) {
      ec_debug_log(LOG_ERR, "Err: Data didn't written into the target file", NULL);
    return;
    }

  }

  if(-1 == close(srcFileDesc)) {
    ec_debug_log(LOG_ERR, "Err: unable to close the srcFileDesc", NULL);
    return;
  }

  if(-1 == close(tarFileDes)) {
    ec_debug_log(LOG_ERR, "Err: unable to close the tarFileDesc", NULL);
    return;
  }
}
