/* Module: rnco3260.dll
   Function: FUN_63706f70
   Address: 63706f70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63706f70(byte *param_1,uint *param_2,byte *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint *puVar8;
  uint *puVar9;
  
  pbVar6 = param_1;
  puVar8 = param_2;
  pbVar2 = param_3;
  puVar9 = (uint *)param_4;
  param_2 = param_5;
  while (((param_5 = puVar9, ((uint)pbVar2 & 3) != 0 && (((uint)param_2 & 3) != 0)) &&
         (param_5 != (uint *)0x0))) {
    uVar1 = *param_2;
    puVar3 = param_2 + 1;
    bVar4 = (byte)(uVar1 >> 0x10);
    param_1 = (byte *)(uint)bVar4;
    bVar5 = (byte)(uVar1 >> 8);
    param_2 = (uint *)(uint)bVar5;
    *pbVar2 = bVar4;
    pbVar2[1] = bVar5;
    pbVar2[2] = (byte)uVar1;
    bVar4 = pbVar6[1];
    bVar5 = pbVar6[2];
    param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar6) >> 1);
    pbVar2 = pbVar2 + 3;
    *(undefined1 *)puVar8 = param_1._0_1_;
    param_2._0_1_ = (undefined1)((int)((uint)bVar4 + (int)param_2) >> 1);
    *(char *)((int)puVar8 + 2) = (char)((int)((uint)bVar5 + (uVar1 & 0xff)) >> 1);
    *(undefined1 *)((int)puVar8 + 1) = param_2._0_1_;
    pbVar6 = pbVar6 + 3;
    puVar8 = (uint *)((int)puVar8 + 3);
    param_2 = puVar3;
    puVar9 = (uint *)((int)param_5 - 1);
  }
  if (3 < (int)param_5) {
    param_4 = (uint)param_5 >> 2;
    pbVar7 = pbVar6;
    puVar9 = puVar8;
    do {
      uVar1 = *param_2;
      bVar4 = (byte)(uVar1 >> 0x10);
      param_1 = (byte *)(uint)bVar4;
      *pbVar2 = bVar4;
      bVar4 = (byte)(uVar1 >> 8);
      pbVar2[1] = bVar4;
      param_3 = (byte *)(uint)bVar4;
      pbVar2[2] = (byte)uVar1;
      bVar4 = pbVar7[2];
      param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar7) >> 1);
      *(char *)((int)puVar9 + 1) = (char)((int)(param_3 + pbVar7[1]) >> 1);
      *(undefined1 *)puVar9 = param_1._0_1_;
      *(char *)((int)puVar9 + 2) = (char)((int)((uint)bVar4 + (uVar1 & 0xff)) >> 1);
      uVar1 = param_2[1];
      bVar4 = (byte)(uVar1 >> 0x10);
      param_1 = (byte *)(uint)bVar4;
      bVar5 = (byte)(uVar1 >> 8);
      param_3 = (byte *)(uint)bVar5;
      pbVar2[3] = bVar4;
      pbVar2[4] = bVar5;
      pbVar2[5] = (byte)uVar1;
      bVar4 = pbVar7[5];
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar7[3]) >> 1);
      *(char *)(puVar9 + 1) = (char)((int)(param_3 + pbVar7[4]) >> 1);
      *(undefined1 *)((int)puVar9 + 3) = param_1._0_1_;
      *(char *)((int)puVar9 + 5) = (char)((int)((uint)bVar4 + (uVar1 & 0xff)) >> 1);
      uVar1 = param_2[2];
      bVar4 = (byte)(uVar1 >> 0x10);
      param_1 = (byte *)(uint)bVar4;
      bVar5 = (byte)(uVar1 >> 8);
      param_3 = (byte *)(uint)bVar5;
      pbVar2[6] = bVar4;
      pbVar2[7] = bVar5;
      pbVar2[8] = (byte)uVar1;
      bVar4 = pbVar7[8];
      pbVar6 = pbVar7 + 0xc;
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar7[6]) >> 1);
      *(char *)((int)puVar9 + 7) = (char)((int)(param_3 + pbVar7[7]) >> 1);
      *(undefined1 *)((int)puVar9 + 6) = param_1._0_1_;
      *(char *)(puVar9 + 2) = (char)((int)((uint)bVar4 + (uVar1 & 0xff)) >> 1);
      uVar1 = param_2[3];
      puVar8 = puVar9 + 3;
      bVar4 = (byte)(uVar1 >> 0x10);
      param_1 = (byte *)(uint)bVar4;
      bVar5 = (byte)(uVar1 >> 8);
      param_3 = (byte *)(uint)bVar5;
      pbVar2[9] = bVar4;
      pbVar2[10] = bVar5;
      pbVar2[0xb] = (byte)uVar1;
      bVar4 = pbVar7[10];
      bVar5 = pbVar7[0xb];
      pbVar2 = pbVar2 + 0xc;
      param_1._0_1_ = (undefined1)((int)(param_1 + pbVar7[9]) >> 1);
      *(undefined1 *)((int)puVar9 + 9) = param_1._0_1_;
      *(char *)((int)puVar9 + 10) = (char)((int)(param_3 + bVar4) >> 1);
      *(char *)((int)puVar9 + 0xb) = (char)((int)((uint)bVar5 + (uVar1 & 0xff)) >> 1);
      param_2 = param_2 + 4;
      param_5 = param_5 + -1;
      param_4 = param_4 - 1;
      pbVar7 = pbVar6;
      puVar9 = puVar8;
    } while (param_4 != 0);
  }
  for (; param_5 != (uint *)0x0; param_5 = (uint *)((int)param_5 - 1)) {
    uVar1 = *param_2;
    puVar9 = param_2 + 1;
    bVar4 = (byte)(uVar1 >> 0x10);
    param_1 = (byte *)(uint)bVar4;
    bVar5 = (byte)(uVar1 >> 8);
    param_2 = (uint *)(uint)bVar5;
    *pbVar2 = bVar4;
    pbVar2[1] = bVar5;
    pbVar2[2] = (byte)uVar1;
    bVar4 = pbVar6[1];
    bVar5 = pbVar6[2];
    param_1._0_1_ = (undefined1)((int)(param_1 + *pbVar6) >> 1);
    pbVar2 = pbVar2 + 3;
    *(undefined1 *)puVar8 = param_1._0_1_;
    param_2._0_1_ = (undefined1)((int)((uint)bVar4 + (int)param_2) >> 1);
    *(char *)((int)puVar8 + 2) = (char)((int)((uint)bVar5 + (uVar1 & 0xff)) >> 1);
    *(undefined1 *)((int)puVar8 + 1) = param_2._0_1_;
    pbVar6 = pbVar6 + 3;
    puVar8 = (uint *)((int)puVar8 + 3);
    param_2 = puVar9;
  }
  return;
}


