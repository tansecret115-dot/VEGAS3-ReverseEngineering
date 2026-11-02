/* Module: vidcap30.exe
   Function: FUN_0045f100
   Address: 0045f100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045f100(int param_1,void *param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_0042f4b0(param_1,1);
  if (param_2 != (void *)0x0) {
    if ((*(int *)((int)param_2 + 4) != 0) &&
       (iVar2 = _SfList_FindSpecificItemRange_16
                          (*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x10),0,0xffffffff,param_2),
       -1 < iVar2)) {
      _SfList_DeleteList_16(*(undefined4 *)(*(int *)((int)param_2 + 4) + 0x10),iVar2,1,0);
    }
    *(undefined4 *)((int)param_2 + 4) = 0;
    iVar2 = **(int **)((int)param_2 + 0x10);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      piVar1 = *(int **)(*(int *)(*(int *)((int)param_2 + 0x10) + 8) + iVar2 * 4);
      if (*piVar1 == 4) {
        FUN_0045f100(param_1,piVar1);
      }
      else if (*piVar1 == 5) {
        FUN_0045f6a0(param_1,piVar1);
      }
    }
    free(*(void **)((int)param_2 + 0xc));
    _SfList_Destroy_4(*(undefined4 *)((int)param_2 + 0x10));
    free(param_2);
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x4000;
  }
  FUN_0042f5d0(param_1,1);
  return;
}


