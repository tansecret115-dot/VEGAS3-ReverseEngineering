/* Module: rnco3260.dll
   Function: FUN_6370d630
   Address: 6370d630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370d630(ushort *param_1,undefined2 *param_2,ushort *param_3,undefined4 param_4,ushort *param_5,
            ushort *param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  if (param_6 != (ushort *)0x0) {
    puVar8 = param_5 + 1;
    puVar6 = param_2 + 1;
    uVar5 = (*param_5 & 0x7fe0) << 1 | *param_5 & 0x1f;
    param_5 = param_1 + 2;
    uVar7 = ((*param_1 ^ uVar5) >> 1 & 0x7bef) + (*param_1 & uVar5);
    param_1 = (ushort *)((int)param_6 - 1);
    *param_3 = (ushort)uVar5;
    *param_2 = (short)uVar7;
    puVar9 = param_3 + 1;
    param_6 = puVar8;
    if (1 < (int)param_1) {
      param_2 = (undefined2 *)((uint)param_1 >> 1);
      puVar8 = puVar9;
      param_3 = puVar6;
      do {
        puVar9 = puVar8 + 4;
        uVar3 = (*param_6 & 0x7fe0) << 1 | *param_6 & 0x1f;
        uVar2 = (ushort)uVar3;
        puVar8[1] = uVar2;
        *puVar8 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar2 & (ushort)uVar5);
        uVar4 = ((*param_5 ^ uVar3) >> 1 & 0x7bef) + (*param_5 & uVar3);
        uVar1 = (ushort)uVar4;
        *param_3 = ((ushort)((uVar4 ^ uVar7) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar7);
        param_3[1] = uVar1;
        puVar6 = param_3 + 4;
        uVar5 = param_6[1] & 0x1f | (param_6[1] & 0x7fe0) << 1;
        puVar8[3] = (ushort)uVar5;
        puVar8[2] = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar2 & (ushort)uVar5);
        uVar7 = ((param_5[2] ^ uVar5) >> 1 & 0x7bef) + (param_5[2] & uVar5);
        param_3[3] = (ushort)uVar7;
        param_6 = param_6 + 2;
        param_3[2] = ((ushort)((uVar4 ^ uVar7) >> 1) & 0x7bef) + (uVar1 & (ushort)uVar7);
        param_5 = param_5 + 4;
        param_1 = param_1 + -1;
        param_2 = (undefined2 *)((int)param_2 + -1);
        puVar8 = puVar9;
        param_3 = puVar6;
      } while (param_2 != (undefined2 *)0x0);
    }
    if (param_1 != (ushort *)0x0) {
      uVar3 = (*param_6 & 0x7fe0) << 1 | *param_6 & 0x1f;
      uVar2 = (ushort)uVar3;
      puVar9[1] = uVar2;
      puVar9[2] = uVar2;
      *puVar9 = ((ushort)((uVar3 ^ uVar5) >> 1) & 0x7bef) + (uVar2 & (ushort)uVar5);
      uVar5 = ((*param_5 ^ uVar3) >> 1 & 0x7bef) + (*param_5 & uVar3);
      uVar2 = (ushort)uVar5;
      puVar6[1] = uVar2;
      puVar6[2] = uVar2;
      *puVar6 = ((ushort)((uVar5 ^ uVar7) >> 1) & 0x7bef) + (uVar2 & (ushort)uVar7);
      return;
    }
    *puVar9 = (ushort)uVar5;
    *puVar6 = (ushort)uVar7;
  }
  return;
}


