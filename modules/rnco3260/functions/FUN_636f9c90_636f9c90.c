/* Module: rnco3260.dll
   Function: FUN_636f9c90
   Address: 636f9c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f9c90(byte *param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint local_18;
  uint local_14;
  byte local_10;
  byte local_c;
  
  pbVar8 = param_3;
  if (param_4 != 0) {
    local_14 = param_4 - 1;
    bVar1 = param_3[1];
    bVar2 = *param_3;
    param_4 = (int)bVar1;
    bVar3 = param_3[2];
    param_3 = (byte *)(uint)bVar2;
    pbVar8 = pbVar8 + 3;
    *param_1 = bVar2;
    param_1[1] = bVar1;
    param_1[2] = bVar3;
    pbVar6 = param_1 + 3;
    if (1 < (int)local_14) {
      uVar10 = (uint)bVar3;
      local_18 = local_14 >> 1;
      pbVar7 = pbVar6;
      pbVar9 = pbVar8;
      do {
        bVar1 = *pbVar9;
        pbVar8 = pbVar9 + 6;
        param_1 = (byte *)(uint)bVar1;
        bVar2 = pbVar9[1];
        bVar4 = pbVar9[2];
        pbVar6 = pbVar7 + 0xc;
        pbVar7[2] = (byte)((int)(uVar10 + bVar4) >> 1);
        param_3._0_1_ = (byte)((int)(param_1 + (int)param_3) >> 1);
        pbVar7[3] = bVar1;
        *pbVar7 = (byte)param_3;
        param_4._0_1_ = (byte)((int)((uint)bVar2 + param_4) >> 1);
        pbVar7[4] = bVar2;
        pbVar7[1] = (byte)param_4;
        pbVar7[5] = bVar4;
        bVar1 = pbVar9[3];
        param_3 = (byte *)(uint)bVar1;
        bVar5 = pbVar9[4];
        param_4 = (int)bVar5;
        bVar3 = pbVar9[5];
        uVar10 = (uint)bVar3;
        param_1._0_1_ = (byte)((int)(param_1 + (int)param_3) >> 1);
        pbVar7[6] = (byte)param_1;
        local_c = (byte)((int)((uint)bVar2 + param_4) >> 1);
        pbVar7[7] = local_c;
        local_10 = (byte)((int)(bVar4 + uVar10) >> 1);
        pbVar7[8] = local_10;
        pbVar7[9] = bVar1;
        pbVar7[10] = bVar5;
        pbVar7[0xb] = bVar3;
        local_14 = local_14 - 2;
        local_18 = local_18 - 1;
        pbVar7 = pbVar6;
        pbVar9 = pbVar8;
      } while (local_18 != 0);
    }
    if (local_14 != 0) {
      bVar1 = *pbVar8;
      param_1 = (byte *)(uint)bVar1;
      bVar2 = pbVar8[1];
      bVar4 = pbVar8[2];
      *pbVar6 = (byte)((int)(param_3 + (int)param_1) >> 1);
      pbVar6[1] = (byte)((int)(param_4 + (uint)bVar2) >> 1);
      pbVar6[2] = (byte)((int)((uint)bVar3 + (uint)bVar4) >> 1);
      pbVar6[3] = bVar1;
      pbVar6[4] = bVar2;
      pbVar6[5] = bVar4;
      pbVar6[6] = bVar1;
      pbVar6[7] = bVar2;
      pbVar6[8] = bVar4;
      return;
    }
    *pbVar6 = (byte)param_3;
    pbVar6[1] = (byte)param_4;
    pbVar6[2] = bVar3;
  }
  return;
}


