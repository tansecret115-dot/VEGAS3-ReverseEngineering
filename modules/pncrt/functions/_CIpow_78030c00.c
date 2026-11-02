/* Module: pncrt.dll
   Function: _CIpow
   Address: 78030c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIpow(void)

{
  float10 in_ST0;
  float10 in_ST1;
  
                    /* 0x30c00  66  _CIpow */
  FUN_78030c22(SUB84((double)in_ST1,0),(int)((ulonglong)(double)in_ST1 >> 0x20),
               SUB84((double)in_ST0,0));
  return;
}


