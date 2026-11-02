/* Module: vegas30k.dll
   Function: FUN_011b2720
   Address: 011b2720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b2720(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_14;
  int local_10;
  
  *param_2 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x5c))(*(int **)(param_1 + 0x14),&local_14);
    local_10 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1f0))(*(int **)(param_1 + 0x14),4);
  }
  else {
    local_14 = 1;
    local_10 = 0;
  }
  uVar5 = (local_10 + local_14) * 0x14 + 0x38;
  puVar3 = calloc(1,uVar5);
  if (puVar3 == (undefined4 *)0x0) {
    *param_2 = 0;
    return 0x8007000e;
  }
  puVar8 = puVar3;
  for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar8 = 0;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  puVar8 = puVar3;
  for (iVar6 = 0xe; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *puVar3 = 0x38;
  piVar1 = puVar3 + 1;
  puVar8 = puVar3 + 0xe;
  puVar3[9] = puVar8;
  *piVar1 = local_14;
  puVar8 = puVar8 + local_14 * 4;
  iVar6 = 0;
  puVar3[10] = puVar8;
  puVar3[6] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0x3ff00000;
  puVar3[5] = 0x3ff00000;
  puVar3[2] = 0;
  puVar3[8] = 0;
  if (0 < *piVar1) {
    iVar4 = 0;
    do {
      iVar2 = puVar3[9];
      *(undefined4 *)(iVar4 + 8 + iVar2) = 0;
      *(undefined4 *)(iVar4 + 0xc + iVar2) = 0;
      puVar7 = (undefined4 *)(iVar4 + puVar3[9]);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x10;
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined4 *)(puVar3[10] + -4 + iVar6 * 4) = 1;
    } while (iVar6 < *piVar1);
  }
  puVar3[0xb] = local_10;
  if (local_10 == 0) {
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
  }
  else {
    puVar3[0xc] = puVar8 + local_14;
    puVar3[0xd] = puVar8 + local_14 + local_10 * 4;
    iVar6 = 0;
    if (0 < local_10) {
      iVar4 = 0;
      do {
        iVar2 = puVar3[0xc];
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar2 + 8 + iVar4) = 0;
        iVar4 = iVar4 + 0x10;
        *(undefined4 *)(iVar2 + -4 + iVar4) = 0;
        iVar2 = puVar3[0xc];
        *(undefined4 *)(iVar2 + -0x10 + iVar4) = 0;
        *(undefined4 *)(iVar2 + -0xc + iVar4) = 0;
        *(undefined4 *)(puVar3[0xd] + -4 + iVar6 * 4) = 0;
      } while (iVar6 < (int)puVar3[0xb]);
      *param_2 = puVar3;
      return 0;
    }
  }
  *param_2 = puVar3;
  return 0;
}


