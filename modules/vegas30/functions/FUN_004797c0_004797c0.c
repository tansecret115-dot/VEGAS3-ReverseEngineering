/* Module: vegas30.exe
   Function: FUN_004797c0
   Address: 004797c0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004797c0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (param_3 < *(uint *)(param_1 + 0x48)) {
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) - 1;
    }
    else {
      iVar1 = FUN_00478b00(param_3,param_2,param_1);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      }
    }
  }
  iVar1 = _SfList_DeleteList_16(*(undefined4 *)(param_2 + 0x30),param_3,1,0);
  return -1 < iVar1;
}


