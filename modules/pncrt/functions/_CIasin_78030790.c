/* Module: pncrt.dll
   Function: _CIasin
   Address: 78030790
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIasin(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30790  57  _CIasin */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_780307ad(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


