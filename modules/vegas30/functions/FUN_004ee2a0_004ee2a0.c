/* Module: vegas30.exe
   Function: FUN_004ee2a0
   Address: 004ee2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ee2a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      iVar2 = *(int *)(*(int *)(param_1[2] + iVar1 * 4) + 0x208);
      if ((iVar2 < 2) || (5 < iVar2)) {
        _SfList_DeleteList_16(param_1,iVar1,1,0);
      }
    }
    FUN_004ec630(param_1,0,1,0);
  }
  return;
}


