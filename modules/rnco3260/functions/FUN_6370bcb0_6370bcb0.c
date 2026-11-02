/* Module: rnco3260.dll
   Function: FUN_6370bcb0
   Address: 6370bcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6370bcb0(ushort *param_1,short *param_2,ushort *param_3,uint param_4,uint *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  short *psVar6;
  
  puVar5 = param_1;
  psVar6 = param_2;
  for (param_1 = (ushort *)param_4;
      ((((uint)param_3 & 3) != 0 && (((uint)param_5 & 3) != 0)) && (param_1 != (ushort *)0x0));
      param_1 = (ushort *)((int)param_1 - 1)) {
    uVar4 = *param_5;
    param_5 = param_5 + 1;
    uVar4 = (uVar4 & 0xfc00 | uVar4 >> 0xe & 0x3e0) >> 5 | (uVar4 & 0xf8) << 8;
    uVar2 = (ushort)uVar4;
    *param_3 = uVar2;
    uVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    *psVar6 = ((ushort)((uVar3 ^ uVar4) >> 1) & 0x7bef) + (uVar3 & uVar2);
    psVar6 = psVar6 + 1;
    param_3 = param_3 + 1;
  }
  if (3 < (int)param_1) {
    param_2 = (short *)((uint)param_1 >> 2);
    do {
      uVar4 = *param_5;
      uVar4 = (uVar4 & 0xfc00 | uVar4 >> 0xe & 0x3e0) >> 5 | (uVar4 & 0xf8) << 8;
      uVar3 = (ushort)uVar4;
      *param_3 = uVar3;
      *psVar6 = ((ushort)((*puVar5 ^ uVar4) >> 1) & 0x7bef) + (*puVar5 & uVar3);
      uVar4 = param_5[1];
      uVar4 = (uVar4 & 0xfc00 | uVar4 >> 0xe & 0x3e0) >> 5 | (uVar4 & 0xf8) << 8;
      uVar3 = (ushort)uVar4;
      param_3[1] = uVar3;
      psVar6[1] = ((ushort)((puVar5[1] ^ uVar4) >> 1) & 0x7bef) + (puVar5[1] & uVar3);
      uVar4 = param_5[2];
      uVar4 = (uVar4 & 0xfc00 | uVar4 >> 0xe & 0x3e0) >> 5 | (uVar4 & 0xf8) << 8;
      uVar3 = (ushort)uVar4;
      param_3[2] = uVar3;
      psVar6[2] = ((ushort)((puVar5[2] ^ uVar4) >> 1) & 0x7bef) + (puVar5[2] & uVar3);
      uVar4 = param_5[3];
      param_5 = param_5 + 4;
      uVar4 = (uVar4 & 0xfc00 | uVar4 >> 0xe & 0x3e0) >> 5 | (uVar4 & 0xf8) << 8;
      uVar3 = (ushort)uVar4;
      param_3[3] = uVar3;
      puVar1 = puVar5 + 3;
      puVar5 = puVar5 + 4;
      psVar6[3] = ((ushort)((*puVar1 ^ uVar4) >> 1) & 0x7bef) + (*puVar1 & uVar3);
      param_3 = param_3 + 4;
      psVar6 = psVar6 + 4;
      param_1 = param_1 + -2;
      param_2 = (short *)((int)param_2 + -1);
    } while (param_2 != (short *)0x0);
  }
  for (; param_1 != (ushort *)0x0; param_1 = (ushort *)((int)param_1 - 1)) {
    uVar4 = *param_5;
    param_5 = param_5 + 1;
    uVar4 = (uVar4 & 0xfc00 | uVar4 >> 0xe & 0x3e0) >> 5 | (uVar4 & 0xf8) << 8;
    uVar2 = (ushort)uVar4;
    *param_3 = uVar2;
    uVar3 = *puVar5;
    puVar5 = puVar5 + 1;
    *psVar6 = ((ushort)((uVar3 ^ uVar4) >> 1) & 0x7bef) + (uVar3 & uVar2);
    psVar6 = psVar6 + 1;
    param_3 = param_3 + 1;
  }
  return;
}


