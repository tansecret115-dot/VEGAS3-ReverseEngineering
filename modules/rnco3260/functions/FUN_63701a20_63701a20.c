/* Module: rnco3260.dll
   Function: FUN_63701a20
   Address: 63701a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63701a20(uint *param_1,int *param_2,uint *param_3,uint param_4,uint3 *param_5)

{
  uint3 uVar1;
  int *piVar2;
  uint3 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar8 = param_1;
  puVar5 = param_3;
  piVar2 = (int *)param_4;
  param_1 = (uint *)param_2;
  while (((param_2 = piVar2, ((uint)puVar5 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (int *)0x0))) {
    uVar1 = *param_5;
    param_5 = (uint3 *)((int)param_5 + 3);
    uVar6 = (uint)uVar1;
    *puVar5 = uVar6;
    *param_1 = ((*puVar8 ^ uVar6) >> 1 & 0x7f7f7f) + (*puVar8 & uVar6);
    param_1 = param_1 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
    piVar2 = (int *)((int)param_2 - 1);
  }
  if (3 < (int)param_2) {
    param_3 = (uint *)((uint)param_2 >> 2);
    puVar3 = param_5;
    puVar4 = puVar5;
    puVar7 = puVar8;
    do {
      param_5 = puVar3 + 3;
      uVar6 = (uint)*puVar3;
      puVar8 = puVar7 + 4;
      *puVar4 = uVar6;
      puVar5 = puVar4 + 4;
      *param_1 = ((*puVar7 ^ uVar6) >> 1 & 0x7f7f7f) + (*puVar7 & uVar6);
      uVar6 = (uint)*(uint3 *)((int)puVar3 + 3);
      puVar4[1] = uVar6;
      param_1[1] = ((puVar7[1] ^ uVar6) >> 1 & 0x7f7f7f) + (puVar7[1] & uVar6);
      uVar6 = (uint)*(uint3 *)((int)puVar3 + 6);
      puVar4[2] = uVar6;
      param_1[2] = ((puVar7[2] ^ uVar6) >> 1 & 0x7f7f7f) + (puVar7[2] & uVar6);
      uVar6 = (uint)*(uint3 *)((int)puVar3 + 9);
      puVar4[3] = uVar6;
      param_1[3] = ((puVar7[3] ^ uVar6) >> 1 & 0x7f7f7f) + (puVar7[3] & uVar6);
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
      param_3 = (uint *)((int)param_3 + -1);
      puVar3 = param_5;
      puVar4 = puVar5;
      puVar7 = puVar8;
    } while (param_3 != (uint *)0x0);
  }
  for (; param_2 != (int *)0x0; param_2 = (int *)((int)param_2 - 1)) {
    uVar1 = *param_5;
    param_5 = (uint3 *)((int)param_5 + 3);
    uVar6 = (uint)uVar1;
    *puVar5 = uVar6;
    *param_1 = ((*puVar8 ^ uVar6) >> 1 & 0x7f7f7f) + (*puVar8 & uVar6);
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  return;
}


