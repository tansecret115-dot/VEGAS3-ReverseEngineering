/* Module: rnco3260.dll
   Function: FUN_636f97b0
   Address: 636f97b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f97b0(byte *param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  uint local_18;
  uint local_14;
  uint local_10;
  byte local_c;
  
  if (param_4 != 0) {
    local_14 = param_4 - 1;
    uVar8 = *param_3;
    param_3 = param_3 + 1;
    local_10 = uVar8 & 0xff;
    param_1[2] = (byte)uVar8;
    bVar7 = (byte)(uVar8 >> 0x10);
    bVar5 = (byte)(uVar8 >> 8);
    param_4 = (int)bVar5;
    *param_1 = bVar7;
    param_1[1] = bVar5;
    pbVar4 = param_1 + 3;
    if (1 < (int)local_14) {
      uVar8 = (uint)bVar7;
      local_18 = local_14 >> 1;
      pbVar3 = pbVar4;
      do {
        pbVar4 = pbVar3 + 0xc;
        uVar1 = *param_3;
        pbVar3[5] = (byte)uVar1;
        bVar5 = (byte)(uVar1 >> 0x10);
        param_1 = (byte *)(uint)bVar5;
        bVar6 = (byte)(uVar1 >> 8);
        pbVar3[2] = (byte)((int)(local_10 + (uVar1 & 0xff)) >> 1);
        *pbVar3 = (byte)((int)(param_1 + uVar8) >> 1);
        param_4._0_1_ = (byte)((int)((uint)bVar6 + param_4) >> 1);
        pbVar3[3] = bVar5;
        pbVar3[1] = (byte)param_4;
        pbVar3[4] = bVar6;
        uVar2 = param_3[1];
        bVar7 = (byte)(uVar2 >> 0x10);
        local_10 = uVar2 & 0xff;
        bVar5 = (byte)(uVar2 >> 8);
        param_4 = (int)bVar5;
        uVar8 = (uint)bVar7;
        pbVar3[0xb] = (byte)uVar2;
        param_1._0_1_ = (byte)((int)(param_1 + uVar8) >> 1);
        param_3 = param_3 + 2;
        pbVar3[6] = (byte)param_1;
        local_c = (byte)((int)((uint)bVar6 + param_4) >> 1);
        pbVar3[7] = local_c;
        local_14 = local_14 - 2;
        pbVar3[8] = (byte)((int)((uVar2 & 0xff) + (uVar1 & 0xff)) >> 1);
        pbVar3[9] = bVar7;
        pbVar3[10] = bVar5;
        local_18 = local_18 - 1;
        pbVar3 = pbVar4;
      } while (local_18 != 0);
    }
    if (local_14 != 0) {
      uVar8 = *param_3;
      pbVar4[5] = (byte)uVar8;
      bVar5 = (byte)(uVar8 >> 0x10);
      param_3 = (uint *)(uint)bVar5;
      pbVar4[8] = (byte)uVar8;
      bVar6 = (byte)(uVar8 >> 8);
      param_1 = (byte *)(uint)bVar6;
      *pbVar4 = (byte)((int)((uint)bVar7 + (int)param_3) >> 1);
      param_4._0_1_ = (byte)((int)(param_1 + param_4) >> 1);
      pbVar4[1] = (byte)param_4;
      pbVar4[2] = (byte)((int)(local_10 + (uVar8 & 0xff)) >> 1);
      pbVar4[3] = bVar5;
      pbVar4[4] = bVar6;
      pbVar4[6] = bVar5;
      pbVar4[7] = bVar6;
      return;
    }
    *pbVar4 = bVar7;
    pbVar4[1] = bVar5;
    pbVar4[2] = (byte)local_10;
  }
  return;
}


