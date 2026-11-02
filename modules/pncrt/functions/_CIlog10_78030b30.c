/* Module: pncrt.dll
   Function: _CIlog10
   Address: 78030b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIlog10(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30b30  65  _CIlog10 */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_78030b4d(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


