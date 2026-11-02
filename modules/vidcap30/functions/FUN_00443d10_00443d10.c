/* Module: vidcap30.exe
   Function: FUN_00443d10
   Address: 00443d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443d10(int param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_88 [32];
  uint local_68;
  int local_64;
  
  FUN_0042f4b0(param_1,1);
  if ((*(uint *)(param_2 + 0x20) != param_3) || (*(int *)(param_2 + 0x24) != param_4)) {
    piVar1 = *(int **)(*(int *)(param_2 + 4) + 0x10);
    iVar2 = _SfList_FindSpecificItemRange_16(piVar1,0,0xffffffff,param_2);
    local_68 = param_3;
    local_64 = param_4;
    iVar3 = _SfList_FindSortedInsertIndexRange_20(piVar1,local_88,0,0xffffffff,&LAB_00444a00);
    if (iVar3 < 0) {
      iVar3 = *piVar1;
    }
    if (iVar2 < iVar3) {
      iVar3 = iVar3 + -1;
    }
    *(uint *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x24) = param_4;
    if ((*(int *)(param_2 + 0x2c) <= param_4) &&
       ((*(int *)(param_2 + 0x2c) < param_4 || (*(uint *)(param_2 + 0x28) <= param_3)))) {
      *(uint *)(param_2 + 0x28) = param_3;
      *(int *)(param_2 + 0x2c) = param_4;
    }
    if (iVar2 != iVar3) {
      _SfList_MoveRange_16(piVar1,iVar2,iVar3,1);
      **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x100;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar3;
    }
    **(uint **)(param_1 + 4) = **(uint **)(param_1 + 4) | 0x400;
  }
  FUN_00443f20(param_1,param_2,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34));
  FUN_0042f5d0(param_1,1);
  return;
}


