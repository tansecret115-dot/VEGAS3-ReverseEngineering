/* Module: rnco3260.dll
   Function: FUN_636f1660
   Address: 636f1660
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_636f1660(byte *param_1,int param_2,int param_3,int param_4,byte *param_5,int param_6,int param_7
            ,int param_8,int param_9)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int local_1c;
  int local_18;
  byte *local_c;
  byte *local_8;
  
  local_8 = param_1 + param_9;
  local_c = param_1 + param_9 * param_8;
  iVar1 = param_9 / 2;
  pbVar3 = local_c + (param_8 * iVar1) / 2;
  if (param_3 < 0) {
    param_2 = param_2 + (param_4 + -1) * param_3 * -2;
  }
  iVar5 = param_2 + (int)(param_5 + param_6 * param_3) * 2;
  param_2 = iVar5 + param_3 * 2;
  if (((uint)param_5 & 1) == 0) {
    local_18 = param_8 / 2;
    if (0 < local_18) {
      do {
        if (0 < param_7 / 2) {
          param_5 = param_1;
          pbVar2 = (byte *)(param_2 + 2);
          pbVar4 = pbVar3;
          pbVar6 = local_8 + 1;
          pbVar7 = (byte *)(iVar5 + 3);
          local_1c = param_7 / 2;
          do {
            *param_5 = pbVar7[-3];
            pbVar6[(int)param_1 - (int)local_8] = pbVar2[iVar5 - param_2];
            pbVar6[-1] = pbVar2[-2];
            *pbVar6 = *pbVar2;
            pbVar4[(int)local_c - (int)pbVar3] = (byte)(((uint)pbVar7[-2] + (uint)pbVar2[-1]) / 2);
            *pbVar4 = (byte)(((uint)pbVar2[1] + (uint)*pbVar7) / 2);
            param_5 = param_5 + 2;
            pbVar4 = pbVar4 + 1;
            local_1c = local_1c + -1;
            pbVar2 = pbVar2 + 4;
            pbVar6 = pbVar6 + 2;
            pbVar7 = pbVar7 + 4;
          } while (local_1c != 0);
        }
        param_1 = param_1 + param_9 * 2;
        pbVar3 = pbVar3 + iVar1;
        local_8 = local_8 + param_9 * 2;
        local_c = local_c + iVar1;
        param_2 = param_2 + param_3 * 4;
        iVar5 = iVar5 + param_3 * 4;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  else {
    local_1c = param_8 / 2;
    if (0 < local_1c) {
      do {
        if (0 < param_7 / 2) {
          param_5 = param_1;
          pbVar2 = (byte *)(param_2 + 2);
          pbVar4 = pbVar3;
          pbVar6 = (byte *)(iVar5 + 5);
          pbVar7 = local_8 + 1;
          local_18 = param_7 / 2;
          do {
            *param_5 = pbVar6[-5];
            (pbVar7 + 2)[(int)(param_1 + (-2 - (int)local_8))] = pbVar2[iVar5 - param_2];
            pbVar7[-1] = pbVar2[-2];
            *pbVar7 = *pbVar2;
            pbVar4[(int)local_c - (int)pbVar3] =
                 (byte)((int)((uint)pbVar6[-2] + (uint)pbVar2[1] + (uint)pbVar2[-3] +
                             (uint)pbVar6[-6]) >> 2);
            *pbVar4 = (byte)((int)((uint)pbVar6[-4] + (uint)pbVar2[-1] + (uint)pbVar2[3] +
                                  (uint)*pbVar6) >> 2);
            param_5 = param_5 + 2;
            pbVar4 = pbVar4 + 1;
            local_18 = local_18 + -1;
            pbVar2 = pbVar2 + 4;
            pbVar6 = pbVar6 + 4;
            pbVar7 = pbVar7 + 2;
          } while (local_18 != 0);
        }
        param_1 = param_1 + param_9 * 2;
        pbVar3 = pbVar3 + iVar1;
        local_8 = local_8 + param_9 * 2;
        local_c = local_c + iVar1;
        param_2 = param_2 + param_3 * 4;
        iVar5 = iVar5 + param_3 * 4;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      return 0;
    }
  }
  return 0;
}


