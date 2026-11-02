/* Module: rnco3260.dll
   Function: FUN_6370db20
   Address: 6370db20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_6370db20(ushort *param_1,short *param_2,ushort *param_3,uint param_4,byte *param_5)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar6 = param_1;
  puVar2 = param_3;
  psVar1 = (short *)param_4;
  param_1 = (ushort *)param_2;
  while (((param_2 = psVar1, ((uint)puVar2 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (short *)0x0))) {
    uVar4 = (uint)*param_5;
    uVar4 = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xfc |
            (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 3 |
            (uint)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
    uVar3 = (ushort)uVar4;
    *puVar2 = uVar3;
    param_5 = param_5 + 1;
    *param_1 = ((ushort)((*puVar6 ^ uVar4) >> 1) & 0x7bef) + (*puVar6 & uVar3);
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
    puVar2 = puVar2 + 1;
    psVar1 = (short *)((int)param_2 - 1);
  }
  if (3 < (int)param_2) {
    param_3 = (ushort *)((uint)param_2 >> 2);
    puVar5 = puVar6;
    do {
      uVar4 = (uint)*param_5;
      uVar4 = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xfc |
              (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 3 |
              (uint)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      uVar3 = (ushort)uVar4;
      *puVar2 = uVar3;
      *param_1 = ((ushort)((*puVar5 ^ uVar4) >> 1) & 0x7bef) + (*puVar5 & uVar3);
      uVar4 = (uint)param_5[1];
      uVar4 = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xfc |
              (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 3 |
              (uint)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      uVar3 = (ushort)uVar4;
      puVar2[1] = uVar3;
      param_1[1] = ((ushort)((puVar5[1] ^ uVar4) >> 1) & 0x7bef) + (puVar5[1] & uVar3);
      uVar4 = (uint)param_5[2];
      uVar4 = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xfc |
              (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 3 |
              (uint)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      uVar3 = (ushort)uVar4;
      puVar2[2] = uVar3;
      param_1[2] = ((ushort)((puVar5[2] ^ uVar4) >> 1) & 0x7bef) + (puVar5[2] & uVar3);
      uVar4 = (uint)param_5[3];
      param_5 = param_5 + 4;
      puVar6 = puVar5 + 4;
      uVar4 = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xfc |
              (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 3 |
              (uint)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      uVar3 = (ushort)uVar4;
      puVar2[3] = uVar3;
      puVar2 = puVar2 + 4;
      param_1[3] = ((ushort)((puVar5[3] ^ uVar4) >> 1) & 0x7bef) + (puVar5[3] & uVar3);
      param_1 = param_1 + 4;
      param_2 = param_2 + -2;
      param_3 = (ushort *)((int)param_3 + -1);
      puVar5 = puVar6;
    } while (param_3 != (ushort *)0x0);
  }
  for (; param_2 != (short *)0x0; param_2 = (short *)((int)param_2 - 1)) {
    uVar4 = (uint)*param_5;
    uVar4 = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xfc |
            (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 3 |
            (uint)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
    uVar3 = (ushort)uVar4;
    *puVar2 = uVar3;
    param_5 = param_5 + 1;
    *param_1 = ((ushort)((*puVar6 ^ uVar4) >> 1) & 0x7bef) + (*puVar6 & uVar3);
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  return;
}


