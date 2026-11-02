/* Module: rnco3260.dll
   Function: FUN_6370c510
   Address: 6370c510
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6370c510(ushort *param_1,short *param_2,ushort *param_3,uint param_4,byte *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  short *psVar8;
  
  puVar7 = param_1;
  psVar8 = param_2;
  for (param_1 = (ushort *)param_4;
      ((((uint)param_3 & 3) != 0 && (((uint)param_5 & 3) != 0)) && (param_1 != (ushort *)0x0));
      param_1 = (ushort *)((int)param_1 - 1)) {
    pbVar1 = param_5 + 2;
    pbVar2 = param_5 + 1;
    bVar3 = *param_5;
    param_5 = param_5 + 3;
    uVar6 = ((*pbVar1 & 0xf8) << 5 | *pbVar2 & 0xfc) << 3 | (uint)(bVar3 >> 3);
    uVar4 = (ushort)uVar6;
    *param_3 = uVar4;
    param_3 = param_3 + 1;
    *psVar8 = ((ushort)((*puVar7 ^ uVar6) >> 1) & 0x7bef) + (*puVar7 & uVar4);
    puVar7 = puVar7 + 1;
    psVar8 = psVar8 + 1;
  }
  if (3 < (int)param_1) {
    param_2 = (short *)((uint)param_1 >> 2);
    do {
      uVar6 = (param_5[1] & 0xfc | (param_5[2] & 0xf8) << 5) << 3 | (uint)(*param_5 >> 3);
      uVar4 = (ushort)uVar6;
      *param_3 = uVar4;
      *psVar8 = ((ushort)((*puVar7 ^ uVar6) >> 1) & 0x7bef) + (*puVar7 & uVar4);
      uVar6 = (param_5[4] & 0xfc | (param_5[5] & 0xf8) << 5) << 3 | (uint)(param_5[3] >> 3);
      uVar4 = (ushort)uVar6;
      param_3[1] = uVar4;
      psVar8[1] = ((ushort)((puVar7[1] ^ uVar6) >> 1) & 0x7bef) + (puVar7[1] & uVar4);
      uVar6 = (param_5[7] & 0xfc | (param_5[8] & 0xf8) << 5) << 3 | (uint)(param_5[6] >> 3);
      uVar4 = (ushort)uVar6;
      param_3[2] = uVar4;
      psVar8[2] = ((ushort)((puVar7[2] ^ uVar6) >> 1) & 0x7bef) + (puVar7[2] & uVar4);
      uVar6 = (param_5[10] & 0xfc | (param_5[0xb] & 0xf8) << 5) << 3 | (uint)(param_5[9] >> 3);
      uVar4 = (ushort)uVar6;
      param_3[3] = uVar4;
      param_5 = param_5 + 0xc;
      psVar8[3] = ((ushort)((puVar7[3] ^ uVar6) >> 1) & 0x7bef) + (puVar7[3] & uVar4);
      puVar7 = puVar7 + 4;
      param_3 = param_3 + 4;
      psVar8 = psVar8 + 4;
      param_1 = param_1 + -2;
      param_2 = (short *)((int)param_2 + -1);
    } while (param_2 != (short *)0x0);
  }
  for (; param_1 != (ushort *)0x0; param_1 = (ushort *)((int)param_1 - 1)) {
    pbVar1 = param_5 + 2;
    pbVar2 = param_5 + 1;
    bVar3 = *param_5;
    param_5 = param_5 + 3;
    uVar6 = (*pbVar2 & 0xfc | (*pbVar1 & 0xf8) << 5) << 3 | (uint)(bVar3 >> 3);
    uVar5 = (ushort)uVar6;
    *param_3 = uVar5;
    uVar4 = *puVar7;
    param_3 = param_3 + 1;
    puVar7 = puVar7 + 1;
    *psVar8 = ((ushort)((uVar4 ^ uVar6) >> 1) & 0x7bef) + (uVar4 & uVar5);
    psVar8 = psVar8 + 1;
  }
  return;
}


