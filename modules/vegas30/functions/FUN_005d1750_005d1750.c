/* Module: vegas30.exe
   Function: FUN_005d1750
   Address: 005d1750
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005d1750(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005d1700(param_1,param_2,param_3);
  if (iVar1 != 0) {
    FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
    if (param_3 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x234);
      iVar1 = param_2 + 1;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x234);
      iVar1 = param_2 + -1;
    }
    _SfList_MoveRange_16(uVar2,param_2,iVar1,1);
    FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  }
  return;
}


