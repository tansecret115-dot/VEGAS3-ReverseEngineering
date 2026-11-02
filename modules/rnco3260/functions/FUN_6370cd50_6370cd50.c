/* Module: rnco3260.dll
   Function: FUN_6370cd50
   Address: 6370cd50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6370cd50(ushort *param_1,short *param_2,ushort *param_3,uint param_4,ushort *param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  puVar6 = param_1;
  puVar3 = param_3;
  for (param_1 = (ushort *)param_4;
      ((((uint)puVar3 & 3) != 0 && (((uint)param_5 & 3) != 0)) && (param_1 != (ushort *)0x0));
      param_1 = (ushort *)((int)param_1 - 1)) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
    *param_2 = ((*puVar6 ^ uVar1) >> 1 & 0x7bef) + (*puVar6 & uVar1);
    puVar6 = puVar6 + 1;
    param_2 = param_2 + 1;
  }
  if (3 < (int)param_1) {
    param_3 = (ushort *)((uint)param_1 >> 2);
    puVar4 = puVar3;
    puVar5 = param_5;
    puVar7 = puVar6;
    do {
      uVar1 = *puVar5;
      param_5 = puVar5 + 4;
      *puVar4 = uVar1;
      puVar6 = puVar7 + 4;
      puVar3 = puVar4 + 4;
      *param_2 = ((*puVar7 ^ uVar1) >> 1 & 0x7bef) + (*puVar7 & uVar1);
      uVar1 = puVar5[1];
      puVar4[1] = uVar1;
      param_2[1] = ((puVar7[1] ^ uVar1) >> 1 & 0x7bef) + (puVar7[1] & uVar1);
      uVar1 = puVar5[2];
      puVar4[2] = uVar1;
      param_2[2] = ((puVar7[2] ^ uVar1) >> 1 & 0x7bef) + (puVar7[2] & uVar1);
      uVar1 = puVar5[3];
      puVar4[3] = uVar1;
      param_1 = param_1 + -2;
      param_2[3] = ((puVar7[3] ^ uVar1) >> 1 & 0x7bef) + (puVar7[3] & uVar1);
      param_2 = param_2 + 4;
      param_3 = (ushort *)((int)param_3 + -1);
      puVar4 = puVar3;
      puVar5 = param_5;
      puVar7 = puVar6;
    } while (param_3 != (ushort *)0x0);
  }
  for (; param_1 != (ushort *)0x0; param_1 = (ushort *)((int)param_1 - 1)) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *puVar3 = uVar1;
    uVar2 = *puVar6;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
    *param_2 = ((uVar2 ^ uVar1) >> 1 & 0x7bef) + (uVar2 & uVar1);
    param_2 = param_2 + 1;
  }
  return;
}


