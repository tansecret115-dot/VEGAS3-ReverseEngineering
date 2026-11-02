/* Module: mp3plug.dll
   Function: FUN_5f6fa0f0
   Address: 5f6fa0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


byte * __cdecl
FUN_5f6fa0f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint local_34;
  int local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  pbVar5 = (byte *)0x0;
  if (param_2 == 0) {
    local_30 = 4;
  }
  else {
    local_30 = 6;
  }
  *(undefined4 *)(param_1 + *(int *)(param_1 + 0x20c) * 8) = param_3;
  local_18 = param_5;
  *(undefined4 *)(param_1 + 4 + *(int *)(param_1 + 0x20c) * 8) = param_4;
  iVar4 = *(int *)(param_1 + 0x20c) + 1;
  iVar2 = *(int *)(param_1 + 0x208);
  iVar4 = iVar4 - (((uint)(iVar4 >> 5) >> 0x1a) + 1 + *(int *)(param_1 + 0x20c) & 0xffffffc0);
  *(int *)(param_1 + 0x20c) = iVar4;
  if (iVar2 != iVar4) {
    do {
      iVar4 = iVar2 * 2;
      iVar1 = FUN_5f6f89e0(*(int *)(param_1 + 0x204));
      if (iVar1 < *(int *)(param_1 + 4 + iVar2 * 8)) {
        return pbVar5;
      }
      local_2c = pbVar5;
      FUN_5f6f85e0(*(int **)(param_1 + 0x200),pbVar5 + local_18,4);
      iVar2 = local_18;
      pbVar6 = pbVar5 + 4;
      local_28 = pbVar6;
      if (param_2 != 0) {
        pbVar5 = pbVar5 + 2;
        local_34 = 0xffff;
        local_24 = pbVar6;
        local_20 = iVar4;
        local_1c = param_1;
        do {
          FUN_5f70bf70(0x8005,0x8000,&local_34,pbVar5[iVar2]);
          param_1 = local_1c;
          iVar4 = local_20;
          pbVar5 = pbVar5 + 1;
        } while ((int)pbVar5 < (int)pbVar6);
        local_18 = iVar2;
        FUN_5f6f85e0(*(int **)(local_1c + 0x200),local_28 + iVar2,2);
        local_28 = local_28 + 2;
      }
      iVar1 = local_18;
      iVar2 = *(int *)(param_1 + iVar4 * 4);
      FUN_5f6f85e0(*(int **)(param_1 + 0x200),local_28 + local_18,
                   ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) - local_30);
      if (param_2 != 0) {
        iVar2 = *(int *)(param_1 + iVar4 * 4);
        iVar2 = (int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3;
        if (iVar2 != local_30 && -1 < iVar2 - local_30) {
          iVar2 = 0;
          pbVar5 = local_28 + iVar1;
          local_24 = pbVar5;
          do {
            FUN_5f70bf70(0x8005,0x8000,&local_34,*pbVar5);
            iVar1 = *(int *)(param_1 + iVar4 * 4);
            iVar2 = iVar2 + 1;
            pbVar5 = pbVar5 + 1;
          } while (iVar2 < ((int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3) - local_30);
        }
        uVar3 = local_34 & 0xffff;
        local_28[local_18 + -2] = (byte)(local_34 >> 8);
        local_34._0_1_ = (byte)uVar3;
        local_28[local_18 + -1] = (byte)local_34;
        local_34 = uVar3;
      }
      pbVar5 = local_28;
      iVar2 = *(int *)(param_1 + iVar4 * 4);
      iVar1 = *(int *)(param_1 + 4 + iVar4 * 4);
      iVar7 = ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) - local_30;
      local_14 = iVar4;
      FUN_5f6f85e0(*(int **)(param_1 + 0x204),local_28 + local_18 + iVar7,
                   (int)(iVar1 + ((uint)(iVar1 >> 2) >> 0x1d)) >> 3);
      iVar2 = *(int *)(param_1 + 4 + iVar4 * 4);
      iVar1 = *(int *)(param_1 + 0x208) + 1;
      iVar4 = *(int *)(param_1 + 0x210);
      *(uint *)(param_1 + 0x208) =
           iVar1 - (((uint)(iVar1 >> 5) >> 0x1a) + 1 + *(int *)(param_1 + 0x208) & 0xffffffc0);
      *(int *)(param_1 + 0x210) = iVar4 + 1;
      pbVar5 = pbVar5 + ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1d)) >> 3) + iVar7;
      *(int *)(param_1 + 0x214 + iVar4 * 4) = (int)pbVar5 - (int)local_2c;
      iVar2 = *(int *)(param_1 + 0x208);
    } while (iVar2 != *(int *)(param_1 + 0x20c));
  }
  return pbVar5;
}


