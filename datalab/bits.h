/* Copyright (C) 1991-2022 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
int bitAnd(int, int);
int test_bitAnd(int, int);
int getByte(int, int);
int test_getByte(int, int);
int logicalShift(int, int);
int test_logicalShift(int, int);
int bitCount(int);
int test_bitCount(int);
int bang(int);
int test_bang(int);
int tmin();
int test_tmin();
int fitsBits(int, int);
int test_fitsBits(int, int);
int isLessOrEqual(int, int);
int test_isLessOrEqual(int, int);
int leastBitPos(int);
int test_leastBitPos(int);
int divpwr2(int, int);
int test_divpwr2(int, int);
int negate(int);
int test_negate(int);
int isAsciiDigit(int);
int test_isAsciiDigit(int);
int isPositive(int);
int test_isPositive(int);
int ilog2(int);
int test_ilog2(int);
