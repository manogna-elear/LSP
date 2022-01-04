/*===================================================================================*/
/*************************************************************************************/
/**
 * @file      copy-_standard.c
 * @brief     copy_standard template code
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


void copy_standard() {

  FILE *src, *des;
  char ch[80];
  int count;
  ec_debug_logger_init("a");

  if (NULL == (src = fopen("foo" , "r"))) {
    ec_debug_log(LOG_ERR, "Err: no such file", NULL);
    return;
  }


  if (NULL == (des = fopen("bar" , "w"))) {
    ec_debug_log(LOG_ERR, "Err: permission denied", NULL);
    return;
  }

  while ((count = fread(ch, 1, 80, src)) > 0) {

    if(0 == fwrite(ch, 1, count, des)) {
      ec_debug_log(LOG_ERR, "Err: error while doing fwrite", NULL);
      return;
    }

  }


  if(EOF == fclose(src)) {
    ec_debug_log(LOG_ERR, "Err: fatal error while closing the src file", NULL);
    return;
  }

  if(EOF == fclose(des)) {
    ec_debug_log(LOG_ERR, "Err: fatal error while closing the tar file", NULL);
    return;
  }
}
