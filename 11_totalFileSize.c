

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
#include <dirent.h>

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

void main() {
  ec_debug_logger_init("a");
  long totalCount=0;
  DIR *dp;
  struct stat sb;
  struct dirent *ptr;
  //dp= opendir("../../DevTestingProg/dev_training");
  if(NULL == (dp= opendir("."))) {
    ec_debug_log(LOG_ERR, "Err: unable to open the directory", NULL);
    return;
  }
  if(NULL == (ptr = readdir(dp))) {
    ec_debug_log(LOG_ERR, "Err: unable to read the directory", NULL);
    return;
  }
  while((ptr = readdir(dp)) != NULL) {
    ////to read the files from the  current directory
    if(-1 == stat(ptr->d_name, &sb)) {
      ec_debug_log(LOG_ERR, "Err: unable to get the file status", NULL);
      return;
    }

    totalCount = totalCount + sb.st_size;
  }
  ec_debug_log(LOG_INFO, "TotalCount: %d", totalCount);


  if(-1 == closedir(dp)) {
    ec_debug_log(LOG_ERR, "Err: unable to close the directory", NULL);
    return;
  }

}





