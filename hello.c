#include "headers.h"
#include <stddef.h>

void Greeting() {
  int fd;
  fd= open("foo", O_WRONLY | O_CREAT, 0644);
  ec_debug_logger_init("a");
  if (fd < 0) {
    ec_debug_log(LOG_ERR, "Err: permission denied", NULL);
    return;
  }
  write(fd, "hello world", 11);
  close(fd);
}
