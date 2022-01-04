
/*===================================================================================*/
/*************************************************************************************/
/**
 * @file      headers.h
 * @brief     Boilerplate template code
 * @details   An example structure of the file to be used for code development
 *            at Elear Solutions
 * @see
 * @author    G.Manogna, manognareddy@elear.solutions
 * @copyright Copyright (c) 2017 Elear Solutions Tech Private Limited. All rights
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


/*************************************************************************************
 *                          INCLUDES                                                 *
 *************************************************************************************/
  #include <fcntl.h>
  #include <stdlib.h>
  #include <unistd.h>
  #include <stdio.h>
  #include <unistd.h>
  #include <sys/wait.h>
  #include <sys/mman.h>
  #include <sys/stat.h>
  #include <time.h>
  #include <dirent.h>
  #include <string.h>
  #include <pwd.h>

  #include "../../elearcommon/logger.h"
  #include "../../elearcommon/allocate.h"
  #include "../../elearcommon/util.h"
  #include "../../DevTestingProg/dev_training/randomAccess.h"
  #include "../../DevTestingProg/dev_training/hello.h"
  #include "../../DevTestingProg/dev_training/copy.h"
  #include "../../DevTestingProg/dev_training/copy_standard.h"
  #include "../../DevTestingProg/dev_training/bufio.h"
  #include "../../DevTestingProg/dev_training/rawio.h"
  #include "../../DevTestingProg/dev_training/fork.h"
  #include "../../DevTestingProg/dev_training/7_mmap.h"
    #include "../../DevTestingProg/dev_training/8_timeStampFile.h"


/*************************************************************************************
 *                          GLOBAL MACROS                                            *
 *************************************************************************************/

/*************************************************************************************
 *                          GLOBAL TYPEDEFS                                          *
 *************************************************************************************/

/*************************************************************************************
 *                          GLOBAL VARIABLES                                         *
                                                                                                                                        *************************************************************************************/

/*************************************************************************************
 *                          PUBLIC FUNCTIONS                                         *
 *************************************************************************************/
/********************************************//**
 * @brief   Boilerplate API function
 * @details This function is an example private function that prints out the input
 *          string and returns the number of characters printed
 * @param   toExclaim: pointer to the string to exclaim
 * @return  int: number of characters exclaimed
 ***********************************************/

