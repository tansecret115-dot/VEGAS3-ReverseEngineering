/* Module: sfcdi.dll
   Function: FUN_5bf52810
   Address: 5bf52810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf52810(int param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 == 0) {
    return 0x80070057;
  }
  puVar1 = *(uint **)(param_1 + 0x110);
  if (puVar1 == (uint *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar1;
  }
  iVar7 = 0;
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    iVar7 = **(int **)(param_1 + 0x114);
  }
  iVar4 = 0;
  if (*(int **)(param_1 + 0x118) != (int *)0x0) {
    iVar4 = **(int **)(param_1 + 0x118);
  }
  iVar7 = uVar6 + 0xec + (iVar4 + iVar7 * 6) * 4;
  uVar6 = 0;
  if (puVar1 != (uint *)0x0) {
    uVar6 = *puVar1;
  }
  if ((uVar6 & 1) != 0) {
    iVar7 = iVar7 + 1;
  }
  piVar2 = *(int **)(param_1 + 0xf0);
  if ((((piVar2 != (int *)0x0) && (*piVar2 != 0)) ||
      ((*(int **)(param_1 + 0xf4) != (int *)0x0 && (**(int **)(param_1 + 0xf4) != 0)))) ||
     ((*(int **)(param_1 + 0xf8) != (int *)0x0 && (**(int **)(param_1 + 0xf8) != 0)))) {
    iVar4 = 0;
    if (piVar2 != (int *)0x0) {
      iVar4 = *piVar2;
    }
    if (*(int **)(param_1 + 0xf4) == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(param_1 + 0xf4);
    }
    iVar3 = 0;
    if (*(int **)(param_1 + 0xf8) != (int *)0x0) {
      iVar3 = **(int **)(param_1 + 0xf8);
    }
    iVar7 = iVar7 + 8 + (iVar3 + iVar5 + iVar4) * 8;
  }
  *param_2 = iVar7;
  return 0;
}


