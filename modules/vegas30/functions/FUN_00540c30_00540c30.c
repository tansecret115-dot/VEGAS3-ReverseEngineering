/* Module: vegas30.exe
   Function: FUN_00540c30
   Address: 00540c30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540c30(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return -0x7ff8ffa9;
  }
  FUN_005b83b0(param_1,1);
  iVar1 = _SfList_CreateExZ_32(param_1 + 0x228,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  if (-1 < iVar1) {
    iVar1 = _SfList_CreateExZ_32(param_1 + 0x22c,4,0xffffffff,0xffffffff,0x40000002,0,0,0);
  }
  FUN_005b84d0(param_1,1);
  return iVar1;
}


