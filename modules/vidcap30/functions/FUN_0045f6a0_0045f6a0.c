/* Module: vidcap30.exe
   Function: FUN_0045f6a0
   Address: 0045f6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045f6a0(int param_1,void *param_2)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,1);
  if (param_2 != (void *)0x0) {
    if (*(int *)((int)param_2 + 4) != 0) {
      iVar1 = _SfList_FindSpecificItemRange_16
                        (*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x10),0,0xffffffff,param_2);
      if (-1 < iVar1) {
        _SfList_DeleteList_16(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x10),iVar1,1,0);
      }
    }
    *(undefined4 *)((int)param_2 + 4) = 0;
    free(param_2);
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x8000;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


