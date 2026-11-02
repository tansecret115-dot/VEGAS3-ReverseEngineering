/* Module: rnco3260.dll
   Function: FUN_63707cc0
   Address: 63707cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63707cc0(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  
  pbVar7 = param_1;
  puVar8 = param_2;
  pbVar4 = param_3;
  pbVar3 = (byte *)param_4;
  pbVar5 = param_5;
  while (((param_5 = pbVar3, ((uint)pbVar4 & 3) != 0 && (((uint)pbVar5 & 3) != 0)) &&
         (param_5 != (byte *)0x0))) {
    bVar1 = pbVar5[1];
    param_1 = (byte *)(uint)bVar1;
    bVar2 = pbVar5[2];
    param_2 = (undefined1 *)(uint)*pbVar5;
    *pbVar4 = *pbVar5;
    param_3 = (byte *)(uint)bVar2;
    pbVar4[1] = bVar1;
    pbVar4[2] = bVar2;
    bVar1 = pbVar7[1];
    bVar2 = pbVar7[2];
    param_2._0_1_ = (undefined1)((int)(param_2 + *pbVar7) >> 1);
    *puVar8 = param_2._0_1_;
    param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
    puVar8[2] = (char)((int)(param_3 + bVar2) >> 1);
    puVar8[1] = param_1._0_1_;
    pbVar5 = pbVar5 + 3;
    pbVar4 = pbVar4 + 3;
    pbVar7 = pbVar7 + 3;
    puVar8 = puVar8 + 3;
    pbVar3 = param_5 + -1;
  }
  pbVar3 = param_5;
  if (3 < (int)param_5) {
    param_4 = (uint)param_5 >> 2;
    pbVar6 = pbVar5;
    do {
      bVar1 = pbVar6[1];
      param_1 = (byte *)(uint)bVar1;
      bVar2 = pbVar6[2];
      param_2 = (undefined1 *)(uint)*pbVar6;
      *pbVar4 = *pbVar6;
      pbVar4[2] = bVar2;
      pbVar4[1] = bVar1;
      param_3 = (byte *)(uint)bVar2;
      bVar1 = pbVar7[1];
      bVar2 = pbVar7[2];
      param_2._0_1_ = (undefined1)((int)(param_2 + *pbVar7) >> 1);
      *puVar8 = param_2._0_1_;
      param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
      puVar8[1] = param_1._0_1_;
      puVar8[2] = (char)((int)(param_3 + bVar2) >> 1);
      bVar1 = pbVar6[4];
      param_1 = (byte *)(uint)bVar1;
      bVar2 = pbVar6[5];
      param_2 = (undefined1 *)(uint)pbVar6[3];
      pbVar4[3] = pbVar6[3];
      param_3 = (byte *)(uint)bVar2;
      pbVar4[4] = bVar1;
      pbVar4[5] = bVar2;
      bVar1 = pbVar7[4];
      bVar2 = pbVar7[5];
      param_2._0_1_ = (undefined1)((int)(param_2 + pbVar7[3]) >> 1);
      puVar8[3] = param_2._0_1_;
      param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
      puVar8[4] = param_1._0_1_;
      puVar8[5] = (char)((int)(param_3 + bVar2) >> 1);
      bVar1 = pbVar6[7];
      param_1 = (byte *)(uint)bVar1;
      bVar2 = pbVar6[8];
      param_2 = (undefined1 *)(uint)pbVar6[6];
      pbVar4[6] = pbVar6[6];
      param_3 = (byte *)(uint)bVar2;
      pbVar4[7] = bVar1;
      pbVar4[8] = bVar2;
      pbVar5 = pbVar6 + 0xc;
      bVar1 = pbVar7[7];
      bVar2 = pbVar7[8];
      param_2._0_1_ = (undefined1)((int)(param_2 + pbVar7[6]) >> 1);
      puVar8[6] = param_2._0_1_;
      param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
      puVar8[7] = param_1._0_1_;
      puVar8[8] = (char)((int)(param_3 + bVar2) >> 1);
      bVar1 = pbVar6[10];
      param_1 = (byte *)(uint)bVar1;
      bVar2 = pbVar6[0xb];
      param_2 = (undefined1 *)(uint)pbVar6[9];
      pbVar4[9] = pbVar6[9];
      param_3 = (byte *)(uint)bVar2;
      pbVar4[10] = bVar1;
      pbVar4[0xb] = bVar2;
      bVar1 = pbVar7[10];
      bVar2 = pbVar7[0xb];
      param_2._0_1_ = (undefined1)((int)(param_2 + pbVar7[9]) >> 1);
      puVar8[9] = param_2._0_1_;
      param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
      puVar8[0xb] = (char)((int)(param_3 + bVar2) >> 1);
      puVar8[10] = param_1._0_1_;
      pbVar7 = pbVar7 + 0xc;
      pbVar4 = pbVar4 + 0xc;
      puVar8 = puVar8 + 0xc;
      param_5 = param_5 + -4;
      param_4 = param_4 - 1;
      pbVar6 = pbVar5;
      pbVar3 = param_5;
    } while (param_4 != 0);
  }
  for (; pbVar3 != (byte *)0x0; pbVar3 = pbVar3 + -1) {
    bVar1 = pbVar5[1];
    param_1 = (byte *)(uint)bVar1;
    bVar2 = pbVar5[2];
    param_2 = (undefined1 *)(uint)*pbVar5;
    *pbVar4 = *pbVar5;
    param_5 = (byte *)(uint)bVar2;
    pbVar4[1] = bVar1;
    pbVar4[2] = bVar2;
    bVar1 = pbVar7[1];
    bVar2 = pbVar7[2];
    param_2._0_1_ = (undefined1)((int)(param_2 + *pbVar7) >> 1);
    *puVar8 = param_2._0_1_;
    param_1._0_1_ = (undefined1)((int)(param_1 + bVar1) >> 1);
    puVar8[2] = (char)((int)(param_5 + bVar2) >> 1);
    puVar8[1] = param_1._0_1_;
    pbVar5 = pbVar5 + 3;
    pbVar4 = pbVar4 + 3;
    pbVar7 = pbVar7 + 3;
    puVar8 = puVar8 + 3;
  }
  return;
}


