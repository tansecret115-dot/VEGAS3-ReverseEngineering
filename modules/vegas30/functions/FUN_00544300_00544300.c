/* Module: vegas30.exe
   Function: FUN_00544300
   Address: 00544300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00544300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  GetCurrentThreadId();
  iVar1 = **(int **)(param_1 + 0xc) + 8;
  if (*(int *)(param_1 + 0x10) <= iVar1) {
    FUN_00544490(param_1,iVar1);
  }
  FUN_00544230(param_1);
  FUN_00542e30();
  if (0 < **(int **)(param_1 + 0xc)) {
    uVar2 = _SfList_DeleteList_16(*(int **)(param_1 + 0xc),0,0xffffffff,0);
    return uVar2;
  }
  return 0;
}


