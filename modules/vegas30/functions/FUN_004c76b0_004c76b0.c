/* Module: vegas30.exe
   Function: FUN_004c76b0
   Address: 004c76b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c76b0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_4;
  
  iVar2 = param_1;
  iVar6 = 0;
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  if (*(int *)(param_1 + 0xbc8) != 0) {
    iVar3 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        param_1 = _DAT_00000000;
      }
      else {
        piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        param_1 = *piVar4;
      }
      goto LAB_004c770f;
    }
  }
  param_1 = 0;
LAB_004c770f:
  puVar1 = *(uint **)(iVar2 + 0x5d0);
  if (param_2 == 0) {
    uVar5 = *puVar1 & 0xfffffffd;
  }
  else {
    uVar5 = *puVar1;
    if (((uVar5 & 2) == 0) || ((*(uint *)(iVar2 + 0x18) & 0x80000) != 0)) {
      uVar5 = uVar5 & 0xfffffffd | 2;
    }
    else {
      uVar5 = uVar5 & 0xfffffffd;
    }
  }
  *puVar1 = uVar5;
  if (0 < param_1) {
    do {
      iVar3 = *(int *)(*(int *)(local_4 + 8) + iVar6 * 4);
      if (param_2 == 0) {
        *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xfffeffff;
        FUN_004c7520(iVar2,iVar3,0x30);
      }
      else {
        *(uint *)(iVar3 + 0x10) = (*puVar1 & 2) << 0xf | *(uint *)(iVar3 + 0x10) & 0xfffeffff;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1);
  }
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfff7ffff;
  *puVar1 = *puVar1 | 1;
  *(uint *)**(undefined4 **)(iVar2 + 0xbc8) = *(uint *)**(undefined4 **)(iVar2 + 0xbc8) | 0x10;
  return;
}


