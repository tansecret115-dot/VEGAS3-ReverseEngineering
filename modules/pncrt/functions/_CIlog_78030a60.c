/* Module: pncrt.dll
   Function: _CIlog
   Address: 78030a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void _CIlog(void)

{
  float10 in_ST0;
  double dVar1;
  
                    /* 0x30a60  64  _CIlog */
  dVar1 = (double)in_ST0;
  FUN_780346e8(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  FUN_78030a7d(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  return;
}


