/* Module: rnco3260.dll
   Function: FUN_6370cf60
   Address: 6370cf60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370cf60(ushort *param_1,undefined2 *param_2,ushort *param_3,undefined4 param_4,ushort *param_5,
            ushort *param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  if (param_6 != (ushort *)0x0) {
    uVar1 = *param_5;
    uVar5 = (uint)uVar1;
    puVar8 = param_5 + 1;
    param_5 = param_1 + 2;
    puVar6 = param_2 + 1;
    uVar7 = ((ushort)((*param_1 ^ uVar1) >> 1) & 0x7bef) + (uint)(*param_1 & uVar1);
    param_1 = (ushort *)((int)param_6 - 1);
    *param_3 = uVar1;
    *param_2 = (short)uVar7;
    puVar9 = param_3 + 1;
    param_6 = puVar8;
    if (1 < (int)param_1) {
      param_2 = (undefined2 *)((uint)param_1 >> 1);
      puVar8 = puVar9;
      param_3 = puVar6;
      do {
        puVar9 = puVar8 + 4;
        uVar1 = *param_6;
        puVar8[1] = uVar1;
        *puVar8 = ((ushort)((uVar1 ^ uVar5) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar5);
        uVar4 = ((ushort)((*param_5 ^ uVar1) >> 1) & 0x7bef) + (uint)(*param_5 & uVar1);
        uVar3 = (ushort)uVar4;
        *param_3 = ((ushort)((uVar4 ^ uVar7) >> 1) & 0x7bef) + (uVar3 & (ushort)uVar7);
        param_3[1] = uVar3;
        uVar2 = param_6[1];
        uVar5 = (uint)uVar2;
        puVar8[3] = uVar2;
        puVar6 = param_3 + 4;
        puVar8[2] = ((uVar1 ^ uVar2) >> 1 & 0x7bef) + (uVar1 & uVar2);
        uVar7 = ((ushort)((param_5[2] ^ uVar2) >> 1) & 0x7bef) + (uint)(param_5[2] & uVar2);
        param_3[3] = (ushort)uVar7;
        param_3[2] = ((ushort)((uVar4 ^ uVar7) >> 1) & 0x7bef) + (uVar3 & (ushort)uVar7);
        param_6 = param_6 + 2;
        param_5 = param_5 + 4;
        param_1 = param_1 + -1;
        param_2 = (undefined2 *)((int)param_2 + -1);
        puVar8 = puVar9;
        param_3 = puVar6;
      } while (param_2 != (undefined2 *)0x0);
    }
    if (param_1 != (ushort *)0x0) {
      uVar1 = *param_6;
      puVar9[1] = uVar1;
      puVar9[2] = uVar1;
      *puVar9 = ((ushort)((uVar1 ^ uVar5) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar5);
      uVar5 = ((ushort)((*param_5 ^ uVar1) >> 1) & 0x7bef) + (uint)(*param_5 & uVar1);
      uVar1 = (ushort)uVar5;
      puVar6[1] = uVar1;
      puVar6[2] = uVar1;
      *puVar6 = ((ushort)((uVar5 ^ uVar7) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar7);
      return;
    }
    *puVar9 = (ushort)uVar5;
    *puVar6 = (ushort)uVar7;
  }
  return;
}


