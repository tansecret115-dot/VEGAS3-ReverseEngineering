/* Module: vidcap30.exe
   Function: FUN_004c3d00
   Address: 004c3d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c3d00(byte *param_1,int param_2,byte *param_3,int param_4,byte *param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  double *pdVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  double *local_14;
  
  uVar2 = *(uint *)((int)param_5 + 4);
  if (param_2 == 0) {
    iVar3 = 0;
    if (0 < (int)uVar2) {
      pdVar7 = (double *)((int)param_5 + 0x30);
      do {
        iVar9 = iVar3 + uVar2 * param_4;
        iVar3 = iVar3 + 1;
        *pdVar7 = (double)(int)(char)(param_3[iVar9] ^ 0x80);
        pdVar7 = pdVar7 + 1;
      } while (iVar3 < (int)uVar2);
    }
    return 0;
  }
  iVar3 = param_4 + -1;
  if (param_2 < param_4) {
    if (0 < (int)uVar2) {
      iVar9 = (int)param_3 - (int)param_1;
      param_5 = param_1;
      local_1c = uVar2;
      do {
        pbVar10 = param_5 + iVar9;
        iVar4 = 0;
        param_1 = param_5;
        local_24 = iVar3;
        if (0 < iVar3) {
          do {
            iVar4 = iVar4 - param_2;
            if (iVar4 < 0) {
              iVar4 = iVar4 + param_4;
              local_14._0_1_ =
                   (char)(((longlong)
                           (int)(((int)(char)pbVar10[uVar2] ^ 0xffffff80U) -
                                ((int)(char)*pbVar10 ^ 0xffffff80U)) * (longlong)iVar4) /
                         (longlong)param_4);
              *param_1 = (char)local_14 + (char)((int)(char)*pbVar10 ^ 0xffffff80U) ^ 0x80;
              param_1 = param_1 + uVar2;
            }
            pbVar10 = pbVar10 + uVar2;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        uVar5 = (uint)((int)param_1 - (int)param_5) / uVar2;
        if ((int)uVar5 < param_2) {
          iVar4 = param_2 - uVar5;
          do {
            *param_1 = (*pbVar10 ^ 0x80) * '\x03' + (pbVar10[-uVar2] ^ 0x80) * -3 +
                       (pbVar10[uVar2 * -2] ^ 0x80) ^ 0x80;
            param_1 = param_1 + uVar2;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        param_5 = param_5 + 1;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
    }
  }
  else {
    if (param_4 < 1) {
      if ((int)uVar2 < 1) {
        return param_2;
      }
      iVar3 = (int)param_1 - (int)param_3;
      local_24 = uVar2;
      do {
        pbVar10 = param_3 + iVar3;
        iVar4 = ftol();
        bVar1 = *param_3;
        iVar9 = 0;
        if (0 < param_2) {
          do {
            iVar9 = iVar9 + 1;
            param_4._0_1_ =
                 (char)(((longlong)(int)(((int)(char)bVar1 ^ 0xffffff80U) - iVar4) * (longlong)iVar9
                        ) / (longlong)(param_2 + 1));
            param_1._0_1_ = (char)iVar4;
            *pbVar10 = (char)param_4 + (char)param_1 ^ 0x80;
            pbVar10 = pbVar10 + uVar2;
          } while (iVar9 < param_2);
        }
        param_3 = param_3 + 1;
        local_24 = local_24 - 1;
      } while (local_24 != 0);
      return param_2;
    }
    if (0 < (int)uVar2) {
      local_14 = (double *)((int)param_5 + 0x30);
      iVar9 = (int)param_1 - (int)param_3;
      pbVar10 = param_3;
      local_28 = uVar2;
      do {
        pbVar8 = pbVar10 + iVar9;
        pbVar6 = pbVar10 + iVar3 * uVar2;
        pbVar11 = pbVar8 + (param_2 + -1) * uVar2;
        param_3 = (byte *)param_2;
        if (param_5 == (byte *)0x0) {
          param_1 = (byte *)((((int)(char)*pbVar10 ^ 0xffffff80U) -
                             ((int)(char)pbVar6[uVar2 - iVar3 * uVar2] ^ 0xffffff80U)) * 3 +
                            ((int)(char)pbVar10[uVar2 * 2] ^ 0xffffff80U));
        }
        else {
          param_1 = (byte *)ftol();
          *local_14 = (double)(int)(char)(*pbVar6 ^ 0x80);
        }
        for (; pbVar10 < pbVar6; pbVar6 = pbVar6 + -uVar2) {
          do {
            local_1c._0_1_ =
                 (char)(((longlong)
                         (int)(((int)(char)*pbVar6 ^ 0xffffff80U) -
                              ((int)(char)pbVar6[-uVar2] ^ 0xffffff80U)) * (longlong)(int)param_3) /
                       (longlong)param_2);
            *pbVar11 = (char)((int)(char)pbVar6[-uVar2] ^ 0xffffff80U) + (char)local_1c ^ 0x80;
            pbVar11 = pbVar11 + -uVar2;
            if (pbVar11 < pbVar8) {
              pbVar6 = pbVar10 + uVar2;
              break;
            }
            param_3 = (byte *)((int)param_3 - param_4);
          } while (-1 < (int)param_3);
          param_3 = (byte *)((int)param_3 + param_2);
        }
        bVar1 = *pbVar6;
        local_20 = (uint)((int)pbVar11 - (int)pbVar8) / uVar2 + 1;
        if (0 < local_20) {
          do {
            local_24._0_1_ =
                 (char)(((longlong)(int)(((int)(char)bVar1 ^ 0xffffff80U) - (int)param_1) *
                        (longlong)(int)param_3) / (longlong)param_2);
            *pbVar11 = (char)param_1 + (char)local_24 ^ 0x80;
            pbVar11 = pbVar11 + -uVar2;
            param_3 = (byte *)((int)param_3 - param_4);
            local_20 = local_20 + -1;
          } while (local_20 != 0);
        }
        local_14 = local_14 + 1;
        pbVar10 = pbVar10 + 1;
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
  }
  _DAT_005c22f4 = _DAT_005c22f4 + 1;
  return param_2;
}


