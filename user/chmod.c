#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"

int main(int argc, char *argv[]) {
  if (argc != 3) {
    fprintf(2, "Usage: chmod <mode> <path>\n");
    exit(1);
  }
  int mode = atoi(argv[1]);
  if (chmod(argv[2], mode) < 0) {
    fprintf(2, "chmod: %s failed to change mode to %d\n", argv[2], mode);
    exit(1);
  }
  exit(0);
}