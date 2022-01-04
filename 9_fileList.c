


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

void main(int argc, char **argv) {

  ec_debug_logger_init("a");
  int size;
  int fd;
  struct stat sb;
  struct dirent *ptr;
  char *modtime;
  //dp= opendir("../../DevTestingProg/dev_training");
  if(-1 == (fd = open(argv[1] , O_RDONLY))) {
    ec_debug_log(LOG_ERR, "Err: unable to open the file", NULL);
    return;
  }

  if(-1 == (size = lseek(fd, 0, SEEK_END))) {
    ec_debug_log(LOG_ERR, "Err: unable to set the file offset", NULL);
    return;
  }
  ec_debug_log(LOG_INFO, "size : %d", size);
  char ch[size];





    if(-1 == stat(argv[1], &sb)) {
      ec_debug_log(LOG_ERR, "Err: unable to get the file status", NULL);   ///pf("unable to get");
      return;
    }
    modtime = ctime(&sb.st_mtime);
    modtime[strlen(modtime) - 1] = '\0';  ///ctime() string has newline at end..to remove it

    struct passwd *pws;
    pws = getpwuid(sb.st_uid);
    ec_debug_log(LOG_INFO, "%c%c%c%c%c%c%c%c%c %ju %-8.8s %-8.8s %8ld %s %s", (sb.st_mode & S_IRUSR) ? 'r' : '-' , (sb.st_mode & S_IWUSR) ? 'w' : '-' , (sb.st_mode & S_IXUSR) ? 'x' : '-' , (sb.st_mode & S_IRGRP) ? 'r' : '-' , (sb.st_mode & S_IWGRP) ? 'w' : '-' , (sb.st_mode & S_IXGRP) ? 'x' : '-' , (sb.st_mode & S_IROTH) ? 'r' : '-' , (sb.st_mode & S_IWOTH) ? 'w' : '-' , (sb.st_mode & S_IXOTH) ? 'x' : '-', sb.st_nlink , pws->pw_name, pws->pw_name, sb.st_size, modtime, argv[1]);




  if(-1 == close(fd)) {
    ec_debug_log(LOG_ERR, "Err: unable to close the file", NULL);
    return;
  }


}






