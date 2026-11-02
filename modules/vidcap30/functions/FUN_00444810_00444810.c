/* Module: vidcap30.exe
   Function: FUN_00444810
   Address: 00444810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00444810(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,1);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1cc) + 8) + param_2 * 4);
  if (iVar1 == 0) {
    FUN_0042f5d0(param_1,1);
    return 0x80004003;
  }
  _SfList_DeleteList_16(*(int *)(param_1 + 0x1cc),param_2,1,param_3);
  FUN_00444880(param_1,iVar1);
  **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 4;
  FUN_0042f5d0(param_1,1);
  return 0;
}


