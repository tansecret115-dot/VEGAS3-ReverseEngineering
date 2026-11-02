/* Module: rnco3260.dll
   Function: FUN_63701110
   Address: 63701110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63701110(uint *param_1,int *param_2,uint *param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = param_1;
  puVar4 = param_3;
  piVar3 = (int *)param_4;
  param_1 = (uint *)param_2;
  while (((param_2 = piVar3, ((uint)puVar4 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (int *)0x0))) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *puVar4 = uVar1;
    uVar2 = *puVar7;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
    *param_1 = ((uVar2 ^ uVar1) >> 1 & 0x7f7f7f) + (uVar2 & uVar1);
    param_1 = param_1 + 1;
    piVar3 = (int *)((int)param_2 - 1);
  }
  if (3 < (int)param_2) {
    param_3 = (uint *)((uint)param_2 >> 2);
    puVar5 = puVar4;
    puVar6 = param_5;
    puVar8 = puVar7;
    do {
      uVar1 = *puVar6;
      param_5 = puVar6 + 4;
      *puVar5 = uVar1;
      puVar7 = puVar8 + 4;
      puVar4 = puVar5 + 4;
      *param_1 = ((*puVar8 ^ uVar1) >> 1 & 0x7f7f7f) + (*puVar8 & uVar1);
      uVar1 = puVar6[1];
      puVar5[1] = uVar1;
      param_1[1] = ((puVar8[1] ^ uVar1) >> 1 & 0x7f7f7f) + (puVar8[1] & uVar1);
      uVar1 = puVar6[2];
      puVar5[2] = uVar1;
      param_1[2] = ((puVar8[2] ^ uVar1) >> 1 & 0x7f7f7f) + (puVar8[2] & uVar1);
      uVar1 = puVar6[3];
      puVar5[3] = uVar1;
      param_1[3] = ((puVar8[3] ^ uVar1) >> 1 & 0x7f7f7f) + (puVar8[3] & uVar1);
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
      param_3 = (uint *)((int)param_3 + -1);
      puVar5 = puVar4;
      puVar6 = param_5;
      puVar8 = puVar7;
    } while (param_3 != (uint *)0x0);
  }
  for (; param_2 != (int *)0x0; param_2 = (int *)((int)param_2 - 1)) {
    uVar1 = *param_5;
    param_5 = param_5 + 1;
    *puVar4 = uVar1;
    uVar2 = *puVar7;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
    *param_1 = ((uVar2 ^ uVar1) >> 1 & 0x7f7f7f) + (uVar2 & uVar1);
    param_1 = param_1 + 1;
  }
  return;
}


