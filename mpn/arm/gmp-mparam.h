/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 1999, 2000, 2001, 2002, 2003 Free Software
Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
MA 02110-1301, USA. */

#define BITS_PER_MP_LIMB 32
#define BYTES_PER_MP_LIMB 4

/* 1.2 GHz ARM Feroceon */

/* Generated by tuneup.c, 2009-06-02, gcc 4.1 */

#define MUL_KARATSUBA_THRESHOLD          36
#define MUL_TOOM3_THRESHOLD             125
#define MUL_TOOM4_THRESHOLD             280
#define MUL_TOOM7_THRESHOLD             306

#define SQR_BASECASE_THRESHOLD           12
#define SQR_KARATSUBA_THRESHOLD          80
#define SQR_TOOM3_THRESHOLD             197
#define SQR_TOOM4_THRESHOLD             490
#define SQR_TOOM7_THRESHOLD             552

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD             140
#define MULLOW_MUL_N_THRESHOLD          517

#define DIV_SB_PREINV_THRESHOLD           0  /* preinv always */
#define DIV_DC_THRESHOLD                134
#define POWM_THRESHOLD                  236

#define GCD_ACCEL_THRESHOLD              21
#define GCDEXT_THRESHOLD                  8
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD           0  /* preinv always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* preinv always */
#define USE_PREINV_MOD_1                  1  /* preinv always */
#define DIVREM_2_THRESHOLD                0  /* preinv always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always */

#define GET_STR_DC_THRESHOLD             25
#define GET_STR_PRECOMPUTE_THRESHOLD     43
#define SET_STR_THRESHOLD              7764

#define MUL_FFT_TABLE  { 400, 1120, 1408, 3584, 10240, 40960, 163840, 655360, 0 }
#define MUL_FFT_MODF_THRESHOLD          416
#define MUL_FFT_THRESHOLD              7168

#define SQR_FFT_TABLE  { 464, 1120, 1408, 3584, 10240, 40960, 163840, 655360, 0 }
#define SQR_FFT_MODF_THRESHOLD          312
#define SQR_FFT_THRESHOLD              3840

/* Tuneup completed successfully, took 105 seconds */

