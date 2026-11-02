/* Module: vegas30k.dll
   Function: cdr_FromBCD
   Address: 01099d50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdr_FromBCD(unsigned char *,unsigned int) */

long cdr_FromBCD(uchar *param_1,uint param_2)

{
                    /* 0x99d50  597  ?cdr_FromBCD@@YGJPAEI@Z */
  if (param_1 == (uchar *)0x0) {
    return -0x7fffbffd;
  }
  *param_1 = (char)((param_2 & 0xff) >> 4) * '\n' + ((byte)param_2 & 0xf);
  return 0;
}


