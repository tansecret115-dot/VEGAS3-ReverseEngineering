/* Module: vegas30k.dll
   Function: cdr_ToBCD
   Address: 01099d90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_ToBCD(unsigned char *,unsigned int) */

long cdr_ToBCD(uchar *param_1,uint param_2)

{
                    /* 0x99d90  607  ?cdr_ToBCD@@YGJPAEI@Z */
  if (param_1 == (uchar *)0x0) {
    return -0x7fffbffd;
  }
  *param_1 = (char)(param_2 / 10) << 4 | (byte)((ulonglong)param_2 % 10);
  return 0;
}


