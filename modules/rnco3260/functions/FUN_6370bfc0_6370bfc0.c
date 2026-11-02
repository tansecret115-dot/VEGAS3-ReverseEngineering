/* Module: rnco3260.dll
   Function: FUN_6370bfc0
   Address: 6370bfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370bfc0(ushort *param_1,undefined2 *param_2,undefined2 *param_3,undefined4 param_4,
            uint *param_5,ushort *param_6)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint local_8;
  
  if (param_6 != (ushort *)0x0) {
    puVar8 = param_1 + 2;
    uVar5 = *param_5;
    uVar5 = (uVar5 & 0xfc00 | uVar5 >> 0xe & 0x3e0) >> 5 | (uVar5 & 0xf8) << 8;
    uVar6 = *param_1;
    puVar2 = param_5 + 1;
    *param_3 = (short)uVar5;
    uVar7 = ((uVar6 ^ uVar5) >> 1 & 0x7bef) + (uVar6 & uVar5);
    local_8 = (int)param_6 - 1;
    puVar9 = param_3 + 1;
    *param_2 = (short)uVar7;
    param_1 = param_2 + 1;
    param_6 = puVar8;
    if (1 < (int)local_8) {
      param_3 = (undefined2 *)(local_8 >> 1);
      do {
        uVar3 = *puVar2;
        uVar3 = (uVar3 & 0xfc00 | uVar3 >> 0xe & 0x3e0) >> 5 | (uVar3 & 0xf8) << 8;
        uVar6 = (ushort)uVar3;
        puVar9[1] = uVar6;
        *puVar9 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar6 & (ushort)uVar5);
        uVar4 = ((*param_6 ^ uVar3) >> 1 & 0x7bef) + (*param_6 & uVar3);
        uVar1 = (ushort)uVar4;
        param_1[1] = uVar1;
        *param_1 = ((ushort)((uVar4 ^ uVar7) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar7);
        uVar5 = puVar2[1];
        uVar5 = (uVar5 & 0xf8) << 8 | (uVar5 & 0xfc00 | uVar5 >> 0xe & 0x3e0) >> 5;
        puVar9[2] = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar6 & (ushort)uVar5);
        puVar9[3] = (ushort)uVar5;
        uVar7 = ((param_6[2] ^ uVar5) >> 1 & 0x7bef) + (param_6[2] & uVar5);
        param_1[2] = ((ushort)((uVar4 ^ uVar7) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar7);
        puVar2 = puVar2 + 2;
        param_1[3] = (ushort)uVar7;
        param_6 = param_6 + 4;
        local_8 = local_8 - 2;
        puVar9 = puVar9 + 4;
        param_1 = param_1 + 4;
        param_3 = (undefined2 *)((int)param_3 + -1);
      } while (param_3 != (undefined2 *)0x0);
    }
    if (local_8 != 0) {
      uVar3 = *puVar2;
      uVar3 = (uVar3 & 0xfc00 | uVar3 >> 0xe & 0x3e0) >> 5 | (uVar3 & 0xf8) << 8;
      uVar6 = (ushort)uVar3;
      puVar9[1] = uVar6;
      puVar9[2] = uVar6;
      *puVar9 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar6 & (ushort)uVar5);
      uVar5 = ((*param_6 ^ uVar3) >> 1 & 0x7bef) + (*param_6 & uVar3);
      uVar6 = (ushort)uVar5;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      *param_1 = ((ushort)((uVar5 ^ uVar7) >> 1) & 0x7bef) + (uVar6 & (ushort)uVar7);
      return;
    }
    *puVar9 = (ushort)uVar5;
    *param_1 = (ushort)uVar7;
  }
  return;
}


