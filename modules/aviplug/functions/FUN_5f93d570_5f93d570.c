/* Module: aviplug.dll
   Function: FUN_5f93d570
   Address: 5f93d570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f93d570(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x134);
  if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
    if (*(undefined4 **)piVar1[2] != (undefined4 *)0x0) {
      FUN_5f93d020(*(int *)(param_1 + 0x180),*(undefined4 **)piVar1[2]);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x180) + 0x424);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x12) = **(undefined4 **)(param_1 + 0x134);
    }
  }
  piVar1 = *(int **)(param_1 + 0x130);
  if ((piVar1 != (int *)0x0) && (0 < *piVar1)) {
    if (*(undefined4 **)piVar1[2] != (undefined4 *)0x0) {
      param_1 = FUN_5f93d2f0((int *)(param_1 + -4),*(int *)(param_1 + 0x180),
                             *(undefined4 **)piVar1[2]);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0x180) + 0x428);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 4) = **(undefined4 **)(param_1 + 0x130);
    }
  }
  return;
}


