/* Module: pncrt.dll
   Function: _CIcos
   Address: 78030920
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIcos(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30920  60  _CIcos */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_7803093d(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
  return;
}


