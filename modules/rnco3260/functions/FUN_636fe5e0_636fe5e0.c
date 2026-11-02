/* Module: rnco3260.dll
   Function: FUN_636fe5e0
   Address: 636fe5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636fe5e0(undefined2 *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (param_4 != 0) {
    uVar3 = (uint)*param_3;
    pbVar5 = param_3 + 1;
    param_4 = param_4 - 1;
    uVar3 = ((*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5 |
            *(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xf8) << 2 |
            (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
    *param_1 = (short)uVar3;
    puVar7 = param_1 + 1;
    if (1 < (int)param_4) {
      param_3 = (byte *)(param_4 >> 1);
      pbVar4 = pbVar5;
      puVar6 = puVar7;
      do {
        puVar7 = puVar6 + 4;
        uVar2 = (uint)*pbVar4;
        pbVar5 = pbVar4 + 2;
        uVar2 = ((*(byte *)(&DAT_637956a0 + uVar2) & 0xf8) << 5 |
                *(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0xf8) << 2 |
                (uint)(*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) >> 3);
        uVar1 = (ushort)uVar2;
        puVar6[1] = uVar1;
        *puVar6 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
        uVar3 = (uint)pbVar4[1];
        uVar3 = ((*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5 |
                *(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xf8) << 2 |
                (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
        puVar6[3] = (ushort)uVar3;
        puVar6[2] = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
        param_4 = param_4 - 2;
        param_3 = param_3 + -1;
        pbVar4 = pbVar5;
        puVar6 = puVar7;
      } while (param_3 != (byte *)0x0);
    }
    if (param_4 != 0) {
      uVar2 = (uint)*pbVar5;
      uVar2 = ((*(byte *)(&DAT_637956a0 + uVar2) & 0xf8) << 5 |
              *(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 1) & 0xf8) << 2 |
              (uint)(*(byte *)((int)&DAT_637956a0 + uVar2 * 4 + 2) >> 3);
      uVar1 = (ushort)uVar2;
      puVar7[1] = uVar1;
      puVar7[2] = uVar1;
      *puVar7 = ((ushort)((uVar2 ^ uVar3) >> 1) & 0x3def) + (uVar1 & (ushort)uVar3);
      return;
    }
    *puVar7 = (ushort)uVar3;
  }
  return;
}


