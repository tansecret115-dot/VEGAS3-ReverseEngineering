/* Module: rnco3260.dll
   Function: FUN_636fa8b0
   Address: 636fa8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fa8b0(byte *param_1,undefined4 param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort *puVar6;
  uint local_30;
  uint local_2c;
  uint local_20;
  uint local_1c;
  uint local_18;
  ushort *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if (param_4 != 0) {
    local_20 = param_4 - 1;
    uVar1 = *param_3;
    puVar6 = param_3 + 1;
    bVar5 = (char)uVar1 << 3;
    bVar4 = (byte)(uVar1 >> 2) & 0xf8;
    param_3 = (ushort *)((uVar1 >> 7 & 0xff) & 0xfffffff8);
    *param_1 = bVar5;
    param_1[1] = bVar4;
    bVar3 = (byte)param_3;
    param_1[2] = bVar3;
    pbVar2 = param_1 + 3;
    local_8 = (uint)bVar5;
    param_4 = (uint)bVar4;
    if (1 < (int)local_20) {
      local_c = local_8;
      local_10 = param_4;
      local_30 = local_20 >> 1;
      local_14 = param_3;
      do {
        uVar1 = *puVar6;
        bVar4 = (char)uVar1 << 3;
        bVar3 = (byte)(uVar1 >> 7) & 0xf8;
        local_18 = (uint)bVar4;
        param_1 = (byte *)(uint)bVar3;
        pbVar2[3] = bVar4;
        bVar4 = (byte)(uVar1 >> 2) & 0xf8;
        local_1c = (uint)bVar4;
        pbVar2[4] = bVar4;
        pbVar2[5] = bVar3;
        local_8._0_1_ = (byte)((int)(local_18 + local_c) >> 1);
        *pbVar2 = (byte)local_8;
        param_4._0_1_ = (byte)((int)(local_1c + local_10) >> 1);
        pbVar2[1] = (byte)param_4;
        param_3._0_1_ = (byte)((int)(param_1 + (int)local_14) >> 1);
        pbVar2[2] = (byte)param_3;
        uVar1 = puVar6[1];
        bVar5 = (char)uVar1 << 3;
        bVar3 = (byte)(uVar1 >> 7) & 0xf8;
        local_8 = (uint)bVar5;
        param_3 = (ushort *)(uint)bVar3;
        local_c = local_8;
        bVar4 = (byte)(uVar1 >> 2) & 0xf8;
        param_4 = (uint)bVar4;
        local_10 = param_4;
        local_14 = param_3;
        local_18._0_1_ = (byte)((int)(local_18 + local_8) >> 1);
        pbVar2[6] = (byte)local_18;
        local_1c._0_1_ = (byte)((int)(local_1c + param_4) >> 1);
        pbVar2[7] = (byte)local_1c;
        param_1._0_1_ = (byte)((int)(param_1 + (int)param_3) >> 1);
        pbVar2[8] = (byte)param_1;
        local_20 = local_20 - 2;
        pbVar2[9] = bVar5;
        pbVar2[10] = bVar4;
        pbVar2[0xb] = bVar3;
        puVar6 = puVar6 + 2;
        pbVar2 = pbVar2 + 0xc;
        local_30 = local_30 - 1;
      } while (local_30 != 0);
    }
    if (local_20 != 0) {
      uVar1 = *puVar6;
      bVar4 = (char)uVar1 << 3;
      param_1 = (byte *)(uint)bVar4;
      bVar3 = (byte)(uVar1 >> 7) & 0xf8;
      bVar5 = (byte)(uVar1 >> 2) & 0xf8;
      local_2c = (uint)bVar5;
      pbVar2[4] = bVar5;
      pbVar2[7] = bVar5;
      *pbVar2 = (byte)((int)(param_1 + local_8) >> 1);
      param_4._0_1_ = (byte)((int)(param_4 + local_2c) >> 1);
      pbVar2[1] = (byte)param_4;
      pbVar2[2] = (byte)((int)((int)param_3 + (uint)bVar3) >> 1);
      pbVar2[3] = bVar4;
      pbVar2[5] = bVar3;
      pbVar2[6] = bVar4;
      pbVar2[8] = bVar3;
      return;
    }
    *pbVar2 = bVar5;
    pbVar2[1] = bVar4;
    pbVar2[2] = bVar3;
  }
  return;
}


