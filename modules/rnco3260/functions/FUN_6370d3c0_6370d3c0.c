/* Module: rnco3260.dll
   Function: FUN_6370d3c0
   Address: 6370d3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370d3c0(ushort *param_1,short *param_2,ushort *param_3,uint param_4,ushort *param_5)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  puVar8 = param_1;
  puVar5 = param_3;
  puVar3 = (ushort *)param_2;
  for (param_2 = (short *)param_4;
      ((((uint)puVar5 & 3) != 0 && (((uint)param_5 & 3) != 0)) && (param_2 != (short *)0x0));
      param_2 = (short *)((int)param_2 - 1)) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar2 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
    uVar1 = (ushort)uVar2;
    *puVar5 = uVar1;
    *puVar3 = ((ushort)((*puVar8 ^ uVar2) >> 1) & 0x7bef) + (*puVar8 & uVar1);
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
    puVar3 = puVar3 + 1;
  }
  if (3 < (int)param_2) {
    param_3 = (ushort *)((uint)param_2 >> 2);
    puVar4 = puVar5;
    puVar6 = param_5;
    puVar7 = puVar8;
    param_1 = puVar3;
    do {
      puVar8 = puVar7 + 4;
      param_5 = puVar6 + 4;
      puVar5 = puVar4 + 4;
      uVar2 = (*puVar6 & 0x7fe0) << 1 | *puVar6 & 0x1f;
      uVar1 = (ushort)uVar2;
      *puVar4 = uVar1;
      *param_1 = ((ushort)((*puVar7 ^ uVar2) >> 1) & 0x7bef) + (*puVar7 & uVar1);
      uVar2 = (puVar6[1] & 0x7fe0) << 1 | puVar6[1] & 0x1f;
      uVar1 = (ushort)uVar2;
      puVar4[1] = uVar1;
      param_1[1] = ((ushort)((puVar7[1] ^ uVar2) >> 1) & 0x7bef) + (puVar7[1] & uVar1);
      uVar2 = (puVar6[2] & 0x7fe0) << 1 | puVar6[2] & 0x1f;
      uVar1 = (ushort)uVar2;
      puVar4[2] = uVar1;
      param_1[2] = ((ushort)((puVar7[2] ^ uVar2) >> 1) & 0x7bef) + (puVar7[2] & uVar1);
      uVar2 = (puVar6[3] & 0x7fe0) << 1 | puVar6[3] & 0x1f;
      uVar1 = (ushort)uVar2;
      puVar4[3] = uVar1;
      puVar3 = param_1 + 4;
      param_1[3] = ((ushort)((puVar7[3] ^ uVar2) >> 1) & 0x7bef) + (puVar7[3] & uVar1);
      param_2 = param_2 + -2;
      param_3 = (ushort *)((int)param_3 + -1);
      puVar4 = puVar5;
      puVar6 = param_5;
      puVar7 = puVar8;
      param_1 = puVar3;
    } while (param_3 != (ushort *)0x0);
  }
  for (; param_2 != (short *)0x0; param_2 = (short *)((int)param_2 - 1)) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    uVar2 = (uVar1 & 0x7fe0) << 1 | uVar1 & 0x1f;
    uVar1 = (ushort)uVar2;
    *puVar5 = uVar1;
    *puVar3 = ((ushort)((*puVar8 ^ uVar2) >> 1) & 0x7bef) + (*puVar8 & uVar1);
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


