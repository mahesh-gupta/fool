#ifndef _PARAMS_H_
#define _PARAMS_H_

// The FUSE API has been changed a number of times.  So, our code
// needs to define the version of the API that we assume.  As of this
// writing, the most current API version is 26
#define FUSE_USE_VERSION 26

// need this to get pwrite().  I have to use setvbuf() instead of
// setlinebuf() later in consequence.
#define _XOPEN_SOURCE 500

// maintain foolfs state in here
#include <limits.h>
#include <stdio.h>
struct fool_state {
    FILE *logfile;
    char *hdd;
    char *ssd;
    char *mnt;
};
#define Fool_DATA ((struct fool_state *) fuse_get_context()->private_data)

#endif
