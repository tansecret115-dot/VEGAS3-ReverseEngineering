/* Module: rv203260.dll
   Function: FUN_638b1e10
   Address: 638b1e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_638b1e10(uint *param_1,uint param_2,uint param_3,int param_4,byte *param_5,uint param_6,
            uint param_7,uint *param_8,uint *param_9)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint *local_38;
  uint *local_34;
  uint *local_2c;
  int local_28;
  byte *local_20;
  uint local_14;
  int local_c;
  int local_8;
  
  puVar4 = param_9;
  puVar2 = param_8;
  if (param_3 == param_7) {
    local_8 = 0;
    if (0 < (int)param_6) {
      param_8 = param_9;
      do {
        pbVar7 = param_5 + local_8;
        iVar17 = 0;
        puVar3 = param_8;
        if (param_7 != 3 && -1 < (int)(param_7 - 3)) {
          uVar14 = param_7 >> 2;
          iVar17 = uVar14 * 4;
          do {
            pbVar8 = pbVar7 + (int)puVar2;
            *puVar3 = (uint)*pbVar7;
            puVar3 = puVar3 + (int)puVar2;
            pbVar9 = pbVar8 + (int)puVar2;
            *puVar3 = (uint)*pbVar8;
            puVar3 = puVar3 + (int)puVar2;
            *puVar3 = (uint)*pbVar9;
            pbVar7 = pbVar9 + (int)puVar2 + (int)puVar2;
            puVar3[(int)puVar2] = (uint)pbVar9[(int)puVar2];
            puVar3 = puVar3 + (int)puVar2 + (int)puVar2;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if (iVar17 < (int)param_7) {
          iVar17 = param_7 - iVar17;
          do {
            bVar1 = *pbVar7;
            pbVar7 = pbVar7 + (int)puVar2;
            *puVar3 = (uint)bVar1;
            puVar3 = puVar3 + (int)puVar2;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        local_8 = local_8 + 1;
        param_8 = param_8 + 1;
      } while (local_8 < (int)param_6);
    }
  }
  else {
    iVar17 = (int)(((int)param_3 >> 1) + param_7 * 0x10000) / (int)param_3;
    puVar3 = (uint *)((int)(((int)param_7 >> 1) + param_3 * 0x100) / (int)param_7);
    uVar14 = iVar17 + -0x10000 >> 1;
    param_8 = puVar3;
    if (0x100 < (int)puVar3) {
      param_8 = (uint *)0x100;
    }
    iVar5 = (int)(0x400 / (longlong)((int)param_8 * 2));
    local_8 = 0;
    if (0 < (int)param_6) {
      iVar12 = iVar17 + -0x10000 >> 0x11;
      local_38 = param_9;
      do {
        local_2c = local_38;
        local_20 = (byte *)0x0;
        iVar19 = iVar12;
        uVar18 = uVar14;
        if (iVar12 < iVar5) {
          do {
            iVar19 = iVar19 * (int)puVar2 + local_8;
            uVar6 = (uint)param_5[iVar19];
            pbVar7 = param_5 + (iVar19 - iVar5 * (int)puVar2);
            piVar13 = (int *)(&DAT_638b5608 +
                             (0x200 - iVar5 * (int)param_8) * 4 +
                             ((int)((uVar18 & 0xffff) * (int)param_8) >> 0x10) * -4);
            if (piVar13 < &DAT_638b5608) {
              pbVar7 = pbVar7 + (int)puVar2;
              piVar13 = piVar13 + (int)param_8;
            }
            local_c = 0;
            if (piVar13 < &DAT_638b660c) {
              do {
                if (pbVar7 < param_5) {
                  iVar19 = (param_5[local_8] - uVar6) * *piVar13;
                }
                else {
                  iVar19 = (*pbVar7 - uVar6) * *piVar13;
                }
                local_c = local_c + iVar19;
                piVar13 = piVar13 + (int)param_8;
                pbVar7 = pbVar7 + (int)puVar2;
              } while (piVar13 < &DAT_638b660c);
            }
            *local_2c = (int)((int)puVar3 * local_c + 0x80000 + uVar6 * 0x100000) >> 0x14;
            local_2c = local_2c + (int)puVar2;
            uVar18 = uVar18 + iVar17;
            iVar19 = (int)uVar18 >> 0x10;
            local_20 = (byte *)((int)local_20 + 1);
          } while (iVar19 < iVar5);
        }
        if (iVar19 < (int)(param_7 - iVar5)) {
          local_28 = (int)param_8 << 2;
          local_14 = uVar18;
          do {
            uVar18 = (uint)param_5[iVar19 * (int)puVar2 + local_8];
            pbVar7 = param_5 + iVar19 * (int)puVar2 + local_8 + -(iVar5 * (int)puVar2);
            piVar13 = (int *)(&DAT_638b5608 +
                             (0x200 - iVar5 * (int)param_8) * 4 +
                             ((int)((local_14 & 0xffff) * (int)param_8) >> 0x10) * -4);
            if (piVar13 < &DAT_638b5608) {
              pbVar7 = pbVar7 + (int)puVar2;
              piVar13 = (int *)((int)piVar13 + local_28);
            }
            pbVar9 = pbVar7 + (int)puVar2;
            piVar15 = (int *)((int)piVar13 + local_28) + (int)param_8;
            pbVar8 = pbVar9 + (int)puVar2 + (int)puVar2;
            piVar16 = piVar15 + (int)param_8;
            iVar19 = (*pbVar7 - uVar18) * *piVar13 +
                     (*pbVar9 - uVar18) * *(int *)((int)piVar13 + local_28) +
                     (pbVar9[(int)puVar2] - uVar18) * *piVar15 + (*pbVar8 - uVar18) * *piVar16;
            while (piVar16 = piVar16 + (int)param_8, piVar16 < &DAT_638b660c) {
              pbVar8 = pbVar8 + (int)puVar2;
              iVar19 = iVar19 + (*pbVar8 - uVar18) * *piVar16;
            }
            local_28 = (int)param_8 * 4;
            *local_2c = (int)((int)puVar3 * iVar19 + 0x80000 + uVar18 * 0x100000) >> 0x14;
            local_2c = local_2c + (int)puVar2;
            uVar18 = local_14 + iVar17;
            iVar19 = (int)uVar18 >> 0x10;
            local_20 = (byte *)((int)local_20 + 1);
            local_14 = uVar18;
          } while (iVar19 < (int)(param_7 - iVar5));
        }
        if ((int)local_20 < (int)param_3) {
          local_14 = param_3 - (int)local_20;
          do {
            uVar6 = (uint)param_5[iVar19 * (int)puVar2 + local_8];
            local_20 = param_5 + iVar19 * (int)puVar2 + local_8 + -(iVar5 * (int)puVar2);
            piVar13 = (int *)(&DAT_638b5608 +
                             (0x200 - iVar5 * (int)param_8) * 4 +
                             ((int)((uVar18 & 0xffff) * (int)param_8) >> 0x10) * -4);
            if (piVar13 < &DAT_638b5608) {
              local_20 = local_20 + (int)puVar2;
              piVar13 = piVar13 + (int)param_8;
            }
            local_c = 0;
            if (piVar13 < &DAT_638b660c) {
              do {
                if (local_20 < param_5 + (int)puVar2 * param_7) {
                  bVar1 = *local_20;
                }
                else {
                  bVar1 = param_5[(param_7 - 1) * (int)puVar2 + local_8];
                }
                local_c = local_c + (bVar1 - uVar6) * *piVar13;
                piVar13 = piVar13 + (int)param_8;
                local_20 = local_20 + (int)puVar2;
              } while (piVar13 < &DAT_638b660c);
            }
            *local_2c = (int)((int)puVar3 * local_c + 0x80000 + uVar6 * 0x100000) >> 0x14;
            local_2c = local_2c + (int)puVar2;
            uVar18 = uVar18 + iVar17;
            iVar19 = (int)uVar18 >> 0x10;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
        local_8 = local_8 + 1;
        local_38 = local_38 + 1;
      } while (local_8 < (int)param_6);
    }
  }
  if (param_2 == param_6) {
    if (0 < (int)param_3) {
      param_9 = (uint *)param_3;
      do {
        iVar17 = 0;
        puVar3 = param_1;
        puVar11 = puVar4;
        if (0 < (int)(param_2 - 3)) {
          uVar14 = param_2 >> 2;
          iVar17 = uVar14 * 4;
          puVar10 = puVar4;
          do {
            puVar11 = puVar10 + 4;
            *(char *)puVar3 = (char)*puVar10;
            *(char *)((int)puVar3 + 1) = (char)puVar10[1];
            *(char *)((int)puVar3 + 2) = (char)puVar10[2];
            *(char *)((int)puVar3 + 3) = (char)puVar10[3];
            puVar3 = puVar3 + 1;
            uVar14 = uVar14 - 1;
            puVar10 = puVar11;
          } while (uVar14 != 0);
        }
        if (iVar17 < (int)param_2) {
          iVar17 = param_2 - iVar17;
          do {
            uVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            *(char *)puVar3 = (char)uVar14;
            puVar3 = (uint *)((int)puVar3 + 1);
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        puVar4 = puVar4 + (int)puVar2;
        param_1 = (uint *)((int)param_1 + param_4);
        param_9 = (uint *)((int)param_9 + -1);
      } while (param_9 != (uint *)0x0);
      return;
    }
  }
  else {
    iVar17 = (int)(((int)param_2 >> 1) + param_6 * 0x10000) / (int)param_2;
    puVar4 = (uint *)((int)(((int)param_6 >> 1) + param_2 * 0x100) / (int)param_6);
    uVar14 = iVar17 + -0x10000 >> 1;
    param_8 = puVar4;
    if (0x100 < (int)puVar4) {
      param_8 = (uint *)0x100;
    }
    iVar5 = (int)(0x400 / (longlong)((int)param_8 * 2));
    if (0 < (int)param_3) {
      local_34 = param_9;
      param_7 = 0;
      iVar12 = iVar17 + -0x10000 >> 0x11;
      local_2c = (uint *)param_3;
      puVar3 = param_1;
      param_1 = param_9 + param_6;
      do {
        local_8 = 0;
        local_14 = uVar14;
        iVar19 = iVar12;
        param_5 = (byte *)puVar3;
        if (iVar12 < iVar5) {
          do {
            uVar18 = param_9[param_7 + iVar19];
            puVar11 = param_9 + param_7 + iVar19 + -iVar5;
            piVar13 = (int *)(&DAT_638b5608 +
                             (0x200 - iVar5 * (int)param_8) * 4 +
                             ((int)((local_14 & 0xffff) * (int)param_8) >> 0x10) * -4);
            if (piVar13 < &DAT_638b5608) {
              puVar11 = puVar11 + 1;
              piVar13 = piVar13 + (int)param_8;
            }
            iVar19 = 0;
            if (piVar13 < &DAT_638b660c) {
              do {
                if (puVar11 < param_9) {
                  uVar6 = *local_34;
                }
                else {
                  uVar6 = *puVar11;
                }
                puVar11 = puVar11 + 1;
                iVar19 = iVar19 + (uVar6 - uVar18) * *piVar13;
                piVar13 = piVar13 + (int)param_8;
              } while (piVar13 < &DAT_638b660c);
            }
            pbVar7 = param_5 + 1;
            *param_5 = (&DAT_638b3560)
                       [(int)((int)puVar4 * iVar19 + 0x80000 + uVar18 * 0x100000) >> 0x14];
            local_14 = local_14 + iVar17;
            iVar19 = (int)local_14 >> 0x10;
            local_8 = local_8 + 1;
            param_5 = pbVar7;
          } while (iVar19 < iVar5);
        }
        if (iVar19 < (int)(param_6 - iVar5)) {
          do {
            uVar18 = param_9[param_7 + iVar19];
            puVar11 = param_9 + ((param_7 + iVar19) - iVar5);
            piVar13 = (int *)(&DAT_638b5608 +
                             (0x200 - iVar5 * (int)param_8) * 4 +
                             ((int)((local_14 & 0xffff) * (int)param_8) >> 0x10) * -4);
            if (piVar13 < &DAT_638b5608) {
              puVar11 = puVar11 + 1;
              piVar13 = piVar13 + (int)param_8;
            }
            puVar10 = puVar11 + 4;
            piVar15 = piVar13 + (int)param_8;
            piVar16 = piVar15 + (int)param_8 + (int)param_8;
            iVar19 = (*puVar11 - uVar18) * *piVar13 + (puVar11[1] - uVar18) * *piVar15 +
                     (puVar11[2] - uVar18) * piVar15[(int)param_8] +
                     (puVar11[3] - uVar18) * *piVar16;
            while (piVar16 = piVar16 + (int)param_8, piVar16 < &DAT_638b660c) {
              uVar6 = *puVar10;
              puVar10 = puVar10 + 1;
              iVar19 = iVar19 + (uVar6 - uVar18) * *piVar16;
            }
            *param_5 = (&DAT_638b3560)
                       [(int)((int)puVar4 * iVar19 + 0x80000 + uVar18 * 0x100000) >> 0x14];
            param_5 = param_5 + 1;
            local_14 = local_14 + iVar17;
            iVar19 = (int)local_14 >> 0x10;
            local_8 = local_8 + 1;
          } while (iVar19 < (int)(param_6 - iVar5));
        }
        if (local_8 < (int)param_2) {
          param_3 = param_2 - local_8;
          do {
            puVar11 = param_9 + ((param_7 + iVar19) - iVar5);
            piVar13 = (int *)(&DAT_638b5608 +
                             (0x200 - iVar5 * (int)param_8) * 4 +
                             ((int)((local_14 & 0xffff) * (int)param_8) >> 0x10) * -4);
            if (piVar13 < &DAT_638b5608) {
              puVar11 = puVar11 + 1;
              piVar13 = piVar13 + (int)param_8;
            }
            local_c = 0;
            if (piVar13 < &DAT_638b660c) {
              do {
                if (puVar11 < param_1) {
                  uVar18 = *puVar11;
                }
                else {
                  uVar18 = param_1[-1];
                }
                local_c = local_c + (uVar18 - param_9[param_7 + iVar19]) * *piVar13;
                piVar13 = piVar13 + (int)param_8;
                puVar11 = puVar11 + 1;
              } while (piVar13 < &DAT_638b660c);
            }
            *param_5 = (&DAT_638b3560)
                       [(int)((int)puVar4 * local_c + 0x80000 + param_9[param_7 + iVar19] * 0x100000
                             ) >> 0x14];
            param_5 = param_5 + 1;
            local_14 = local_14 + iVar17;
            iVar19 = (int)local_14 >> 0x10;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
        param_7 = param_7 + (int)puVar2;
        puVar3 = (uint *)((int)puVar3 + param_4);
        local_34 = local_34 + (int)puVar2;
        param_1 = param_1 + (int)puVar2;
        local_2c = (uint *)((int)local_2c - 1);
      } while (local_2c != (uint *)0x0);
    }
  }
  return;
}


