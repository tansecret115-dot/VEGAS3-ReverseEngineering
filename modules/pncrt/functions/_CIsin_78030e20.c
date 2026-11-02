/* Module: pncrt.dll
   Function: _CIsin
   Address: 78030e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIsin(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30e20  67  _CIsin */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_78030e3d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


