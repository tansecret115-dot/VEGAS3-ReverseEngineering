/* Module: pncrt.dll
   Function: _CIsqrt
   Address: 78030ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIsqrt(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30ed0  69  _CIsqrt */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_78030eed(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


