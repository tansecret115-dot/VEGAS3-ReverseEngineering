/* Module: rnco3260.dll
   Function: FUN_636faf40
   Address: 636faf40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636faf40(byte *param_1,undefined4 param_2,byte *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  uint local_1c;
  uint local_10;
  
  pbVar9 = param_3;
  if (param_4 != 0) {
    local_10 = param_4 - 1;
    uVar8 = (uint)*param_3;
    bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
    bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
    bVar3 = *(byte *)(&DAT_637956a0 + uVar8);
    param_4 = (int)bVar2;
    param_3 = (byte *)(uint)bVar3;
    pbVar9 = pbVar9 + 1;
    *param_1 = bVar1;
    param_1[1] = bVar2;
    param_1[2] = bVar3;
    pbVar6 = param_1 + 3;
    if (1 < (int)local_10) {
      uVar8 = (uint)bVar1;
      local_1c = local_10 >> 1;
      pbVar7 = pbVar6;
      do {
        pbVar6 = pbVar7 + 0xc;
        uVar10 = (uint)*pbVar9;
        bVar2 = *(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 2);
        bVar3 = *(byte *)((int)&DAT_637956a0 + uVar10 * 4 + 1);
        bVar4 = *(byte *)(&DAT_637956a0 + uVar10);
        param_1 = (byte *)(uint)bVar3;
        pbVar7[2] = (byte)((int)(param_3 + bVar4) >> 1);
        *pbVar7 = (byte)((int)(uVar8 + bVar2) >> 1);
        param_4._0_1_ = (byte)((int)(param_1 + param_4) >> 1);
        pbVar7[3] = bVar2;
        pbVar7[1] = (byte)param_4;
        pbVar7[5] = bVar4;
        pbVar7[4] = bVar3;
        uVar8 = (uint)pbVar9[1];
        bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
        bVar3 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
        bVar5 = *(byte *)(&DAT_637956a0 + uVar8);
        param_4 = (int)bVar3;
        param_3 = (byte *)(uint)bVar5;
        uVar8 = (uint)bVar1;
        pbVar7[8] = (byte)((int)(param_3 + bVar4) >> 1);
        pbVar7[6] = (byte)((int)(bVar2 + uVar8) >> 1);
        param_1._0_1_ = (byte)((int)(param_1 + param_4) >> 1);
        pbVar7[9] = bVar1;
        pbVar7[7] = (byte)param_1;
        pbVar7[10] = bVar3;
        local_10 = local_10 - 2;
        pbVar7[0xb] = bVar5;
        pbVar9 = pbVar9 + 2;
        local_1c = local_1c - 1;
        pbVar7 = pbVar6;
      } while (local_1c != 0);
    }
    if (local_10 != 0) {
      uVar8 = (uint)*pbVar9;
      bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
      param_1 = (byte *)(uint)bVar2;
      bVar3 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
      bVar4 = *(byte *)(&DAT_637956a0 + uVar8);
      *pbVar6 = (byte)((int)(param_1 + bVar1) >> 1);
      pbVar6[1] = (byte)((int)(param_4 + (uint)bVar3) >> 1);
      pbVar6[2] = (byte)((int)(param_3 + bVar4) >> 1);
      pbVar6[3] = bVar2;
      pbVar6[4] = bVar3;
      pbVar6[5] = bVar4;
      pbVar6[6] = bVar2;
      pbVar6[7] = bVar3;
      pbVar6[8] = bVar4;
      return;
    }
    *pbVar6 = bVar1;
    pbVar6[1] = (byte)param_4;
    pbVar6[2] = (byte)param_3;
  }
  return;
}


