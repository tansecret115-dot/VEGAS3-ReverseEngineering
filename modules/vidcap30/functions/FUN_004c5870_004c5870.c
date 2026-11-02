/* Module: vidcap30.exe
   Function: FUN_004c5870
   Address: 004c5870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c5870(uint param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  int local_18;
  int local_14;
  int *local_10;
  
  iVar16 = param_1;
  iVar17 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar6 = *(int *)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x44);
  iVar22 = *(int *)(param_1 + 0x14);
  uVar8 = *(uint *)(param_1 + 0x20);
  iVar9 = *(int *)(param_1 + 0x48);
  uVar10 = *(uint *)(param_1 + 0x28);
  uVar11 = *(uint *)(param_1 + 0x24);
  uVar18 = *(uint *)(param_1 + 0x2c);
  iVar12 = *(int *)(param_1 + 0x40);
  puVar13 = *(undefined4 **)(param_1 + 0x34);
  puVar14 = *(undefined4 **)(param_1 + 0x3c);
  puVar15 = *(undefined4 **)(param_1 + 0x38);
  if ((uVar8 & uVar18 & uVar10 & uVar11) == 0) {
    if ((((uVar18 != 0 || uVar10 != 0) || uVar11 != 0) || uVar8 != 0) &&
       (local_10 = (int *)iVar22, 0 < iVar22)) {
      do {
        if (0 < iVar6) {
          pbVar21 = (byte *)(iVar17 + 1);
          local_18 = iVar6;
          do {
            puVar13[pbVar21[1] & uVar8] = puVar13[pbVar21[1] & uVar8] + 1;
            puVar15[*pbVar21 & uVar11] = puVar15[*pbVar21 & uVar11] + 1;
            puVar14[pbVar21[-1] & uVar10] = puVar14[pbVar21[-1] & uVar10] + 1;
            piVar3 = (int *)(iVar12 + (pbVar21[2] & uVar18) * 4);
            *piVar3 = *piVar3 + 1;
            local_18 = local_18 + -1;
            pbVar21 = pbVar21 + 4;
          } while (local_18 != 0);
        }
        iVar17 = iVar17 + iVar5;
        local_10 = (int *)((int)local_10 + -1);
      } while (local_10 != (int *)0x0);
    }
  }
  else {
    local_14 = iVar22;
    if (0 < iVar22) {
      do {
        if (0 < iVar6) {
          pbVar21 = (byte *)(iVar17 + 1);
          local_18 = iVar6;
          do {
            puVar13[pbVar21[1]] = puVar13[pbVar21[1]] + 1;
            puVar15[*pbVar21] = puVar15[*pbVar21] + 1;
            puVar14[pbVar21[-1]] = puVar14[pbVar21[-1]] + 1;
            piVar3 = (int *)(iVar12 + (uint)pbVar21[2] * 4);
            *piVar3 = *piVar3 + 1;
            local_18 = local_18 + -1;
            pbVar21 = pbVar21 + 4;
          } while (local_18 != 0);
        }
        iVar17 = iVar17 + iVar5;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  if (piVar7 != (int *)0x0) {
    if (uVar8 == 0) {
      *puVar13 = 0;
    }
    if (uVar11 == 0) {
      *puVar15 = 0;
    }
    if (uVar10 == 0) {
      *puVar14 = 0;
    }
    param_1 = 0;
    local_10 = piVar7;
    do {
      uVar20 = param_1 & uVar10;
      uVar18 = param_1 & uVar11;
      uVar19 = param_1 & uVar8;
      param_1 = param_1 + 1;
      *local_10 = puVar14[uVar20] + puVar15[uVar18] + puVar13[uVar19];
      local_10 = local_10 + 1;
    } while ((int)param_1 < 0x100);
  }
  if ((iVar9 != 0) && (iVar17 = *(int *)(iVar16 + 8), param_1 = iVar22, 0 < iVar22)) {
    do {
      if (0 < iVar6) {
        pbVar21 = (byte *)(iVar17 + 1);
        iVar22 = iVar6;
        do {
          pbVar1 = pbVar21 + -1;
          pbVar2 = pbVar21 + 1;
          bVar4 = *pbVar21;
          pbVar21 = pbVar21 + 4;
          uVar8 = ((uint)*pbVar1 + (uint)*pbVar2 + (uint)bVar4) / 3;
          iVar22 = iVar22 + -1;
          *(int *)(iVar9 + uVar8 * 4) = *(int *)(iVar9 + uVar8 * 4) + 1;
        } while (iVar22 != 0);
      }
      iVar17 = iVar17 + iVar5;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 0;
}


