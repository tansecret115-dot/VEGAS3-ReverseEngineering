/* Module: rnco3260.dll
   Function: FUN_6370b760
   Address: 6370b760
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370b760(ushort *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 param_4,
            uint *param_5,ushort *param_6)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint local_8;
  
  if (param_6 != (ushort *)0x0) {
    puVar7 = param_1 + 2;
    uVar4 = *param_5;
    uVar5 = *param_1;
    uVar4 = ((uVar4 & 0xfc00 | uVar4 >> 3 & 0x1f0000) >> 2 | uVar4 & 0xf8) >> 3;
    puVar1 = param_5 + 1;
    *param_3 = (short)uVar4;
    uVar6 = ((uVar5 ^ uVar4) >> 1 & 0x7bef) + (uVar5 & uVar4);
    local_8 = (int)param_6 - 1;
    puVar8 = param_3 + 1;
    *param_2 = (short)uVar6;
    param_1 = param_2 + 1;
    param_6 = puVar7;
    if (1 < (int)local_8) {
      param_3 = (undefined2 *)(local_8 >> 1);
      do {
        uVar2 = *puVar1;
        uVar2 = (uVar2 & 0xfc00 | uVar2 >> 3 & 0x1f0000) >> 2 | uVar2 & 0xf8;
        uVar3 = uVar2 >> 3;
        puVar8[1] = (ushort)uVar3;
        *puVar8 = ((ushort)((uVar3 ^ uVar4) >> 1) & 0x7bef) + ((ushort)uVar3 & (ushort)uVar4);
        uVar3 = ((*param_6 ^ uVar3) >> 1 & 0x7bef) + (*param_6 & uVar3);
        uVar5 = (ushort)uVar3;
        param_1[1] = uVar5;
        *param_1 = ((ushort)((uVar3 ^ uVar6) >> 1) & 0x7bef) + (uVar5 & (ushort)uVar6);
        uVar4 = puVar1[1];
        uVar6 = (uVar4 & 0xfc00 | uVar4 >> 3 & 0x1f0000) >> 2 | uVar4 & 0xf8;
        uVar4 = uVar6 >> 3;
        puVar8[3] = (ushort)uVar4;
        puVar8[2] = ((ushort)((uVar2 ^ uVar6) >> 4) & 0x7bef) + (short)((uVar2 & uVar6) >> 3);
        uVar6 = ((param_6[2] ^ uVar4) >> 1 & 0x7bef) + (param_6[2] & uVar4);
        param_1[2] = ((ushort)((uVar3 ^ uVar6) >> 1) & 0x7bef) + (uVar5 & (ushort)uVar6);
        puVar1 = puVar1 + 2;
        param_1[3] = (ushort)uVar6;
        param_6 = param_6 + 4;
        puVar8 = puVar8 + 4;
        local_8 = local_8 - 2;
        param_1 = param_1 + 4;
        param_3 = (undefined2 *)((int)param_3 + -1);
      } while (param_3 != (undefined2 *)0x0);
    }
    if (local_8 != 0) {
      uVar2 = *puVar1;
      uVar2 = ((uVar2 & 0xfc00 | uVar2 >> 3 & 0x1f0000) >> 2 | uVar2 & 0xf8) >> 3;
      uVar5 = (ushort)uVar2;
      puVar8[1] = uVar5;
      puVar8[2] = uVar5;
      *puVar8 = ((ushort)((uVar2 ^ uVar4) >> 1) & 0x7bef) + (uVar5 & (ushort)uVar4);
      uVar4 = ((*param_6 ^ uVar2) >> 1 & 0x7bef) + (*param_6 & uVar2);
      uVar5 = (ushort)uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar5;
      *param_1 = ((ushort)((uVar4 ^ uVar6) >> 1) & 0x7bef) + (uVar5 & (ushort)uVar6);
      return;
    }
    *puVar8 = (ushort)uVar4;
    *param_1 = (ushort)uVar6;
  }
  return;
}


