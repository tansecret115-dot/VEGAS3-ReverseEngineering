/* Module: rnco3260.dll
   Function: FUN_636f91d0
   Address: 636f91d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f91d0(undefined1 *param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  uint local_28;
  uint *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  if (param_4 != 0) {
    uVar1 = *param_3;
    puVar7 = param_3 + 1;
    local_c = uVar1 & 0xff;
    local_8 = param_4 - 1;
    *param_1 = (char)uVar1;
    bVar4 = (byte)(uVar1 >> 8);
    param_1[1] = bVar4;
    bVar6 = (byte)(uVar1 >> 0x10);
    param_1[2] = bVar6;
    puVar3 = param_1 + 3;
    param_4 = (int)bVar4;
    param_3 = (uint *)(uint)bVar6;
    if (1 < (int)local_8) {
      local_10 = param_4;
      local_14 = param_3;
      local_28 = local_8 >> 1;
      do {
        uVar1 = *puVar7;
        bVar4 = (byte)(uVar1 >> 8);
        param_1 = (undefined1 *)(uint)bVar4;
        puVar3[3] = (char)uVar1;
        bVar5 = (byte)(uVar1 >> 0x10);
        puVar3[4] = bVar4;
        *puVar3 = (char)((int)(local_c + (uVar1 & 0xff)) >> 1);
        param_4._0_1_ = (undefined1)((int)(param_1 + local_10) >> 1);
        puVar3[1] = (undefined1)param_4;
        puVar3[2] = (char)((int)((uint)bVar5 + (int)local_14) >> 1);
        puVar3[5] = bVar5;
        uVar2 = puVar7[1];
        local_c = uVar2 & 0xff;
        bVar4 = (byte)(uVar2 >> 8);
        param_4 = (int)bVar4;
        bVar6 = (byte)(uVar2 >> 0x10);
        param_3 = (uint *)(uint)bVar6;
        puVar3[9] = (char)uVar2;
        local_10 = param_4;
        puVar3[10] = bVar4;
        local_14 = param_3;
        puVar3[6] = (char)((int)((uVar2 & 0xff) + (uVar1 & 0xff)) >> 1);
        param_1._0_1_ = (undefined1)((int)(param_1 + param_4) >> 1);
        puVar3[7] = param_1._0_1_;
        puVar3[8] = (char)((int)((uint)bVar5 + (int)param_3) >> 1);
        puVar3[0xb] = bVar6;
        puVar7 = puVar7 + 2;
        puVar3 = puVar3 + 0xc;
        local_8 = local_8 - 2;
        local_28 = local_28 - 1;
      } while (local_28 != 0);
    }
    if (local_8 != 0) {
      uVar1 = *puVar7;
      bVar4 = (byte)(uVar1 >> 8);
      param_1 = (undefined1 *)(uint)bVar4;
      bVar6 = (byte)(uVar1 >> 0x10);
      *puVar3 = (char)((int)(local_c + (uVar1 & 0xff)) >> 1);
      param_4._0_1_ = (undefined1)((int)(param_1 + param_4) >> 1);
      puVar3[3] = (char)uVar1;
      puVar3[1] = (undefined1)param_4;
      puVar3[2] = (char)((int)((int)param_3 + (uint)bVar6) >> 1);
      puVar3[4] = bVar4;
      puVar3[5] = bVar6;
      puVar3[6] = (char)uVar1;
      puVar3[7] = bVar4;
      puVar3[8] = bVar6;
      return;
    }
    puVar3[1] = bVar4;
    *puVar3 = (undefined1)local_c;
    puVar3[2] = bVar6;
  }
  return;
}


