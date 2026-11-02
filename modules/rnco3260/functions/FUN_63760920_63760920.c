/* Module: rnco3260.dll
   Function: FUN_63760920
   Address: 63760920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_63760920(byte *param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
            uint param_7,uint param_8,int param_9,byte *param_10,int param_11,int param_12,
            uint param_13,int param_14,int param_15,int param_16)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = param_12;
  iVar5 = param_9;
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
      iVar5 = iVar5 - (param_11 + -1) * iVar1;
    }
    local_c = 0;
    param_11 = iVar5 + param_14 * iVar1 + param_13 * 2;
    pbVar3 = param_1 + param_6 * param_4 + param_5;
    iVar5 = param_4 * param_3;
    param_10 = pbVar3 + param_4;
    pbVar9 = param_1 + iVar5 + (int)param_5 / 2 + (((int)param_6 / 2) * param_4) / 2;
    pbVar6 = pbVar9 + ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
    param_12 = param_11;
    if (0 < (int)param_8 / 2) {
      do {
        param_12 = param_12 + iVar1 * 2;
        param_3 = 0;
        if (0 < (int)param_7 / 2) {
          pbVar4 = (byte *)(param_12 + 2);
          pbVar7 = pbVar6;
          pbVar8 = param_10 + 1;
          pbVar10 = (byte *)(param_11 + 3);
          param_1 = pbVar3;
          do {
            *param_1 = pbVar10[-3];
            (pbVar8 + 2)[(int)(pbVar3 + (-2 - (int)param_10))] =
                 (pbVar4 + 4)[(param_11 - param_12) + -4];
            pbVar8[-1] = pbVar4[-2];
            *pbVar8 = *pbVar4;
            pbVar7[(int)pbVar9 - (int)pbVar6] = (byte)((uint)pbVar4[-1] + (uint)pbVar10[-2] >> 1);
            *pbVar7 = (byte)((uint)pbVar4[1] + (uint)*pbVar10 >> 1);
            param_1 = param_1 + 2;
            param_3 = param_3 + 1;
            pbVar7 = pbVar7 + 1;
            pbVar4 = pbVar4 + 4;
            pbVar8 = pbVar8 + 2;
            pbVar10 = pbVar10 + 4;
          } while (param_3 < (int)param_7 / 2);
        }
        param_11 = param_11 + iVar1 * 2;
        pbVar3 = pbVar3 + param_4 * 2;
        param_10 = param_10 + param_4 * 2;
        pbVar9 = pbVar9 + param_4 / 2;
        pbVar6 = pbVar6 + param_4 / 2;
        local_c = local_c + 1;
      } while (local_c < (int)param_8 / 2);
    }
  }
  return 0;
}


