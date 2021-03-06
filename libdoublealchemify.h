#define MAJOR_VERSION 1
#define MINOR_VERSION 0
  
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>

#define DIE(m) { fprintf(stderr, "Fatal error: " m "\n"); return(-1); }
#define FREE_AND_DIE(p,m) { free(p); fprintf(stderr, "Fatal error: " m "\n"); return(-1); }
#define CLOSE_AND_DIE(f,m) { fclose(f); fprintf(stderr, "Fatal error: " m "\n"); return(-1); }
#define CLEANUP_AND_DIE(p,f,m) { free(p); fclose(f); fprintf(stderr, "Fatal error: " m "\n"); return(-1); }


#define	MAX_GROUP_SIZE	16384

/* Public functions */
int readPDB(char *pdb, char col, int *initialone, int *finalone, int *initialtwo, int *finaltwo, int *nInitialOne, int *nFinalOne, int *nInitialTwo, int *nFinalTwo);
int process(FILE *in, FILE *out, int natom, int *initialone, int *finalone, int *initialtwo, int *finaltwo, int nInitialOne, int nFinalOne, int nInitialTwo, int nFinalTwo);

