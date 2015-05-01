/* Test the `vshll_ns8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vshll_ns8 (void)
{
  int16x8_t out_int16x8_t;
  int8x8_t arg0_int8x8_t;

  out_int16x8_t = vshll_n_s8 (arg0_int8x8_t, 1);
}

/* { dg-final { scan-assembler "vshll\.s8\[ 	\]+\[qQ\]\[0-9\]+, \[dD\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
