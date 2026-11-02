/* Module: rnco3260.dll
   Function: FUN_63710e70
   Address: 63710e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63710e70(ushort *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 param_4,
            ushort *param_5,byte *param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte *local_8;
  
  if (param_6 != (byte *)0x0) {
    uVar5 = (uint)(byte)*param_5;
    uVar5 = ((*(byte *)(&DAT_637956a0 + uVar5) & 0xf8) << 5 |
            *(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0xf8) << 2 |
            (uint)(*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) >> 3);
    pbVar7 = (byte *)((int)param_5 + 1);
    uVar1 = *param_1;
    param_1 = param_1 + 2;
    local_8 = param_6 + -1;
    uVar8 = ((uVar1 ^ uVar5) >> 1 & 0x3def) + (uVar1 & uVar5);
    *param_3 = (short)uVar5;
    puVar6 = param_3 + 1;
    *param_2 = (short)uVar8;
    param_5 = param_2 + 1;
    param_6 = pbVar7;
    if (1 < (int)local_8) {
      param_3 = (undefined2 *)((uint)local_8 >> 1);
      do {
        uVar3 = (uint)*param_6;
        uVar3 = ((*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5 |
                *(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xf8) << 2 |
                (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
        uVar1 = (ushort)uVar3;
        puVar6[1] = uVar1;
        *puVar6 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x3def) + (uVar1 & (ushort)uVar5);
        uVar4 = ((*param_1 ^ uVar3) >> 1 & 0x3def) + (*param_1 & uVar3);
        uVar2 = (ushort)uVar4;
        *param_5 = ((ushort)((uVar4 ^ uVar8) >> 1) & 0x3def) + (uVar2 & (ushort)uVar8);
        param_5[1] = uVar2;
        uVar5 = (uint)param_6[1];
        uVar5 = ((*(byte *)(&DAT_637956a0 + uVar5) & 0xf8) << 5 |
                *(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 1) & 0xf8) << 2 |
                (uint)(*(byte *)((int)&DAT_637956a0 + uVar5 * 4 + 2) >> 3);
        puVar6[3] = (ushort)uVar5;
        puVar6[2] = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x3def) + (uVar1 & (ushort)uVar5);
        uVar8 = ((param_1[2] ^ uVar5) >> 1 & 0x3def) + (param_1[2] & uVar5);
        param_1 = param_1 + 4;
        puVar6 = puVar6 + 4;
        param_5[2] = ((ushort)((uVar4 ^ uVar8) >> 1) & 0x3def) + (uVar2 & (ushort)uVar8);
        param_5[3] = (ushort)uVar8;
        param_6 = param_6 + 2;
        param_5 = param_5 + 4;
        local_8 = local_8 + -2;
        param_3 = (undefined2 *)((int)param_3 + -1);
      } while (param_3 != (undefined2 *)0x0);
    }
    if (local_8 != (byte *)0x0) {
      uVar3 = (uint)*param_6;
      uVar3 = (*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 1) & 0xf8 |
              (*(byte *)(&DAT_637956a0 + uVar3) & 0xf8) << 5) << 2 |
              (uint)(*(byte *)((int)&DAT_637956a0 + uVar3 * 4 + 2) >> 3);
      uVar1 = (ushort)uVar3;
      puVar6[1] = uVar1;
      *puVar6 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x3def) + (uVar1 & (ushort)uVar5);
      puVar6[2] = uVar1;
      uVar5 = ((*param_1 ^ uVar3) >> 1 & 0x3def) + (*param_1 & uVar3);
      uVar1 = (ushort)uVar5;
      *param_5 = ((ushort)((uVar5 ^ uVar8) >> 1) & 0x3def) + (uVar1 & (ushort)uVar8);
      param_5[1] = uVar1;
      param_5[2] = uVar1;
      return;
    }
    *puVar6 = (ushort)uVar5;
    *param_5 = (ushort)uVar8;
  }
  return;
}


