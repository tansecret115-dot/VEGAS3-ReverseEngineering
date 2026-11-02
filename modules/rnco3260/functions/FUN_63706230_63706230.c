/* Module: rnco3260.dll
   Function: FUN_63706230
   Address: 63706230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63706230(byte *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  pbVar7 = param_1;
  puVar9 = param_2;
  puVar2 = param_3;
  puVar4 = (uint *)param_4;
  puVar3 = param_5;
  while (((param_5 = puVar4, ((uint)puVar2 & 3) != 0 && (((uint)puVar3 & 3) != 0)) &&
         (param_5 != (uint *)0x0))) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = (char)uVar1;
    bVar5 = (byte)(uVar1 >> 8);
    param_2 = (undefined1 *)(uint)bVar5;
    bVar6 = (byte)(uVar1 >> 0x10);
    param_3 = (undefined1 *)(uint)bVar6;
    puVar2[1] = bVar5;
    puVar2[2] = bVar6;
    bVar5 = pbVar7[1];
    bVar6 = pbVar7[2];
    param_1._3_1_ = (undefined1)((int)((uVar1 & 0xff) + (uint)*pbVar7) >> 1);
    *puVar9 = param_1._3_1_;
    param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
    puVar9[2] = (char)((int)(param_3 + bVar6) >> 1);
    puVar9[1] = param_2._0_1_;
    puVar2 = puVar2 + 3;
    pbVar7 = pbVar7 + 3;
    puVar9 = puVar9 + 3;
    puVar4 = (uint *)((int)param_5 - 1);
  }
  if (3 < (int)param_5) {
    param_4 = (uint)param_5 >> 2;
    puVar4 = puVar3;
    pbVar8 = pbVar7;
    puVar10 = puVar9;
    do {
      uVar1 = *puVar4;
      *puVar2 = (char)uVar1;
      bVar5 = (byte)(uVar1 >> 8);
      param_2 = (undefined1 *)(uint)bVar5;
      bVar6 = (byte)(uVar1 >> 0x10);
      param_3 = (undefined1 *)(uint)bVar6;
      puVar2[1] = bVar5;
      puVar2[2] = bVar6;
      bVar5 = pbVar8[1];
      bVar6 = pbVar8[2];
      param_1._3_1_ = (undefined1)((int)((uVar1 & 0xff) + (uint)*pbVar8) >> 1);
      *puVar10 = param_1._3_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar10[1] = param_2._0_1_;
      puVar10[2] = (char)((int)(param_3 + bVar6) >> 1);
      uVar1 = puVar4[1];
      puVar2[3] = (char)uVar1;
      bVar5 = (byte)(uVar1 >> 8);
      param_2 = (undefined1 *)(uint)bVar5;
      bVar6 = (byte)(uVar1 >> 0x10);
      param_3 = (undefined1 *)(uint)bVar6;
      puVar2[4] = bVar5;
      puVar2[5] = bVar6;
      bVar5 = pbVar8[4];
      bVar6 = pbVar8[5];
      param_1._3_1_ = (undefined1)((int)((uint)pbVar8[3] + (uVar1 & 0xff)) >> 1);
      puVar10[3] = param_1._3_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar10[4] = param_2._0_1_;
      puVar10[5] = (char)((int)(param_3 + bVar6) >> 1);
      uVar1 = puVar4[2];
      puVar2[6] = (char)uVar1;
      bVar5 = (byte)(uVar1 >> 8);
      param_2 = (undefined1 *)(uint)bVar5;
      bVar6 = (byte)(uVar1 >> 0x10);
      param_3 = (undefined1 *)(uint)bVar6;
      puVar2[7] = bVar5;
      puVar2[8] = bVar6;
      bVar5 = pbVar8[7];
      puVar3 = puVar4 + 4;
      pbVar7 = pbVar8 + 0xc;
      bVar6 = pbVar8[8];
      param_1._3_1_ = (undefined1)((int)((uint)pbVar8[6] + (uVar1 & 0xff)) >> 1);
      puVar10[6] = param_1._3_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar10[7] = param_2._0_1_;
      puVar10[8] = (char)((int)(param_3 + bVar6) >> 1);
      uVar1 = puVar4[3];
      puVar9 = puVar10 + 0xc;
      puVar2[9] = (char)uVar1;
      bVar5 = (byte)(uVar1 >> 8);
      param_2 = (undefined1 *)(uint)bVar5;
      bVar6 = (byte)(uVar1 >> 0x10);
      param_3 = (undefined1 *)(uint)bVar6;
      puVar2[10] = bVar5;
      puVar2[0xb] = bVar6;
      bVar5 = pbVar8[10];
      puVar2 = puVar2 + 0xc;
      bVar6 = pbVar8[0xb];
      param_1._3_1_ = (undefined1)((int)((uint)pbVar8[9] + (uVar1 & 0xff)) >> 1);
      puVar10[9] = param_1._3_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar10[0xb] = (char)((int)(param_3 + bVar6) >> 1);
      puVar10[10] = param_2._0_1_;
      param_5 = param_5 + -1;
      param_4 = param_4 - 1;
      puVar4 = puVar3;
      pbVar8 = pbVar7;
      puVar10 = puVar9;
    } while (param_4 != 0);
  }
  for (; param_5 != (uint *)0x0; param_5 = (uint *)((int)param_5 - 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *puVar2 = (char)uVar1;
    bVar5 = (byte)(uVar1 >> 8);
    param_2 = (undefined1 *)(uint)bVar5;
    bVar6 = (byte)(uVar1 >> 0x10);
    param_3 = (undefined1 *)(uint)bVar6;
    puVar2[1] = bVar5;
    puVar2[2] = bVar6;
    bVar5 = pbVar7[1];
    bVar6 = pbVar7[2];
    param_1._3_1_ = (undefined1)((int)((uVar1 & 0xff) + (uint)*pbVar7) >> 1);
    *puVar9 = param_1._3_1_;
    param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
    puVar9[2] = (char)((int)(param_3 + bVar6) >> 1);
    puVar9[1] = param_2._0_1_;
    puVar2 = puVar2 + 3;
    pbVar7 = pbVar7 + 3;
    puVar9 = puVar9 + 3;
  }
  return;
}


