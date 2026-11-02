/* Module: oggplug.dll
   Function: FUN_00439780
   Address: 00439780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_00439780(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined4 *puVar16;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  int *local_10;
  
  local_18 = (uint *)&stack0xffffffc0;
  piVar14 = *(int **)(param_2 + 0x10);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar4 = *(int *)(param_1[0x10] + 4);
  iVar15 = *(int *)(param_1[0x10] + 0x68);
  uVar5 = *(uint *)(*(int *)(iVar4 + 0x1c) + param_1[7] * 4);
  param_1[9] = uVar5;
  iVar3 = *(int *)(*(int *)(iVar15 + 4 + (param_1[8] + (param_1[6] + param_1[7] * 2) * 2) * 4) +
                  *(int *)(iVar3 + 4) * 4);
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  FUN_00444a80();
  iVar13 = 0;
  if (0 < *(int *)(iVar4 + 4)) {
    local_10 = piVar14;
    do {
      local_10 = local_10 + 1;
      uVar6 = (**(code **)(*(int *)(*(int *)(param_2 + 0x2c) + *local_10 * 4) + 0x1c))
                        (param_1,*(undefined4 *)(*(int *)(param_2 + 0x18) + *local_10 * 4));
      *local_18 = uVar6;
      *local_18 = (uint)(uVar6 != 0);
      puVar16 = *(undefined4 **)(*param_1 + iVar13 * 4);
      for (uVar6 = (uVar5 & 0x3fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      iVar13 = iVar13 + 1;
      for (iVar11 = (uVar5 & 1) << 1; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)puVar16 = 0;
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      local_18 = local_18 + 1;
    } while (iVar13 < *(int *)(iVar4 + 4));
  }
  local_10 = (int *)0x0;
  if (0 < piVar14[0x133]) {
    piVar7 = piVar14 + 0x234;
    do {
      if ((*(int *)(&stack0xffffffc0 + piVar7[-0x100] * 4) != 0) ||
         (*(int *)(&stack0xffffffc0 + *piVar7 * 4) != 0)) {
        *(undefined4 *)(&stack0xffffffc0 + piVar7[-0x100] * 4) = 1;
        *(undefined4 *)(&stack0xffffffc0 + *piVar7 * 4) = 1;
      }
      local_10 = (int *)((int)local_10 + 1);
      piVar7 = piVar7 + 1;
    } while ((int)local_10 < piVar14[0x133]);
  }
  local_10 = (int *)0x0;
  if (0 < *piVar14) {
    do {
      iVar13 = 0;
      local_1c = 0;
      puVar8 = (uint *)&stack0xffffffc0;
      local_18 = (uint *)piVar14;
      if (0 < *(int *)(iVar4 + 4)) {
        do {
          local_18 = local_18 + 1;
          puVar9 = puVar8;
          if ((int *)*local_18 == local_10) {
            *puVar8 = (uint)(*(int *)(&stack0xffffffc0 + iVar13 * 4) != 0);
            local_1c = local_1c + 1;
            puVar9 = puVar8 + 1;
            *puVar8 = *(uint *)(*param_1 + iVar13 * 4);
          }
          iVar13 = iVar13 + 1;
          puVar8 = puVar9;
        } while (iVar13 < *(int *)(iVar4 + 4));
      }
      (**(code **)(*(int *)(*(int *)(param_2 + 0x30) + (int)local_10 * 4) + 0x20))
                (param_1,*(undefined4 *)(*(int *)(param_2 + 0x1c) + (int)local_10 * 4),
                 &stack0xffffffc0,&stack0xffffffc0,local_1c);
      local_10 = (int *)((int)local_10 + 1);
    } while ((int)local_10 < *piVar14);
  }
  local_20 = piVar14[0x133];
  if (-1 < local_20 + -1) {
    piVar7 = piVar14 + local_20 + 0x233;
    do {
      pfVar12 = *(float **)(*param_1 + piVar7[-0x100] * 4);
      if (0 < (int)uVar5 / 2) {
        iVar13 = *(int *)(*param_1 + *piVar7 * 4) - (int)pfVar12;
        local_24 = (int)uVar5 / 2;
        do {
          fVar1 = *pfVar12;
          fVar2 = *(float *)(iVar13 + (int)pfVar12);
          if (fVar1 <= _DAT_0044d6f0) {
            if (fVar2 <= _DAT_0044d6f0) {
              *(float *)(iVar13 + (int)pfVar12) = fVar1;
              fVar1 = fVar1 - fVar2;
              goto LAB_00439a26;
            }
            *(float *)(iVar13 + (int)pfVar12) = fVar2 + fVar1;
          }
          else if (fVar2 <= _DAT_0044d6f0) {
            *(float *)(iVar13 + (int)pfVar12) = fVar1;
            fVar1 = fVar2 + fVar1;
LAB_00439a26:
            *pfVar12 = fVar1;
          }
          else {
            *(float *)(iVar13 + (int)pfVar12) = fVar1 - fVar2;
          }
          pfVar12 = pfVar12 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      piVar7 = piVar7 + -1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  iVar13 = 0;
  if (0 < *(int *)(iVar4 + 4)) {
    do {
      piVar14 = piVar14 + 1;
      (**(code **)(*(int *)(*(int *)(param_2 + 0x2c) + *piVar14 * 4) + 0x20))
                (param_1,*(undefined4 *)(*(int *)(param_2 + 0x18) + *piVar14 * 4),
                 *(undefined4 *)(&stack0xffffffc0 + iVar13 * 4),
                 *(undefined4 *)(*param_1 + iVar13 * 4));
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(iVar4 + 4));
  }
  iVar13 = 0;
  if (0 < *(int *)(iVar4 + 4)) {
    do {
      pfVar12 = *(float **)(*param_1 + iVar13 * 4);
      FUN_00432360();
      FUN_00437470((int *)**(undefined4 **)(iVar15 + 0x24 + param_1[7] * 4),pfVar12,(int)pfVar12);
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(iVar4 + 4));
  }
  iVar15 = 0;
  if (0 < *(int *)(iVar4 + 4)) {
    do {
      pfVar12 = *(float **)(*param_1 + iVar15 * 4);
      if (*(int *)(&stack0xffffffc0 + iVar15 * 4) == 0) {
        uVar6 = uVar5;
        if (0 < (int)uVar5) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pfVar12 = 0.0;
            pfVar12 = pfVar12 + 1;
          }
        }
      }
      else if (0 < (int)uVar5) {
        pfVar10 = pfVar12;
        uVar6 = uVar5;
        do {
          uVar6 = uVar6 - 1;
          *pfVar10 = *(float *)((iVar3 - (int)pfVar12) + (int)pfVar10) * *pfVar10;
          pfVar10 = pfVar10 + 1;
        } while (uVar6 != 0);
      }
      DAT_00516390 = DAT_00516390 + 1;
      FUN_00432360();
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(iVar4 + 4));
  }
  return 0;
}


