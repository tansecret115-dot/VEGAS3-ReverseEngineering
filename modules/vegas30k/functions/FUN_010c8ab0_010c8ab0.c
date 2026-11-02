/* Module: vegas30k.dll
   Function: FUN_010c8ab0
   Address: 010c8ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010c8ab0(int *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  iVar2 = param_2[1];
  uVar4 = (uint)*(ushort *)((int)param_2 + 0xe) * iVar2 + 0x1f;
  iVar3 = param_2[2];
  iVar14 = (int)((uVar4 & 0xffffffe0) + ((int)uVar4 >> 0x1f & 7U)) >> 3;
  iVar5 = ftol();
  uVar4 = (uint)(_DAT_011e2e60 <= (double)CONCAT44(param_4,param_3) - (double)iVar5);
  param_3 = 0;
  if (0 < iVar5) {
    do {
      if ((param_3 & 1) == 0) {
        if (param_2[4] == 0) {
          if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c8be9;
          iVar16 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8bec:
          piVar7 = (int *)(*param_2 + iVar16 * 4 + (int)param_2);
        }
        else {
          if (param_2[4] != 3) {
LAB_010c8be9:
            iVar16 = param_2[8];
            goto LAB_010c8bec;
          }
          piVar7 = param_2 + 0xd;
        }
        if (param_1[4] == 0) {
          if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c8c29;
          iVar16 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
LAB_010c8c32:
          piVar10 = (int *)(iVar16 + (int)param_1);
        }
        else {
          if (param_1[4] != 3) {
LAB_010c8c29:
            iVar16 = *param_1 + param_1[8] * 4;
            goto LAB_010c8c32;
          }
          piVar10 = param_1 + 0xd;
        }
      }
      else {
        if (param_1[4] == 0) {
          if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c8b63;
          iVar16 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8b66:
          piVar7 = (int *)(*param_1 + iVar16 * 4 + (int)param_1);
        }
        else {
          if (param_1[4] != 3) {
LAB_010c8b63:
            iVar16 = param_1[8];
            goto LAB_010c8b66;
          }
          piVar7 = param_1 + 0xd;
        }
        if (param_2[4] == 0) {
          if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
             (8 < uVar1)) goto LAB_010c8bab;
          piVar10 = (int *)(*param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)param_2);
        }
        else if (param_2[4] == 3) {
          piVar10 = param_2 + 0xd;
        }
        else {
LAB_010c8bab:
          piVar10 = (int *)(*param_2 + param_2[8] * 4 + (int)param_2);
        }
      }
      if (2 < iVar3 + -2) {
        pcVar12 = (char *)(iVar14 * 2 + 2 + (int)piVar7);
        local_18 = iVar3 + -4;
        do {
          if (2 < iVar2 + -2) {
            local_20 = iVar2 + -4;
            pcVar13 = pcVar12;
            do {
              if (*pcVar13 == '\0') {
                pcVar13[(int)piVar10 - (int)piVar7] = '\0';
              }
              else {
                uVar17 = 0;
                local_28 = 5;
                iVar16 = (int)pcVar13 - (iVar14 * 2 + 2);
                piVar15 = &DAT_01206584;
                do {
                  iVar6 = 0;
                  piVar11 = piVar15;
                  do {
                    uVar17 = uVar17 + (uint)*(byte *)(iVar16 + iVar6) * *piVar11;
                    iVar6 = iVar6 + 1;
                    piVar11 = piVar11 + 1;
                  } while (iVar6 < 5);
                  iVar16 = iVar16 + iVar14;
                  local_28 = local_28 + -1;
                  piVar15 = piVar15 + 5;
                } while (local_28 != 0);
                pcVar13[(int)piVar10 - (int)piVar7] = (char)(uVar17 / 0x79);
              }
              pcVar13 = pcVar13 + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          pcVar12 = pcVar12 + iVar14;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < iVar5);
  }
  do {
    if (uVar4 == 0) {
      if ((param_3 & 1) == 0) {
        _SfDibCopy_36(param_1,0,0,0,param_2,0,0,0,3);
      }
      return 0;
    }
    if ((param_3 & 1) == 0) {
      if (param_2[4] == 0) {
        if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_010c8e10;
        iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8e13:
        local_10 = (int *)(*param_2 + iVar5 * 4 + (int)param_2);
      }
      else {
        if (param_2[4] != 3) {
LAB_010c8e10:
          iVar5 = param_2[8];
          goto LAB_010c8e13;
        }
        local_10 = param_2 + 0xd;
      }
      if (param_1[4] == 0) {
        if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_010c8e4f;
        iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8e52:
        piVar7 = (int *)(*param_1 + iVar5 * 4 + (int)param_1);
      }
      else {
        if (param_1[4] != 3) {
LAB_010c8e4f:
          iVar5 = param_1[8];
          goto LAB_010c8e52;
        }
        piVar7 = param_1 + 0xd;
      }
    }
    else {
      if (param_1[4] == 0) {
        if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_010c8d87;
        iVar5 = 1 << ((byte)uVar1 & 0x1f);
LAB_010c8d8a:
        local_10 = (int *)(*param_1 + iVar5 * 4 + (int)param_1);
      }
      else {
        if (param_1[4] != 3) {
LAB_010c8d87:
          iVar5 = param_1[8];
          goto LAB_010c8d8a;
        }
        local_10 = param_1 + 0xd;
      }
      if (param_2[4] == 0) {
        if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) ||
           (8 < uVar1)) goto LAB_010c8dd3;
        piVar7 = (int *)(*param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4 + (int)param_2);
      }
      else if (param_2[4] == 3) {
        piVar7 = param_2 + 0xd;
      }
      else {
LAB_010c8dd3:
        piVar7 = (int *)(*param_2 + param_2[8] * 4 + (int)param_2);
      }
    }
    if (1 < iVar3 + -1) {
      puVar8 = (undefined1 *)((int)piVar7 + 1);
      local_28 = iVar3 + -2;
      do {
        puVar8 = puVar8 + iVar14;
        if (1 < iVar2 + -1) {
          pcVar12 = (char *)(((int)puVar8 - (int)piVar7) + (int)local_10);
          local_1c = iVar2 + -2;
          puVar9 = puVar8;
          do {
            if (*pcVar12 == '\0') {
              *puVar9 = 0;
            }
            else {
              uVar17 = 0;
              pcVar13 = pcVar12 + (-1 - iVar14);
              local_14 = 3;
              piVar10 = &DAT_01206560;
              do {
                iVar5 = 0;
                piVar15 = piVar10;
                do {
                  uVar17 = uVar17 + (uint)(byte)pcVar13[iVar5] * *piVar15;
                  iVar5 = iVar5 + 1;
                  piVar15 = piVar15 + 1;
                } while (iVar5 < 3);
                pcVar13 = pcVar13 + iVar14;
                local_14 = local_14 + -1;
                piVar10 = piVar10 + 3;
              } while (local_14 != 0);
              *puVar9 = (char)(uVar17 >> 4);
            }
            puVar9 = puVar9 + 1;
            pcVar12 = pcVar12 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    param_3 = param_3 + 1;
    uVar4 = uVar4 - 1;
  } while( true );
}


