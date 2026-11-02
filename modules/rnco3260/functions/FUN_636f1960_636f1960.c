/* Module: rnco3260.dll
   Function: FUN_636f1960
   Address: 636f1960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_636f1960(undefined1 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,int param_6
            ,undefined1 *param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  int local_20;
  int local_1c;
  undefined1 *local_c;
  undefined1 *local_8;
  
  local_8 = param_1 + param_9;
  local_c = param_1 + param_9 * param_8;
  iVar6 = param_9 / 2;
  puVar4 = local_c + (param_8 * iVar6) / 2;
  iVar2 = param_2 + (param_6 * param_3 + param_5) * 2;
  param_6 = iVar2 + param_3 * 2;
  if ((param_5 & 1) == 0) {
    local_1c = param_8 / 2;
    if (0 < local_1c) {
      iVar1 = (int)param_7 / 2;
      do {
        if (0 < iVar1) {
          param_7 = param_1;
          puVar3 = (undefined1 *)(iVar2 + 3);
          puVar5 = puVar4;
          puVar8 = local_8 + 1;
          pbVar7 = (byte *)(param_6 + 2);
          local_20 = iVar1;
          do {
            *param_7 = puVar3[-2];
            puVar8[(int)param_1 - (int)local_8] = *puVar3;
            puVar8[-1] = pbVar7[-1];
            *puVar8 = puVar3[param_6 - iVar2];
            puVar5[(int)local_c - (int)puVar4] =
                 (char)(((uint)pbVar7[-2] + (uint)(byte)puVar3[-3]) / 2);
            *puVar5 = (char)(((uint)(byte)puVar3[-1] + (uint)*pbVar7) / 2);
            param_7 = param_7 + 2;
            puVar5 = puVar5 + 1;
            local_20 = local_20 + -1;
            puVar3 = puVar3 + 4;
            puVar8 = puVar8 + 2;
            pbVar7 = pbVar7 + 4;
          } while (local_20 != 0);
        }
        param_1 = param_1 + param_9 * 2;
        puVar4 = puVar4 + iVar6;
        local_8 = local_8 + param_9 * 2;
        local_c = local_c + iVar6;
        param_6 = param_6 + param_3 * 4;
        iVar2 = iVar2 + param_3 * 4;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  else {
    local_20 = param_8 / 2;
    if (0 < local_20) {
      iVar1 = (int)param_7 / 2;
      do {
        if (0 < iVar1) {
          param_7 = param_1;
          puVar3 = (undefined1 *)(iVar2 + 3);
          puVar5 = puVar4;
          pbVar7 = (byte *)(param_6 + 2);
          puVar8 = local_8 + 1;
          local_1c = iVar1;
          do {
            *param_7 = puVar3[-2];
            (puVar8 + 2)[(int)(param_1 + (-2 - (int)local_8))] = *puVar3;
            puVar8[-1] = pbVar7[-1];
            *puVar8 = (puVar3 + 4)[(param_6 - iVar2) + -4];
            puVar5[(int)local_c - (int)puVar4] =
                 (char)((int)((uint)(byte)puVar3[-5] + (uint)pbVar7[-4] + (uint)(byte)puVar3[-1] +
                             (uint)*pbVar7) >> 2);
            *puVar5 = (char)((int)((uint)(byte)puVar3[1] + (uint)pbVar7[2] + (uint)(byte)puVar3[-3]
                                  + (uint)pbVar7[-2]) >> 2);
            param_7 = param_7 + 2;
            puVar5 = puVar5 + 1;
            local_1c = local_1c + -1;
            puVar3 = puVar3 + 4;
            pbVar7 = pbVar7 + 4;
            puVar8 = puVar8 + 2;
          } while (local_1c != 0);
        }
        param_1 = param_1 + param_9 * 2;
        puVar4 = puVar4 + iVar6;
        local_8 = local_8 + param_9 * 2;
        local_c = local_c + iVar6;
        param_6 = param_6 + param_3 * 4;
        iVar2 = iVar2 + param_3 * 4;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
      return 0;
    }
  }
  return 0;
}


