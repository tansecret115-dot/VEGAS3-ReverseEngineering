/* Module: rnco3260.dll
   Function: FUN_636fe3a0
   Address: 636fe3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fe3a0(ushort *param_1,uint param_2,byte *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  byte *pbVar3;
  uint uVar4;
  
  puVar2 = param_1;
  for (; ((((uint)puVar2 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar4 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar2 = ((*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5 |
              *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xf8) << 2 |
              (ushort)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
    puVar2 = puVar2 + 1;
  }
  if (3 < (int)param_2) {
    param_1 = (ushort *)(param_2 >> 2);
    puVar1 = puVar2;
    pbVar3 = param_3;
    do {
      puVar2 = puVar1 + 4;
      uVar4 = (uint)*pbVar3;
      param_3 = pbVar3 + 4;
      param_2 = param_2 - 4;
      *puVar1 = ((*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5 |
                *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xf8) << 2 |
                (ushort)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      uVar4 = (uint)pbVar3[1];
      puVar1[1] = ((*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5 |
                  *(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xf8) << 2 |
                  (ushort)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      uVar4 = (uint)pbVar3[2];
      puVar1[2] = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xf8 |
                  (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 2 |
                  (ushort)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      uVar4 = (uint)pbVar3[3];
      puVar1[3] = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xf8 |
                  (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 2 |
                  (ushort)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
      param_1 = (ushort *)((int)param_1 + -1);
      puVar1 = puVar2;
      pbVar3 = param_3;
    } while (param_1 != (ushort *)0x0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar4 = (uint)*param_3;
    param_3 = param_3 + 1;
    *puVar2 = (*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 1) & 0xf8 |
              (*(byte *)(&DAT_637956a0 + uVar4) & 0xf8) << 5) << 2 |
              (ushort)(*(byte *)((int)&DAT_637956a0 + uVar4 * 4 + 2) >> 3);
    puVar2 = puVar2 + 1;
  }
  return;
}


