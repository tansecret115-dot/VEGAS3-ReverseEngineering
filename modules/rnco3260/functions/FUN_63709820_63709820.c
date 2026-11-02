/* Module: rnco3260.dll
   Function: FUN_63709820
   Address: 63709820
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63709820(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,ushort *param_5)

{
  ushort uVar1;
  ushort *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  
  pbVar7 = param_1;
  puVar8 = param_2;
  pbVar3 = param_3;
  puVar2 = (ushort *)param_4;
  puVar4 = param_5;
  while (((param_5 = puVar2, ((uint)pbVar3 & 3) != 0 && (((uint)puVar4 & 3) != 0)) &&
         (param_5 != (ushort *)0x0))) {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    bVar5 = (char)uVar1 << 3;
    param_1 = (byte *)(uint)bVar5;
    bVar6 = (byte)(uVar1 >> 2) & 0xf8;
    param_2 = (undefined1 *)(uint)bVar6;
    *pbVar3 = bVar5;
    bVar5 = (byte)(uVar1 >> 7) & 0xf8;
    pbVar3[1] = bVar6;
    param_3 = (byte *)(uint)bVar5;
    pbVar3[2] = bVar5;
    bVar5 = pbVar7[1];
    bVar6 = pbVar7[2];
    param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar7) >> 1);
    *puVar8 = param_1._0_1_;
    param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
    puVar8[2] = (char)((int)(param_3 + bVar6) >> 1);
    puVar8[1] = param_2._0_1_;
    pbVar7 = pbVar7 + 3;
    puVar8 = puVar8 + 3;
    pbVar3 = pbVar3 + 3;
    puVar2 = (ushort *)((int)param_5 - 1);
  }
  puVar2 = param_5;
  if (3 < (int)param_5) {
    param_4 = (uint)param_5 >> 2;
    do {
      uVar1 = *puVar4;
      bVar6 = (char)uVar1 << 3;
      param_1 = (byte *)(uint)bVar6;
      bVar5 = (byte)(uVar1 >> 7) & 0xf8;
      param_3 = (byte *)(uint)bVar5;
      *pbVar3 = bVar6;
      bVar6 = (byte)(uVar1 >> 2) & 0xf8;
      pbVar3[2] = bVar5;
      pbVar3[1] = bVar6;
      param_2 = (undefined1 *)(uint)bVar6;
      bVar5 = pbVar7[1];
      bVar6 = pbVar7[2];
      param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar7) >> 1);
      *puVar8 = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar8[2] = (char)((int)(param_3 + bVar6) >> 1);
      puVar8[1] = param_2._0_1_;
      uVar1 = puVar4[1];
      bVar6 = (char)uVar1 << 3;
      param_1 = (byte *)(uint)bVar6;
      bVar5 = (byte)(uVar1 >> 7) & 0xf8;
      param_3 = (byte *)(uint)bVar5;
      pbVar3[3] = bVar6;
      bVar6 = (byte)(uVar1 >> 2) & 0xf8;
      pbVar3[5] = bVar5;
      param_2 = (undefined1 *)(uint)bVar6;
      pbVar3[4] = bVar6;
      bVar5 = pbVar7[4];
      bVar6 = pbVar7[5];
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar7[3]) >> 1);
      puVar8[3] = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar8[5] = (char)((int)(param_3 + bVar6) >> 1);
      puVar8[4] = param_2._0_1_;
      uVar1 = puVar4[2];
      bVar6 = (char)uVar1 << 3;
      param_1 = (byte *)(uint)bVar6;
      bVar5 = (byte)(uVar1 >> 7) & 0xf8;
      param_3 = (byte *)(uint)bVar5;
      pbVar3[6] = bVar6;
      bVar6 = (byte)(uVar1 >> 2) & 0xf8;
      pbVar3[8] = bVar5;
      pbVar3[7] = bVar6;
      param_2 = (undefined1 *)(uint)bVar6;
      bVar5 = pbVar7[7];
      bVar6 = pbVar7[8];
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar7[6]) >> 1);
      puVar8[6] = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar8[8] = (char)((int)(param_3 + bVar6) >> 1);
      puVar8[7] = param_2._0_1_;
      uVar1 = puVar4[3];
      bVar6 = (char)uVar1 << 3;
      param_1 = (byte *)(uint)bVar6;
      bVar5 = (byte)(uVar1 >> 7) & 0xf8;
      param_3 = (byte *)(uint)bVar5;
      pbVar3[9] = bVar6;
      bVar6 = (byte)(uVar1 >> 2) & 0xf8;
      pbVar3[0xb] = bVar5;
      param_2 = (undefined1 *)(uint)bVar6;
      pbVar3[10] = bVar6;
      bVar5 = pbVar7[10];
      bVar6 = pbVar7[0xb];
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar7[9]) >> 1);
      puVar4 = puVar4 + 4;
      puVar8[9] = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
      puVar8[0xb] = (char)((int)(param_3 + bVar6) >> 1);
      puVar8[10] = param_2._0_1_;
      pbVar7 = pbVar7 + 0xc;
      pbVar3 = pbVar3 + 0xc;
      puVar8 = puVar8 + 0xc;
      param_5 = param_5 + -2;
      param_4 = param_4 - 1;
      puVar2 = param_5;
    } while (param_4 != 0);
  }
  for (; puVar2 != (ushort *)0x0; puVar2 = (ushort *)((int)puVar2 - 1)) {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    bVar5 = (char)uVar1 << 3;
    param_1 = (byte *)(uint)bVar5;
    bVar6 = (byte)(uVar1 >> 2) & 0xf8;
    param_2 = (undefined1 *)(uint)bVar6;
    *pbVar3 = bVar5;
    bVar5 = (byte)(uVar1 >> 7) & 0xf8;
    pbVar3[1] = bVar6;
    param_5 = (ushort *)(uint)bVar5;
    pbVar3[2] = bVar5;
    bVar5 = pbVar7[1];
    bVar6 = pbVar7[2];
    param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar7) >> 1);
    *puVar8 = param_1._0_1_;
    param_2._0_1_ = (undefined1)((int)(param_2 + bVar5) >> 1);
    puVar8[2] = (char)((int)((uint)bVar6 + (int)param_5) >> 1);
    puVar8[1] = param_2._0_1_;
    pbVar3 = pbVar3 + 3;
    pbVar7 = pbVar7 + 3;
    puVar8 = puVar8 + 3;
  }
  return;
}


