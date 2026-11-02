/* Module: erv23260.dll
   Function: FUN_637f7610
   Address: 637f7610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f7610(void *this,int param_1,undefined4 *param_2,int param_3,int param_4,byte *param_5,
            int param_6,int param_7,int param_8,uint param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int local_1c;
  int local_18;
  byte *local_14;
  uint local_c;
  
  local_c = param_9;
  if (param_7 == 0) {
    uVar4 = param_3 << 4;
    iVar8 = param_4 << 4;
  }
  else {
    uVar4 = param_3 * 8;
    iVar8 = param_4 * 8;
  }
  iVar2 = *(int *)((int)this + 0x1af0);
  pbVar15 = *(byte **)((int)this + 0x1aec);
  param_4 = 0;
  if (0 < iVar8) {
    pbVar7 = (byte *)(param_1 + 3);
    do {
      local_1c = uVar4 - 3;
      *pbVar15 = pbVar7[-3];
      pbVar15[1] = pbVar7[-2];
      pbVar15[2] = pbVar7[-1];
      pbVar15[3] = *pbVar7;
      uVar10 = (uint)*pbVar7;
      local_18 = (uint)pbVar7[-1] +
                 pbVar7[-2] + uVar10 +
                 (uint)pbVar7[1] + (uint)pbVar7[2] + (uint)pbVar7[3] + (uint)pbVar7[-3];
      if (param_7 == 0) {
        iVar13 = 4;
      }
      else {
        iVar13 = 3;
      }
      pbVar9 = (byte *)((param_4 >> iVar13) * param_3 + param_8);
      bVar1 = *pbVar9;
      if ((bVar1 & 0x1f) != 0) {
        local_c = bVar1 & 0x1f;
      }
      iVar13 = 4;
      pbVar15[3] = *(char *)((int)this +
                            (((&DAT_6382f1e0)[local_c] * 0x1ff + ((int)(local_18 + uVar10) >> 3)) -
                            uVar10) + -199) + *pbVar7;
      if (4 < local_1c) {
        pbVar6 = pbVar7;
        do {
          pbVar5 = pbVar6 + 1;
          if (param_7 == 0) {
            iVar11 = 4;
          }
          else {
            iVar11 = 3;
          }
          bVar1 = pbVar9[iVar13 >> iVar11];
          if ((bVar1 & 0x1f) != 0) {
            local_c = bVar1 & 0x1f;
          }
          local_18 = local_18 + ((uint)pbVar6[4] - (uint)pbVar6[-3]);
          iVar13 = iVar13 + 1;
          pbVar5[(int)pbVar15 - (int)(pbVar7 + -3)] =
               *(char *)((int)this +
                        (((&DAT_6382f1e0)[local_c] * 0x1ff + ((int)(local_18 + (uint)*pbVar5) >> 3))
                        - (uint)*pbVar5) + -199) + *pbVar5;
          pbVar6 = pbVar5;
        } while (iVar13 < (int)(uVar4 - 3));
      }
      pbVar15[iVar13] = pbVar7[iVar13 + -3];
      pbVar15[iVar13 + 1] = pbVar7[iVar13 + -2];
      pbVar15[iVar13 + 2] = pbVar7[iVar13 + -1];
      pbVar7 = pbVar7 + (int)param_5;
      pbVar15 = pbVar15 + iVar2;
      param_4 = param_4 + 1;
    } while (param_4 < iVar8);
  }
  puVar14 = *(undefined4 **)((int)this + 0x1aec);
  puVar16 = puVar14;
  puVar17 = param_2;
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  puVar16 = (undefined4 *)((int)puVar14 + iVar2);
  puVar17 = (undefined4 *)((int)param_2 + param_6);
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  for (iVar13 = 0; iVar13 != 0; iVar13 = iVar13 + -1) {
    *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  iVar13 = iVar2 * 2;
  puVar16 = (undefined4 *)(iVar13 + (int)puVar14);
  puVar17 = (undefined4 *)(param_6 * 2 + (int)param_2);
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined1 *)puVar17 = *(undefined1 *)puVar16;
    puVar16 = (undefined4 *)((int)puVar16 + 1);
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  param_4 = 3;
  puVar16 = (undefined4 *)((int)param_2 + param_6 * 3);
  param_2 = (undefined4 *)(iVar2 * 3 + (int)puVar14);
  pbVar15 = (byte *)((int)param_2 + iVar13);
  if (3 < iVar8 + -3) {
    local_14 = pbVar15 + iVar2 * -5;
    pbVar7 = pbVar15 + iVar2 * -4;
    iVar11 = (int)pbVar15 - iVar2;
    param_5 = pbVar15;
    do {
      param_5 = param_5 + iVar2;
      param_1 = 0;
      if (0 < (int)uVar4) {
        pbVar9 = pbVar15;
        do {
          if (param_7 == 0) {
            iVar3 = 4;
            iVar12 = param_1 >> 4;
          }
          else {
            iVar3 = 3;
            iVar12 = param_1 >> 3;
          }
          bVar1 = *(byte *)((param_4 >> iVar3) * param_3 + iVar12 + param_8);
          if ((bVar1 & 0x1f) != 0) {
            local_c = bVar1 & 0x1f;
          }
          pbVar9[(int)puVar16 - (int)pbVar15] =
               *(char *)((int)this +
                        (&DAT_6382f260)[local_c] * 0x1ff + -199 +
                        ((int)((uint)pbVar9[(int)local_14 - (int)pbVar15] +
                               (uint)pbVar9[(int)param_5 - (int)pbVar15] +
                               (uint)pbVar9[iVar11 - (int)pbVar15] +
                               (uint)(pbVar7 + (iVar2 - (int)pbVar15))[(int)pbVar9] +
                               (uint)pbVar9[(int)pbVar7 - (int)pbVar15] + (uint)*pbVar9 +
                              (uint)pbVar9[(int)param_2 - (int)pbVar15] * -6) >> 3)) +
               pbVar9[(int)param_2 - (int)pbVar15];
          param_1 = param_1 + 1;
          pbVar9 = pbVar9 + 1;
        } while (param_1 < (int)uVar4);
      }
      pbVar15 = pbVar15 + iVar2;
      param_2 = (undefined4 *)((int)param_2 + iVar2);
      iVar11 = iVar11 + iVar2;
      pbVar7 = pbVar7 + iVar2;
      local_14 = local_14 + iVar2;
      puVar16 = (undefined4 *)((int)puVar16 + param_6);
      param_4 = param_4 + 1;
    } while (param_4 < iVar8 + -3);
  }
  puVar14 = param_2;
  puVar17 = puVar16;
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar17 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  puVar14 = (undefined4 *)(iVar2 + (int)param_2);
  puVar17 = (undefined4 *)((int)puVar16 + param_6);
  for (uVar10 = uVar4 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar17 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar17 = puVar17 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar17 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  puVar14 = (undefined4 *)((int)param_2 + iVar13);
  puVar16 = (undefined4 *)((int)puVar16 + param_6 * 2);
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar16 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar16 = puVar16 + 1;
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar16 = *(undefined1 *)puVar14;
    puVar14 = (undefined4 *)((int)puVar14 + 1);
    puVar16 = (undefined4 *)((int)puVar16 + 1);
  }
  return;
}


