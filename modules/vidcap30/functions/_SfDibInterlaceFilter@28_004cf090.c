/* Module: vidcap30.exe
   Function: _SfDibInterlaceFilter@28
   Address: 004cf090
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDibInterlaceFilter_28
              (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
              uint param_7)

{
  LPCVOID pMem;
  int iVar1;
  undefined1 *puVar2;
  HGLOBAL pvVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte *local_8;
  
                    /* 0xcf090  319  _SfDibInterlaceFilter@28 */
  if (param_7 != 4) {
    return -0x7fffbfff;
  }
  local_44 = param_2;
  local_40 = param_3;
  uVar12 = 0;
  local_4c = 0;
  local_48 = 0;
  local_20 = _SfDibPrepareSet_32(&param_2,&param_5,&param_3,param_1,&local_4c,param_4,param_5,4);
  if (-1 < local_20) {
    local_3c[0] = 0;
    local_3c[1] = 0;
    local_3c[2] = 0;
    param_7 = 0;
    piVar8 = local_3c;
    do {
      puVar2 = &stack0xffffffa8;
      if (param_2 * 4 < 0x1000) {
        FUN_00579db0();
      }
      else {
        pvVar3 = GlobalAlloc(0x40,param_2 * 4);
        puVar2 = GlobalLock(pvVar3);
      }
      *piVar8 = (int)puVar2;
      if (puVar2 == (undefined1 *)0x0) {
        local_20 = -0x7ff8fff2;
        goto LAB_004cf168;
      }
      uVar12 = uVar12 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar12 < 3);
    local_18 = 0;
    if (0 < param_5) {
      local_c = 1;
      local_1c = 0;
      do {
        pbVar13 = (byte *)(local_1c + param_3);
        iVar4 = (((int)(local_c - 2) < 1) - 1 & local_c - 2) * param_4 + param_3;
        local_10 = iVar4;
        uVar12 = param_5 - 1U;
        if ((int)local_c < (int)(param_5 - 1U)) {
          uVar12 = local_c;
        }
        iVar5 = uVar12 * param_4 + param_3;
        local_14 = 0;
        iVar1 = local_3c[param_7];
        if (0 < param_2) {
          local_24 = (int)pbVar13 - iVar5;
          local_28 = iVar4 - iVar5;
          local_2c = iVar1 - iVar5;
          local_10 = (int)pbVar13 - iVar4;
          local_3c[3] = iVar1 - iVar4;
          pbVar6 = (byte *)(iVar5 + 1);
          pbVar9 = (byte *)(iVar4 + 2);
          puVar2 = (undefined1 *)(iVar1 + 3);
          local_8 = pbVar13;
          do {
            pbVar7 = pbVar6 + 4;
            pbVar10 = pbVar9 + 4;
            puVar2[-3] = (char)((int)((uint)pbVar6[-1] + (uint)pbVar9[-2] + (uint)*local_8 * 2) >> 2
                               );
            pbVar7[(iVar1 - iVar5) + -4] =
                 (byte)((int)((uint)pbVar7[(iVar4 - iVar5) + -4] +
                              (uint)pbVar7[((int)pbVar13 - iVar5) + -4] * 2 + (uint)*pbVar6) >> 2);
            pbVar10[(iVar1 - iVar4) + -4] =
                 (byte)((int)((uint)pbVar6[1] + (uint)pbVar10[((int)pbVar13 - iVar4) + -4] * 2 +
                             (uint)*pbVar9) >> 2);
            *puVar2 = (char)((int)((uint)pbVar6[2] +
                                   (uint)(byte)(puVar2 + 4)[(int)(pbVar13 + (-4 - iVar1))] * 2 +
                                  (uint)pbVar9[1]) >> 2);
            local_14 = local_14 + 1;
            local_8 = local_8 + 4;
            pbVar6 = pbVar7;
            pbVar9 = pbVar10;
            puVar2 = puVar2 + 4;
          } while (local_14 < param_2);
        }
        if (2 < local_c) {
          puVar11 = (undefined4 *)local_3c[*(int *)(&DAT_0059a1f8 + param_7 * 4)];
          puVar14 = (undefined4 *)((((int)(local_c - 3) < 1) - 1 & local_c - 3) * param_4 + param_3)
          ;
          for (iVar4 = param_2; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar14 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          }
        }
        param_7 = (param_7 + 1) % 3;
        local_18 = local_18 + 1;
        local_1c = local_1c + param_4;
        local_c = local_c + 1;
      } while (local_18 < param_5);
    }
    local_c = local_18 - 2;
    param_1 = 0;
    while( true ) {
      iVar4 = param_5;
      if (2 < param_5) {
        iVar4 = 2;
      }
      if (iVar4 <= param_1) break;
      puVar11 = (undefined4 *)local_3c[*(int *)(&DAT_0059a1f8 + param_7 * 4)];
      puVar14 = (undefined4 *)((((int)local_c < 1) - 1 & local_c) * param_4 + param_3);
      for (iVar4 = param_2; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      }
      param_7 = (param_7 + 1) % 3;
      local_c = local_c + 1;
      param_1 = param_1 + 1;
    }
LAB_004cf168:
    piVar8 = local_3c;
    param_4 = 3;
    do {
      pMem = (LPCVOID)*piVar8;
      if ((pMem != (LPCVOID)0x0) && (0xfff < param_2 * 4)) {
        pvVar3 = GlobalHandle(pMem);
        GlobalUnlock(pvVar3);
        pvVar3 = GlobalHandle(pMem);
        GlobalFree(pvVar3);
      }
      piVar8 = piVar8 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return local_20;
}


