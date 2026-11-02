/* Module: sftrans1.dll
   Function: FUN_004af270
   Address: 004af270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_004af270(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,int param_9,int param_10,byte *param_11,int param_12)

{
  byte bVar1;
  int iVar2;
  LPCVOID pMem;
  byte bVar3;
  uint uVar4;
  int iVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  char *pcVar12;
  unkbyte10 extraout_ST0;
  undefined1 local_68 [16];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  byte local_3c;
  undefined3 uStack_3b;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  byte local_10;
  undefined3 uStack_f;
  int local_c;
  byte *local_8;
  
  iVar8 = param_12;
  local_c = param_1;
  local_1c = FUN_004cdc70(local_68,param_1 + 0x1f0,param_1 + 500,&local_8,&param_12,param_2,param_3,
                          param_4,param_5,param_6,param_10,param_8,param_11,param_12);
  if ((-1 < local_1c) &&
     (local_1c = FUN_004cdc70(local_68,param_1 + 0x1f0,param_1 + 500,&param_6,&param_12,param_2,
                              param_3,param_4,param_5,param_7,param_10,param_9,param_11,iVar8),
     iVar11 = param_12, -1 < local_1c)) {
    param_11 = local_8;
    local_50 = param_4 / iVar8;
    param_10 = param_12;
    param_5 = param_6;
    fsin((float10)*(double *)(param_1 + 0x178) * (float10)_DAT_0055d680);
    local_54 = param_8 / iVar8;
    local_58 = param_9 / iVar8;
    local_20 = ftol();
    fcos(extraout_ST0);
    local_28 = ftol();
    iVar8 = *(int *)(param_1 + 0x1f0);
    iVar2 = *(int *)(param_1 + 500);
    _CIpow();
    _CIpow();
    uVar4 = ftol();
    *(uint *)(param_1 + 0x1e0) = uVar4 & 0xffffc000;
    iVar5 = (int)((uVar4 & 0xffffc000) + ((int)uVar4 >> 0x1f & 0x3fffU)) >> 0xe;
    *(int *)(param_1 + 0x1e4) = iVar5;
    pvVar6 = GlobalAlloc(0x40,iVar5 << 2);
    pvVar7 = GlobalLock(pvVar6);
    *(LPVOID *)(param_1 + 0x1dc) = pvVar7;
    if (pvVar7 == (LPVOID)0x0) {
      local_1c = -0x7ff8fff2;
    }
    else {
      local_1c = FUN_004aef00();
      if (-1 < local_1c) {
        local_18 = 0;
        local_48 = *(int *)(param_1 + 0x1e0) / 2;
        param_3 = -((iVar2 * 0x4000) / 2);
        if (0 < *(int *)(param_1 + 500)) {
          local_4c = -((iVar8 << 0xe) / 2);
          do {
            local_24 = (uint)((longlong)param_3 * (longlong)local_20) >> 0xe |
                       (int)((ulonglong)((longlong)param_3 * (longlong)local_20) >> 0x20) << 0x12;
            local_30 = local_24 + local_48;
            local_14 = 0;
            if (0 < *(int *)(param_1 + 0x1f0)) {
              local_38 = (int)param_11 - param_5;
              local_40 = iVar11 - param_5;
              local_44 = (int)param_11 - iVar11;
              pbVar9 = (byte *)(param_5 + 2);
              pbVar10 = param_11;
              pcVar12 = (char *)(iVar11 + 1);
              param_4 = local_4c;
              do {
                local_2c = (uint)((longlong)param_4 * (longlong)local_28) >> 0xe |
                           (int)((ulonglong)((longlong)param_4 * (longlong)local_28) >> 0x20) <<
                           0x12;
                uVar4 = local_2c + local_30;
                iVar8 = *(int *)(local_c + 0x1dc) +
                        ((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x3fffU)) >> 0xe) * 4;
                bVar3 = *(byte *)(iVar8 + 3);
                local_34 = (uint)*(byte *)(iVar8 + 7) - (uint)bVar3;
                iVar8 = ((int)((uVar4 & 0x3fff) * 0xff) >> 0xe) * local_34;
                bVar3 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar3;
                _local_3c = CONCAT31(uStack_3b,bVar3);
                bVar1 = pbVar9[local_38];
                param_8 = CONCAT31(param_8._1_3_,bVar1);
                uVar4 = (uint)bVar3;
                iVar8 = ((uint)*pbVar9 - (uint)bVar1) * uVar4;
                pbVar9[local_40] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar1;
                bVar3 = pcVar12[local_44];
                param_9 = CONCAT31(param_9._1_3_,bVar3);
                iVar8 = ((uint)pbVar9[-1] - (uint)bVar3) * uVar4;
                *pcVar12 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar3;
                bVar3 = *pbVar10;
                param_7 = CONCAT31(param_7._1_3_,bVar3);
                iVar8 = ((uint)pbVar9[-2] - (uint)bVar3) * uVar4;
                pcVar12[-1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar3;
                bVar3 = pbVar10[3];
                _local_10 = CONCAT31(uStack_f,bVar3);
                iVar8 = ((uint)pbVar9[1] - (uint)bVar3) * uVar4;
                param_4 = param_4 + 0x4000;
                pcVar12[2] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + bVar3;
                local_14 = local_14 + 1;
                pbVar9 = pbVar9 + 4;
                pbVar10 = pbVar10 + 4;
                iVar11 = param_10;
                param_1 = local_c;
                pcVar12 = pcVar12 + 4;
              } while (local_14 < *(int *)(local_c + 0x1f0));
            }
            iVar11 = iVar11 + local_50 * 4;
            param_11 = param_11 + local_54 * 4;
            param_3 = param_3 + 0x4000;
            param_5 = param_5 + local_58 * 4;
            local_18 = local_18 + 1;
            param_10 = iVar11;
          } while (local_18 < *(int *)(param_1 + 500));
        }
      }
    }
    pMem = *(LPCVOID *)(param_1 + 0x1dc);
    if (pMem != (LPCVOID)0x0) {
      pvVar6 = GlobalHandle(pMem);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(pMem);
      GlobalFree(pvVar6);
      *(undefined4 *)(param_1 + 0x1dc) = 0;
    }
  }
  return local_1c;
}


