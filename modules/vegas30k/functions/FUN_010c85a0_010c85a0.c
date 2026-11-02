/* Module: vegas30k.dll
   Function: FUN_010c85a0
   Address: 010c85a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010c85a0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined2 *puVar14;
  short *psVar15;
  ushort *puVar16;
  int *piVar17;
  uint local_30;
  int local_2c;
  uint local_24;
  int local_20;
  int local_18;
  uint local_8;
  
  iVar2 = param_2[1];
  uVar4 = (uint)*(ushort *)((int)param_2 + 0xe) * iVar2 + 0x1f;
  iVar5 = (uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U);
  iVar3 = param_2[2];
  iVar12 = (iVar5 >> 3) - (iVar5 >> 0x1f) >> 1;
  iVar5 = ftol();
  local_8 = (uint)(_DAT_011e2e60 <= (double)CONCAT44(param_4,param_3) - (double)iVar5);
  local_30 = 0;
  if (0 < iVar5) {
    do {
      if ((local_30 & 1) == 0) {
        if (param_2[4] == 0) {
          if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c86e5;
          iVar11 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c86e8:
          param_3 = (int *)(*param_2 + iVar11 * 4 + (int)param_2);
        }
        else {
          if (param_2[4] != 3) {
LAB_010c86e5:
            iVar11 = param_2[8];
            goto LAB_010c86e8;
          }
          param_3 = param_2 + 0xd;
        }
        if (param_1[4] == 0) {
          if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c8725;
          iVar11 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8728:
          piVar7 = (int *)(*param_1 + iVar11 * 4 + (int)param_1);
        }
        else {
          if (param_1[4] != 3) {
LAB_010c8725:
            iVar11 = param_1[8];
            goto LAB_010c8728;
          }
          piVar7 = param_1 + 0xd;
        }
      }
      else {
        if (param_1[4] == 0) {
          if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c865a;
          iVar11 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c865d:
          param_3 = (int *)(*param_1 + iVar11 * 4 + (int)param_1);
        }
        else {
          if (param_1[4] != 3) {
LAB_010c865a:
            iVar11 = param_1[8];
            goto LAB_010c865d;
          }
          param_3 = param_1 + 0xd;
        }
        if (param_2[4] == 0) {
          if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c86a7;
          piVar7 = (int *)(*param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)param_2);
        }
        else if (param_2[4] == 3) {
          piVar7 = param_2 + 0xd;
        }
        else {
LAB_010c86a7:
          piVar7 = (int *)(*param_2 + param_2[8] * 4 + (int)param_2);
        }
      }
      if (2 < iVar3 + -2) {
        piVar17 = piVar7 + iVar12 + 1;
        local_18 = iVar3 + -4;
        do {
          if (2 < iVar2 + -2) {
            psVar15 = (short *)(((int)piVar17 - (int)piVar7) + (int)param_3);
            local_20 = iVar2 + -4;
            piVar6 = piVar17;
            do {
              if (*psVar15 == 0) {
                *(undefined2 *)piVar6 = 0;
              }
              else {
                uVar4 = 0;
                puVar16 = (ushort *)((int)psVar15 - (iVar12 * 4 + 4));
                local_2c = 5;
                piVar13 = &DAT_01206584;
                do {
                  iVar11 = 5;
                  puVar9 = puVar16;
                  piVar10 = piVar13;
                  do {
                    uVar1 = *puVar9;
                    puVar9 = puVar9 + 1;
                    uVar4 = uVar4 + (uint)uVar1 * *piVar10;
                    iVar11 = iVar11 + -1;
                    piVar10 = piVar10 + 1;
                  } while (iVar11 != 0);
                  puVar16 = puVar16 + iVar12;
                  local_2c = local_2c + -1;
                  piVar13 = piVar13 + 5;
                } while (local_2c != 0);
                *(short *)piVar6 = (short)(uVar4 / 0x79);
              }
              piVar6 = (int *)((int)piVar6 + 2);
              psVar15 = psVar15 + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          piVar17 = (int *)((int)piVar17 + iVar12 * 2);
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      local_30 = local_30 + 1;
    } while ((int)local_30 < iVar5);
  }
  if (local_8 != 0) {
    local_24 = local_8;
    do {
      if ((local_30 & 1) == 0) {
        if (param_2[4] == 0) {
          if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c8933;
          iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8936:
          param_3 = (int *)(*param_2 + iVar5 * 4 + (int)param_2);
        }
        else {
          if (param_2[4] != 3) {
LAB_010c8933:
            iVar5 = param_2[8];
            goto LAB_010c8936;
          }
          param_3 = param_2 + 0xd;
        }
        if (param_1[4] == 0) {
          if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c8973;
          iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8976:
          piVar7 = (int *)(*param_1 + iVar5 * 4 + (int)param_1);
        }
        else {
          if (param_1[4] != 3) {
LAB_010c8973:
            iVar5 = param_1[8];
            goto LAB_010c8976;
          }
          piVar7 = param_1 + 0xd;
        }
      }
      else {
        if (param_1[4] == 0) {
          if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c88a8;
          iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c88ab:
          param_3 = (int *)(*param_1 + iVar5 * 4 + (int)param_1);
        }
        else {
          if (param_1[4] != 3) {
LAB_010c88a8:
            iVar5 = param_1[8];
            goto LAB_010c88ab;
          }
          param_3 = param_1 + 0xd;
        }
        if (param_2[4] == 0) {
          if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c88f5;
          piVar7 = (int *)(*param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)param_2);
        }
        else if (param_2[4] == 3) {
          piVar7 = param_2 + 0xd;
        }
        else {
LAB_010c88f5:
          piVar7 = (int *)(*param_2 + param_2[8] * 4 + (int)param_2);
        }
      }
      if (1 < iVar3 + -1) {
        puVar14 = (undefined2 *)((int)piVar7 + iVar12 * 2 + 2);
        local_20 = iVar3 + -2;
        do {
          if (1 < iVar2 + -1) {
            psVar15 = (short *)(((int)puVar14 - (int)piVar7) + (int)param_3);
            local_18 = iVar2 + -2;
            puVar8 = puVar14;
            do {
              if (*psVar15 == 0) {
                *puVar8 = 0;
              }
              else {
                uVar4 = 0;
                puVar16 = (ushort *)((int)psVar15 - (iVar12 * 2 + 2));
                local_8 = 3;
                piVar17 = &DAT_01206560;
                do {
                  iVar5 = 3;
                  puVar9 = puVar16;
                  piVar6 = piVar17;
                  do {
                    uVar1 = *puVar9;
                    puVar9 = puVar9 + 1;
                    uVar4 = uVar4 + (uint)uVar1 * *piVar6;
                    iVar5 = iVar5 + -1;
                    piVar6 = piVar6 + 1;
                  } while (iVar5 != 0);
                  puVar16 = puVar16 + iVar12;
                  local_8 = local_8 + -1;
                  piVar17 = piVar17 + 3;
                } while (local_8 != 0);
                *puVar8 = (short)(uVar4 >> 4);
              }
              puVar8 = puVar8 + 1;
              psVar15 = psVar15 + 1;
              local_18 = local_18 + -1;
            } while (local_18 != 0);
          }
          puVar14 = puVar14 + iVar12;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
      local_30 = local_30 + 1;
      local_24 = local_24 - 1;
    } while (local_24 != 0);
  }
  if ((local_30 & 1) == 0) {
    _SfDibCopy_36(param_1,0,0,0,param_2,0,0,0,3);
  }
  return 0;
}


