/*===================================================================================*/
/*************************************************************************************/
/**
 * @file      main.c
 * @brief     main template code
 * @details   An example structure of the file to be used for code development
 *            at Elear Solutions
 * @see
 * @author    Gajjala Manogna manognareddy@elear.solutions
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
#include "hello.h"
#include "copy.h"
#include "copy_standard.h"
#include "rawio.h"
#include "bufio.h"
#include "randomAccess.h"
#include "fork.h"

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


void main() {
  ec_debug_logger_init("a");
  int ch;
  while(1) {
    ec_debug_log(LOG_INFO, "Input: Enter the choice = ", NULL);
    scanf("%d", &ch);

    switch(ch) {
      case 1: Greeting();
                break;

      case 2: copies_contents();
                break;

      case 3: copy_standard();
                break;

      case 4: rawio();
               break;

      case 5: bufio();
            break;

      case 6: random_access();
               break;

      case 7: fork1_pid();
               break;

      default: ec_debug_log(LOG_ERR, "Err: invalid input", NULL);
                break;
    }
  }
}
