/* Module: rmme3260.dll
   Function: FUN_6622b340
   Address: 6622b340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6622b340(int param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x13e) == 0) {
    return 0x80040007;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x94) <= iVar1) {
    return 0x80004005;
  }
  if (-1 < iVar1) {
    piVar5 = *(int **)(*(int *)(param_1 + 0x90) + iVar1 * 4);
    iVar1 = (**(code **)(*piVar5 + 0x10))();
    piVar5[3] = *(int *)(param_1 + 0x18c) - iVar1;
    *(undefined4 *)((int)piVar5 + 0x16) = *(undefined4 *)(param_1 + 0x18c);
  }
  iVar1 = *(int *)(param_1 + 0x10) + 1;
  *(int *)(param_1 + 0x10) = iVar1;
  if (*(int *)(param_1 + 0x94) <= iVar1) {
    return 0x80004005;
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x90) + iVar1 * 4);
  (**(code **)(*piVar5 + 0x14))(*(undefined4 *)(param_1 + 0x18c));
  uVar2 = (**(code **)(*piVar5 + 0xc))();
  pvVar3 = operator_new(uVar2);
  if (pvVar3 == (void *)0x0) {
    return 0x8007000e;
  }
  (**(code **)(*piVar5 + 0x18))(pvVar3,uVar2);
  puVar4 = operator_new(0x28);
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_662522d0(puVar4);
  }
  (**(code **)(*piVar5 + 4))(piVar5);
  (**(code **)(*piVar5 + 0x10))(piVar5,pvVar3,uVar2);
  operator_delete(pvVar3);
  *(undefined2 *)(param_1 + 0x152) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(uint *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + uVar2;
  (**(code **)(**(int **)(param_1 + 0x184) + 0x1c))(*(int **)(param_1 + 0x184),piVar5);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  return 0;
}


