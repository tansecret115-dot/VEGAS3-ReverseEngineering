/* Module: mcplugrw.dll
   Function: FUN_0047e640
   Address: 0047e640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047e640(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_1 + 0x141);
  iVar3 = *(int *)(param_1 + 0x1ad);
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x5d)) {
    piVar9 = (int *)(*(int *)(param_1 + 0xf6) + 0xc);
    do {
      iVar6 = (piVar9[6] * *piVar9) / *(int *)(param_1 + 0x141);
      iVar4 = *(int *)(*(int *)(iVar3 + 0x35) + local_14 * 4);
      iVar5 = *(int *)(*(int *)(iVar3 + 0x39) + local_14 * 4);
      if (0 < iVar6) {
        iVar7 = 0;
        iVar8 = iVar4 - iVar5;
        puVar10 = (undefined4 *)(iVar5 + (iVar2 + 1) * iVar6 * 4);
        local_1c = (undefined4 *)(iVar5 + (iVar2 + 2) * iVar6 * 4);
        local_18 = iVar6;
        do {
          *(undefined4 *)(iVar7 + iVar6 * -4 + iVar4) = *(undefined4 *)(iVar8 + (int)puVar10);
          *(undefined4 *)(iVar7 + iVar6 * -4 + iVar5) = *puVar10;
          puVar1 = (undefined4 *)(iVar7 + iVar5);
          iVar7 = iVar7 + 4;
          *(undefined4 *)(iVar8 + -4 + (int)(local_1c + 1)) = *(undefined4 *)(iVar8 + (int)puVar1);
          *local_1c = *puVar1;
          local_18 = local_18 + -1;
          puVar10 = puVar10 + 1;
          local_1c = local_1c + 1;
        } while (local_18 != 0);
      }
      local_14 = local_14 + 1;
      piVar9 = (int *)((int)piVar9 + 0x51);
    } while (local_14 < *(int *)(param_1 + 0x5d));
  }
  return;
}


