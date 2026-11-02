/* Module: rnco3260.dll
   Function: FUN_6370a680
   Address: 6370a680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370a680(byte *param_1,undefined1 *param_2,byte *param_3,uint param_4,byte *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  
  pbVar10 = param_1;
  puVar11 = param_2;
  pbVar6 = param_3;
  pbVar4 = (byte *)param_4;
  pbVar7 = param_5;
  while (((param_5 = pbVar4, ((uint)pbVar6 & 3) != 0 && (((uint)pbVar7 & 3) != 0)) &&
         (param_5 != (byte *)0x0))) {
    uVar8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
    param_1 = (byte *)(uint)bVar1;
    bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
    bVar3 = *(byte *)(&DAT_637956a0 + uVar8);
    param_2 = (undefined1 *)(uint)bVar2;
    param_3 = (byte *)(uint)bVar3;
    *pbVar6 = bVar1;
    pbVar6[1] = bVar2;
    pbVar6[2] = bVar3;
    bVar1 = pbVar10[1];
    bVar2 = pbVar10[2];
    param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar10) >> 1);
    *puVar11 = param_1._0_1_;
    param_2._0_1_ = (undefined1)((int)(param_2 + bVar1) >> 1);
    puVar11[2] = (char)((int)(param_3 + bVar2) >> 1);
    puVar11[1] = param_2._0_1_;
    pbVar10 = pbVar10 + 3;
    puVar11 = puVar11 + 3;
    pbVar6 = pbVar6 + 3;
    pbVar4 = param_5 + -1;
  }
  pbVar4 = param_5;
  if (3 < (int)param_5) {
    param_4 = (uint)param_5 >> 2;
    pbVar5 = pbVar6;
    pbVar9 = pbVar10;
    do {
      uVar8 = (uint)*pbVar7;
      bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
      param_1 = (byte *)(uint)bVar1;
      bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
      bVar3 = *(byte *)(&DAT_637956a0 + uVar8);
      param_2 = (undefined1 *)(uint)bVar2;
      param_3 = (byte *)(uint)bVar3;
      *pbVar5 = bVar1;
      pbVar5[1] = bVar2;
      pbVar5[2] = bVar3;
      bVar1 = pbVar9[1];
      bVar2 = pbVar9[2];
      param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar9) >> 1);
      *puVar11 = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar1) >> 1);
      puVar11[2] = (char)((int)(param_3 + bVar2) >> 1);
      puVar11[1] = param_2._0_1_;
      uVar8 = (uint)pbVar7[1];
      bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
      param_1 = (byte *)(uint)bVar1;
      bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
      bVar3 = *(byte *)(&DAT_637956a0 + uVar8);
      param_2 = (undefined1 *)(uint)bVar2;
      param_3 = (byte *)(uint)bVar3;
      pbVar5[3] = bVar1;
      pbVar5[4] = bVar2;
      pbVar5[5] = bVar3;
      bVar1 = pbVar9[4];
      bVar2 = pbVar9[5];
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar9[3]) >> 1);
      puVar11[3] = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar1) >> 1);
      puVar11[5] = (char)((int)(param_3 + bVar2) >> 1);
      puVar11[4] = param_2._0_1_;
      uVar8 = (uint)pbVar7[2];
      bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
      param_1 = (byte *)(uint)bVar1;
      bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
      bVar3 = *(byte *)(&DAT_637956a0 + uVar8);
      param_2 = (undefined1 *)(uint)bVar2;
      param_3 = (byte *)(uint)bVar3;
      pbVar5[6] = bVar1;
      pbVar5[7] = bVar2;
      pbVar5[8] = bVar3;
      bVar1 = pbVar9[7];
      bVar2 = pbVar9[8];
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar9[6]) >> 1);
      puVar11[6] = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar1) >> 1);
      puVar11[8] = (char)((int)(param_3 + bVar2) >> 1);
      puVar11[7] = param_2._0_1_;
      uVar8 = (uint)pbVar7[3];
      pbVar7 = pbVar7 + 4;
      pbVar10 = pbVar9 + 0xc;
      bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
      pbVar6 = pbVar5 + 0xc;
      param_1 = (byte *)(uint)bVar1;
      bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
      bVar3 = *(byte *)(&DAT_637956a0 + uVar8);
      param_2 = (undefined1 *)(uint)bVar2;
      param_3 = (byte *)(uint)bVar3;
      pbVar5[9] = bVar1;
      pbVar5[10] = bVar2;
      pbVar5[0xb] = bVar3;
      bVar1 = pbVar9[10];
      bVar2 = pbVar9[0xb];
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar9[9]) >> 1);
      puVar11[9] = param_1._0_1_;
      param_2._0_1_ = (undefined1)((int)(param_2 + bVar1) >> 1);
      puVar11[0xb] = (char)((int)(param_3 + bVar2) >> 1);
      puVar11[10] = param_2._0_1_;
      puVar11 = puVar11 + 0xc;
      param_5 = param_5 + -4;
      param_4 = param_4 - 1;
      pbVar5 = pbVar6;
      pbVar9 = pbVar10;
      pbVar4 = param_5;
    } while (param_4 != 0);
  }
  for (; pbVar4 != (byte *)0x0; pbVar4 = pbVar4 + -1) {
    uVar8 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar1 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 2);
    param_1 = (byte *)(uint)bVar1;
    bVar2 = *(byte *)((int)&DAT_637956a0 + uVar8 * 4 + 1);
    bVar3 = *(byte *)(&DAT_637956a0 + uVar8);
    param_2 = (undefined1 *)(uint)bVar2;
    param_5 = (byte *)(uint)bVar3;
    *pbVar6 = bVar1;
    pbVar6[1] = bVar2;
    pbVar6[2] = bVar3;
    bVar1 = pbVar10[1];
    bVar2 = pbVar10[2];
    param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar10) >> 1);
    *puVar11 = param_1._0_1_;
    param_2._0_1_ = (undefined1)((int)(param_2 + bVar1) >> 1);
    puVar11[2] = (char)((int)(param_5 + bVar2) >> 1);
    puVar11[1] = param_2._0_1_;
    pbVar6 = pbVar6 + 3;
    pbVar10 = pbVar10 + 3;
    puVar11 = puVar11 + 3;
  }
  return;
}


