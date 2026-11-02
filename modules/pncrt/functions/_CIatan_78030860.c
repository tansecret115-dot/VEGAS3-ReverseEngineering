/* Module: pncrt.dll
   Function: _CIatan
   Address: 78030860
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIatan(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30860  58  _CIatan */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_7803087d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


