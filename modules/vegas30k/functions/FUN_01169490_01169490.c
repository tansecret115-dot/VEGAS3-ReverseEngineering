/* Module: vegas30k.dll
   Function: FUN_01169490
   Address: 01169490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01169490(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_20;
  int *local_1c;
  int local_14;
  
  local_20 = 0;
  iVar1 = *(int *)(param_1 + 0x141);
  iVar2 = *(int *)(param_1 + 0x1ad);
  if (0 < *(int *)(param_1 + 0x5d)) {
    piVar10 = (int *)(*(int *)(param_1 + 0xf6) + 0xc);
    local_1c = (int *)(iVar2 + 8);
    do {
      iVar6 = (piVar10[6] * *piVar10) / *(int *)(param_1 + 0x141);
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0x35) + local_20 * 4);
      puVar4 = *(undefined4 **)(*(int *)(iVar2 + 0x39) + local_20 * 4);
      iVar9 = *local_1c;
      local_14 = (iVar1 + 2) * iVar6;
      if (0 < local_14) {
        puVar8 = puVar4;
        do {
          uVar5 = *(undefined4 *)((int)puVar8 + (iVar9 - (int)puVar4));
          *puVar8 = uVar5;
          *(undefined4 *)(((int)puVar3 - (int)puVar4) + (int)puVar8) = uVar5;
          puVar8 = puVar8 + 1;
          local_14 = local_14 + -1;
        } while (local_14 != 0);
      }
      if (0 < iVar6 * 2) {
        puVar8 = (undefined4 *)(iVar9 + (iVar1 + -2) * iVar6 * 4);
        iVar12 = iVar6 * 2;
        puVar11 = puVar4 + iVar6 * iVar1;
        do {
          *(undefined4 *)(((int)puVar4 - iVar9) + (int)puVar8) =
               *(undefined4 *)((int)puVar11 + (iVar9 - (int)puVar4));
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          iVar12 = iVar12 + -1;
          puVar11 = puVar11 + 1;
        } while (iVar12 != 0);
      }
      if (0 < iVar6) {
        iVar12 = 0;
        iVar9 = iVar6;
        do {
          iVar7 = iVar12 + iVar6 * -4;
          iVar12 = iVar12 + 4;
          iVar9 = iVar9 + -1;
          *(undefined4 *)(iVar7 + (int)puVar3) = *puVar3;
        } while (iVar9 != 0);
      }
      local_20 = local_20 + 1;
      local_1c = local_1c + 1;
      piVar10 = (int *)((int)piVar10 + 0x51);
    } while (local_20 < *(int *)(param_1 + 0x5d));
  }
  return;
}


