/* Module: erv13260.dll
   Function: FUN_635f5740
   Address: 635f5740
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_635f5740(ushort *param_1,ushort *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  ushort *puVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float *pfVar9;
  undefined4 uVar10;
  ushort *puVar11;
  int iVar12;
  uint uVar13;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar14;
  float10 extraout_ST1;
  float local_4d0 [300];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  float local_c;
  int local_8;
  
  puVar4 = param_1;
  local_1c = *(int *)(param_5 + 0x23cb);
  local_20 = *(int *)(param_5 + 0x23cf);
  if (*(int *)(param_1 + 1) != 1) {
    return 0;
  }
  uVar8 = (uint)*param_1;
  local_10 = uVar8;
  if (*(int *)(param_1 + uVar8 * 2 + 0x4b3) == 1) {
    puVar11 = (ushort *)0x0;
    uVar13 = (uint)*param_2;
    local_18 = 0;
    param_1 = (ushort *)0x0;
    uVar6 = uVar8;
    if (uVar8 != uVar13) {
      pfVar9 = local_4d0;
      do {
        uVar6 = uVar6 + 1;
        if (uVar6 == 300) {
          uVar6 = 0;
        }
        puVar11 = (ushort *)((int)puVar11 + 1);
        *pfVar9 = (float)*(int *)(puVar4 + uVar6 * 2 + 3);
        param_1 = puVar11;
        if (*(int *)(puVar4 + uVar6 * 2 + 0x4b3) == 1) {
          local_18 = 1;
          break;
        }
        pfVar9 = pfVar9 + 1;
      } while (uVar6 != uVar13);
    }
    local_14 = *(int *)(param_2 + uVar8 * 2 + 0x962);
    local_8 = *(int *)(param_2 + uVar6 * 2 + 0x962) - local_14;
    if (local_8 < 1000) {
      (puVar4 + uVar8 * 2 + 0x4b3)[0] = 0;
      (puVar4 + uVar8 * 2 + 0x4b3)[1] = 0;
    }
    else {
      iVar7 = uVar8 * 2;
      do {
        if (uVar8 == uVar13) goto LAB_635f5873;
        uVar8 = uVar8 + 1;
        if (uVar8 == 300) {
          uVar8 = 0;
        }
        if (0x5db < (uint)(*(int *)(param_2 + uVar8 * 2 + 0x962) - local_14)) goto LAB_635f5873;
      } while ((*(int *)(puVar4 + iVar7 + 3) < 1) ||
              (local_c = (float)(*(int *)(puVar4 + iVar7 + 3) / 2),
              (float10)(int)local_c <= (float10)*(int *)(puVar4 + uVar8 * 2 + 3)));
      (puVar4 + local_10 * 2 + 0x4b3)[0] = 0;
      (puVar4 + local_10 * 2 + 0x4b3)[1] = 0;
      (puVar4 + uVar8 * 2 + 0x4b3)[0] = 1;
      (puVar4 + uVar8 * 2 + 0x4b3)[1] = 0;
      puVar4[uVar8 + 0x70b] = 1;
    }
LAB_635f5873:
    local_10 = (uint)*puVar4;
    if ((*(int *)(puVar4 + local_10 * 2 + 0x4b3) == 1) && (DAT_63623344 < local_8)) {
      iVar7 = DAT_63623344;
      if (local_18 != 0) {
        iVar7 = local_8 / 2;
      }
      local_8 = iVar7;
      if (local_10 != *param_2) {
        iVar12 = local_10 * 2;
        do {
          local_10 = local_10 + 1;
          if (local_10 == 300) {
            local_10 = 0;
          }
        } while ((*(int *)(param_2 + local_10 * 2 + 0x962) - *(int *)(param_2 + iVar12 + 0x962) <=
                  iVar7) && (local_10 != *param_2));
      }
      if (10 < (int)param_1) {
        qsort(local_4d0,(size_t)param_1,4,FUN_635f5720);
        iVar7 = (int)((int)param_1 * 3 + ((int)param_1 * 3 >> 0x1f & 3U)) >> 2;
        fVar2 = _DAT_63604144;
        fVar3 = _DAT_63604144;
        if (0 < iVar7) {
          pfVar9 = local_4d0;
          iVar12 = iVar7;
          do {
            fVar2 = fVar2 + *pfVar9;
            fVar3 = *pfVar9 * *pfVar9 + fVar3;
            pfVar9 = pfVar9 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        uVar6 = (uint)*puVar4;
        uVar8 = (uint)*param_2;
        local_c = fVar2 / (float)iVar7 -
                  SQRT(fVar3 / (float)iVar7 - (fVar2 * fVar2) / (float)(iVar7 * iVar7)) *
                  _DAT_63604148;
        if (uVar6 != uVar8) {
          iVar7 = uVar6 * 2;
          local_14 = *(int *)(param_2 + iVar7 + 0x962);
          do {
            uVar6 = uVar6 + 1;
            if (uVar6 == 300) {
              uVar6 = 0;
            }
            iVar12 = *(int *)(param_2 + uVar6 * 2 + 0x962) - *(int *)(param_2 + iVar7 + 0x962);
            if ((((int)(local_8 * 3 + (local_8 * 3 >> 0x1f & 3U)) >> 2 < iVar12) &&
                (iVar12 < (int)(local_8 * 5 + (local_8 * 5 >> 0x1f & 3U)) >> 2)) &&
               (local_c < (float)*(int *)(puVar4 + uVar6 * 2 + 3))) {
              if (uVar6 == uVar8) break;
              local_10 = uVar6 + 1;
              if (local_10 == 300) {
                local_10 = 0;
              }
            }
          } while (uVar6 != uVar8);
        }
      }
      (puVar4 + local_10 * 2 + 0x4b3)[0] = 1;
      (puVar4 + local_10 * 2 + 0x4b3)[1] = 0;
      puVar4[local_10 + 0x70b] = 2;
    }
    uVar8 = (uint)*puVar4;
    uVar1 = *param_2;
    puVar11 = (ushort *)0x0;
    local_10 = uVar8;
    param_1 = (ushort *)0x0;
    if (uVar8 != uVar1) {
      pfVar9 = local_4d0;
      do {
        uVar8 = uVar8 + 1;
        if (uVar8 == 300) {
          uVar8 = 0;
        }
        puVar11 = (ushort *)((int)puVar11 + 1);
        *pfVar9 = (float)*(int *)(puVar4 + uVar8 * 2 + 3);
        param_1 = puVar11;
      } while ((*(int *)(puVar4 + uVar8 * 2 + 0x4b3) != 1) && (pfVar9 = pfVar9 + 1, uVar8 != uVar1))
      ;
    }
    fVar2 = _DAT_63604144;
    if (0 < (int)param_1) {
      pfVar9 = local_4d0;
      puVar11 = param_1;
      do {
        fVar2 = fVar2 + *pfVar9;
        pfVar9 = pfVar9 + 1;
        puVar11 = (ushort *)((int)puVar11 + -1);
      } while (puVar11 != (ushort *)0x0);
    }
    if (puVar4[local_10 + 0x70b] == 2) {
      *(char *)(param_5 + 0x1d53) = *(char *)(param_5 + 0x1d50) + -2;
    }
    else {
      fVar2 = (fVar2 / (float)(int)param_1) / (float)(local_20 * local_1c);
      if ((float)_DAT_63604150 <= fVar2) {
        if ((float)_DAT_63604158 <= fVar2) {
          if ((float)_DAT_63604160 <= fVar2) {
            fVar3 = (float)_DAT_63604168;
            *(undefined1 *)(param_5 + 0x1d53) = 0xe;
            if (fVar3 <= fVar2) {
              *(undefined1 *)(param_5 + 0x1d50) = *(undefined1 *)(param_5 + 0x1d51);
            }
            else {
              *(undefined1 *)(param_5 + 0x1d50) = 0x14;
            }
          }
          else {
            *(undefined1 *)(param_5 + 0x1d53) = 0xc;
            *(undefined1 *)(param_5 + 0x1d50) = 0x10;
          }
        }
        else {
          *(undefined1 *)(param_5 + 0x1d53) = 10;
          *(undefined1 *)(param_5 + 0x1d50) = 0xe;
        }
      }
      else {
        *(undefined1 *)(param_5 + 0x1d53) = 8;
        *(undefined1 *)(param_5 + 0x1d50) = 0xc;
      }
    }
    DAT_6362334c = '\0';
  }
  if (*(int *)(puVar4 + (uint)*puVar4 * 2 + 0x4b3) != 0) {
    return 0;
  }
  *(int *)(param_5 + 0x1d73) =
       *(int *)(param_5 + 0x1d73) + *(int *)(param_2 + (uint)*puVar4 * 2 + 0x70a);
  DAT_63606d14 = *(int *)(puVar4 + (uint)*puVar4 * 2 + 3);
  DAT_63623350 = 1;
  if ((DAT_63606d14 < 1) || (DAT_63606d10 < 1)) {
    if (DAT_63606d14 < 1) {
      if (DAT_63606d10 < 1) {
        fVar14 = (float10)_DAT_6360418c;
        goto LAB_635f5bfb;
      }
      if (DAT_63606d14 < 1) {
        fVar14 = (float10)_DAT_63604178;
        goto LAB_635f5bfb;
      }
    }
  }
  else {
    fVar14 = (float10)DAT_63606d14 / ((float10)DAT_63606d10 / (float10)_DAT_63606d18);
    if (fVar14 < (float10)_DAT_63604170) {
      fVar14 = (float10)_DAT_63604178;
    }
    if (fVar14 <= (float10)_DAT_63604180) goto LAB_635f5bfb;
  }
  fVar14 = (float10)_DAT_63604188;
LAB_635f5bfb:
  uVar8 = (uint)*puVar4;
  do {
    if (uVar8 == *param_2) break;
    uVar8 = uVar8 + 1;
    if (uVar8 == 300) {
      uVar8 = 0;
    }
  } while (*(int *)(puVar4 + uVar8 * 2 + 0x4b3) != 1);
  local_8 = *(int *)(param_2 + uVar8 * 2 + 0x962) - *(int *)(param_2 + (uint)*puVar4 * 2 + 0x962);
  if ((DAT_63606d10 < 0) &&
     ((float)*(int *)(param_5 + 0x1d6b) < _DAT_636040c8 / *(float *)(param_5 + 0x28))) {
    uVar10 = ftol();
    *(undefined4 *)(param_5 + 0x1d6b) = uVar10;
    fVar14 = extraout_ST0;
  }
  if (((float10)_DAT_63604180 < fVar14) && ((double)local_8 < _DAT_63604190)) {
    uVar5 = ftol();
    *(undefined1 *)(param_5 + 0x1d50) = uVar5;
    DAT_6362334c = '\x01';
    DAT_63606d1c = *(int *)(param_5 + 0x1d6b);
    DAT_63623348 = (uint)*(byte *)(param_5 + 0x1d50);
  }
  if (*(byte *)(param_5 + 0x1d51) < *(byte *)(param_5 + 0x1d50)) {
    *(byte *)(param_5 + 0x1d50) = *(byte *)(param_5 + 0x1d51);
  }
  if (DAT_6362334c == '\x01') {
    iVar7 = *(int *)(param_5 + 0x1d6b);
    if (*(int *)(param_5 + 0x1d6b) <= DAT_63606d1c) {
      iVar7 = DAT_63606d1c;
    }
    *(int *)(param_5 + 0x1d6b) = iVar7;
    uVar8 = (uint)*(byte *)(param_5 + 0x1d50);
    if ((int)(uint)*(byte *)(param_5 + 0x1d50) <= (int)DAT_63623348) {
      uVar8 = DAT_63623348;
    }
    *(char *)(param_5 + 0x1d50) = (char)uVar8;
    DAT_63606d1c = *(int *)(param_5 + 0x1d6b);
    DAT_63623348 = (uint)*(byte *)(param_5 + 0x1d50);
  }
  iVar7 = ftol();
  if (extraout_ST0_00 <= extraout_ST1 - (float10)iVar7) {
    *(undefined4 *)(param_5 + 99) = 1;
    *(undefined4 *)(param_5 + 0x1d67) = 0;
    return 0;
  }
  *(undefined4 *)(param_5 + 0x1d67) = 1;
  DAT_63606d10 = DAT_63606d14;
  _DAT_63606d18 = DAT_63623350;
  return 0;
}


