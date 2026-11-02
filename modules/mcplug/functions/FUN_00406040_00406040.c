/* Module: mcplug.dll
   Function: FUN_00406040
   Address: 00406040
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00406040(void *param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = 1;
  if ((*(int *)(param_2 + 0x428) == 0) || (*(int *)(*(int *)(param_2 + 0x428) + 4) == 0)) {
    iVar3 = 0;
  }
  if (*(int *)((int)param_1 + 0x28) == 0) {
    puVar1 = FUN_00407020((int)param_1);
    *(undefined **)((int)param_1 + 0x28) = puVar1;
    if (puVar1 == (undefined *)0x0) {
      return 0x8007000e;
    }
  }
  uVar2 = FUN_00406fd0((int)param_1);
  if (-1 < (int)uVar2) {
    **(undefined4 **)((int)param_1 + 0x28) = 0x42c;
    *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 4) = 0x1000000;
    *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 8) = 0;
    *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0xc) = 0x1ae;
    *(undefined4 *)(*(int *)((int)param_1 + 0x28) + 0x10) = 0x17b3;
    *(undefined2 *)(*(int *)((int)param_1 + 0x28) + 0x14) = 0;
    *(undefined2 *)(*(int *)((int)param_1 + 0x28) + 0x21c) = 0;
    if (*(int *)((int)param_1 + 0x44) == 2) {
      iVar4 = *(int *)((int)param_1 + 0x28);
      uVar5 = 2;
    }
    else {
      iVar4 = *(int *)((int)param_1 + 0x28);
      uVar5 = 0;
    }
    uVar2 = FUN_00407470(param_1,iVar4,uVar5,0,1,iVar3,1);
    uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
  }
  return uVar2;
}


