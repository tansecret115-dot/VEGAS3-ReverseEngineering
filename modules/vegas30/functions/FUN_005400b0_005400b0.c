/* Module: vegas30.exe
   Function: FUN_005400b0
   Address: 005400b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005400b0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar2 = -0x7ff8ffa9;
  }
  else {
    iVar1 = _SfList_FindSpecificItemRange_16(param_1,0,0xffffffff,param_2);
    if (iVar1 < 0) {
      return -0x7ffb1ff6;
    }
    iVar2 = FUN_00540110(param_2,param_3);
    if (-1 < iVar2) {
      iVar2 = _SfList_DeleteList_16(param_1,iVar1,1,0);
      return iVar2;
    }
  }
  return iVar2;
}


