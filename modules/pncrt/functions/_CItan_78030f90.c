/* Module: pncrt.dll
   Function: _CItan
   Address: 78030f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CItan(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30f90  70  _CItan */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_78030fad(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


