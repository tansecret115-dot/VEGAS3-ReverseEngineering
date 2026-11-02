/* Module: rnco3260.dll
   Function: FUN_63760bb0
   Address: 63760bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_63760bb0(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,int param_9,undefined1 *param_10,int param_11,int param_12,
            uint param_13,int param_14,int param_15,int param_16)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = param_12;
  iVar7 = param_9;
  iVar2 = FUN_6375e410((byte)param_1,param_2,param_3,(byte)param_4,param_5,param_6,param_7,param_8,
                       (byte)param_9,(int)param_10,param_11,(byte)param_12,param_13,param_14,
                       param_15,param_16,&local_10,&local_14);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_6375e550(&param_5,&param_7,(int *)&param_13,&param_15,local_10);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_6375e550(&param_6,&param_8,&param_14,&param_16,local_14), iVar2 != 0)) {
    if ((param_13 & 1) != 0) {
      return 0xffffffff;
    }
    if (param_4 < 1) {
      return 0xffffffff;
    }
    if (iVar1 < 0) {
      iVar7 = iVar7 - (param_11 + -1) * iVar1;
    }
    local_c = 0;
    param_11 = iVar7 + param_14 * iVar1 + param_13 * 2;
    puVar8 = param_1 + param_6 * param_4 + param_5;
    iVar7 = param_4 * param_3;
    param_10 = puVar8 + param_4;
    puVar3 = param_1 + iVar7 + (int)param_5 / 2 + (((int)param_6 / 2) * param_4) / 2;
    puVar5 = puVar3 + ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
    param_12 = param_11;
    if (0 < (int)param_8 / 2) {
      do {
        param_12 = param_12 + iVar1 * 2;
        param_3 = 0;
        if (0 < (int)param_7 / 2) {
          puVar4 = (undefined1 *)(param_11 + 3);
          puVar6 = puVar5;
          puVar9 = param_10 + 1;
          pbVar10 = (byte *)(param_12 + 2);
          param_1 = puVar8;
          do {
            *param_1 = puVar4[-2];
            (puVar9 + 2)[(int)(puVar8 + (-2 - (int)param_10))] = *puVar4;
            puVar9[-1] = pbVar10[-1];
            *puVar9 = (puVar4 + 4)[(param_12 - param_11) + -4];
            puVar6[(int)puVar3 - (int)puVar5] =
                 (char)((uint)pbVar10[-2] + (uint)(byte)puVar4[-3] >> 1);
            *puVar6 = (char)((uint)(byte)puVar4[-1] + (uint)*pbVar10 >> 1);
            param_1 = param_1 + 2;
            param_3 = param_3 + 1;
            puVar6 = puVar6 + 1;
            puVar4 = puVar4 + 4;
            puVar9 = puVar9 + 2;
            pbVar10 = pbVar10 + 4;
          } while (param_3 < (int)param_7 / 2);
        }
        param_11 = param_11 + iVar1 * 2;
        puVar8 = puVar8 + param_4 * 2;
        param_10 = param_10 + param_4 * 2;
        puVar3 = puVar3 + param_4 / 2;
        puVar5 = puVar5 + param_4 / 2;
        local_c = local_c + 1;
      } while (local_c < (int)param_8 / 2);
    }
  }
  return 0;
}


