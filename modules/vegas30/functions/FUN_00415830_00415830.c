/* Module: vegas30.exe
   Function: FUN_00415830
   Address: 00415830
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415830(int param_1)

{
  int iVar1;
  
  iVar1 = _SfList_CreateExZ_32(param_1 + 0x88,4,0x10,0x10,0,0,0,0);
  if (iVar1 < 0) {
    return -1;
  }
  iVar1 = _SfList_CreateExZ_32(param_1 + 0x8c,0x48,2,1,4,0,0,0);
  return (-1 < iVar1) - 1;
}


