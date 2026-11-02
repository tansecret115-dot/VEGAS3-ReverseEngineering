/* Module: pncrt.dll
   Function: _CIacos
   Address: 780306c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIacos(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x306c0  56  _CIacos */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_780306dd(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


