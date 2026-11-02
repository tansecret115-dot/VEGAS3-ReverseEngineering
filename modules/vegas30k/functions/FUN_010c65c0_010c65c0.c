/* Module: vegas30k.dll
   Function: FUN_010c65c0
   Address: 010c65c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010c65c0(undefined4 *param_1,int param_2,float *param_3,uint param_4,uint param_5,
                 float param_6,float *param_7,undefined4 param_8)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  float local_8;
  
  iVar9 = param_2;
  switch(param_8) {
  case 0:
    local_8 = _DAT_011dd160;
    if (0 < (int)param_5) {
      param_2 = param_5;
      iVar9 = iVar9 + 2;
      do {
        iVar7 = iVar9;
        pfVar5 = param_3;
        iVar6 = param_4;
        if (0 < (int)param_4) {
          do {
            iVar6 = iVar6 + -1;
            local_8 = (float)*(ushort *)(iVar7 + 4) * *pfVar5 + local_8;
            iVar7 = iVar7 + 8;
            pfVar5 = pfVar5 + 1;
          } while (iVar6 != 0);
        }
        param_3 = param_3 + param_4;
        iVar9 = iVar9 + param_4 * 8;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    if (_DAT_011dad68 != (float)param_7) {
      local_8 = local_8 / (float)param_7;
    }
    uVar2 = ftol();
    *(undefined2 *)(param_1 + 1) = uVar2;
    uVar2 = ftol();
    *(undefined2 *)((int)param_1 + 2) = uVar2;
    uVar2 = ftol();
    bVar1 = _DAT_011dd160 <= local_8 + param_6;
    *(undefined2 *)param_1 = uVar2;
    if (bVar1) {
      if (local_8 + param_6 <= _DAT_011dd9a0) {
        uVar2 = ftol();
        *(undefined2 *)((int)param_1 + 6) = uVar2;
        return;
      }
      uVar2 = ftol();
      *(undefined2 *)((int)param_1 + 6) = uVar2;
      return;
    }
    uVar2 = ftol();
    *(undefined2 *)((int)param_1 + 6) = uVar2;
    return;
  case 1:
    iVar9 = -1;
    iVar7 = 0;
    uVar10 = 0x30000;
    if ((int)(param_4 * param_5) < 1) {
      return;
    }
    param_7 = param_3;
    puVar8 = (ushort *)(param_2 + 2);
    do {
      if ((*param_7 != _DAT_011dd160) &&
         (uVar4 = (uint)puVar8[-1] + (uint)puVar8[1] + (uint)*puVar8, uVar4 < uVar10)) {
        iVar9 = iVar7;
        uVar10 = uVar4;
      }
      iVar7 = iVar7 + 1;
      param_7 = param_7 + 1;
      puVar8 = puVar8 + 4;
    } while (iVar7 < (int)(param_4 * param_5));
    break;
  case 2:
    iVar7 = param_4 * param_5;
    iVar9 = -1;
    param_6 = -NAN;
    param_5 = 0;
    param_4 = 0x2fffd;
    do {
      uVar10 = 0;
      uVar4 = 0x2fffd;
      iVar6 = 0;
      if (0 < iVar7) {
        puVar8 = (ushort *)(param_2 + 2);
        param_7 = param_3;
        do {
          if (*param_7 != _DAT_011dd160) {
            uVar3 = (uint)puVar8[-1] + (uint)puVar8[1] + (uint)*puVar8;
            if ((uVar10 < uVar3) && (uVar3 < param_4)) {
              uVar10 = uVar3;
            }
            if ((uVar3 < uVar4) && (param_5 < uVar3)) {
              uVar4 = uVar3;
              param_6 = (float)iVar6;
            }
          }
          iVar6 = iVar6 + 1;
          param_7 = param_7 + 1;
          puVar8 = puVar8 + 4;
          iVar9 = (int)param_6;
        } while (iVar6 < iVar7);
      }
      param_4 = uVar10;
      param_5 = uVar4;
    } while (uVar4 < uVar10);
    if (iVar9 == -1) {
      return;
    }
    *param_1 = *(undefined4 *)(param_2 + iVar9 * 8);
    param_1[1] = *(undefined4 *)(param_2 + 4 + iVar9 * 8);
    return;
  case 3:
    iVar9 = -1;
    uVar10 = 0;
    iVar7 = 0;
    if ((int)(param_4 * param_5) < 1) {
      return;
    }
    param_7 = param_3;
    puVar8 = (ushort *)(param_2 + 2);
    do {
      if ((*param_7 != _DAT_011dd160) &&
         (uVar4 = (uint)puVar8[-1] + (uint)puVar8[1] + (uint)*puVar8, uVar10 < uVar4)) {
        iVar9 = iVar7;
        uVar10 = uVar4;
      }
      iVar7 = iVar7 + 1;
      param_7 = param_7 + 1;
      puVar8 = puVar8 + 4;
    } while (iVar7 < (int)(param_4 * param_5));
    break;
  default:
    goto switchD_010c65d4_default;
  }
  if (iVar9 != -1) {
    *param_1 = *(undefined4 *)(param_2 + iVar9 * 8);
    param_1[1] = *(undefined4 *)(param_2 + 4 + iVar9 * 8);
  }
switchD_010c65d4_default:
  return;
}


