/* Module: rnco3260.dll
   Function: FUN_63704370
   Address: 63704370
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63704370(uint *param_1,int *param_2,uint *param_3,uint param_4,undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar9 = param_1;
  puVar6 = param_3;
  piVar3 = (int *)param_4;
  param_1 = (uint *)param_2;
  while (((param_2 = piVar3, ((uint)puVar6 & 3) != 0 && (((uint)param_5 & 3) != 0)) &&
         (param_2 != (int *)0x0))) {
    uVar2 = *param_5;
    puVar4 = param_5 + 2;
    puVar1 = param_5 + 1;
    param_5 = param_5 + 3;
    uVar7 = (uint)CONCAT21(CONCAT11(uVar2,*puVar1),*puVar4);
    *puVar6 = uVar7;
    *param_1 = ((*puVar9 ^ uVar7) >> 1 & 0x7f7f7f) + (*puVar9 & uVar7);
    param_1 = param_1 + 1;
    puVar9 = puVar9 + 1;
    puVar6 = puVar6 + 1;
    piVar3 = (int *)((int)param_2 - 1);
  }
  if (3 < (int)param_2) {
    param_3 = (uint *)((uint)param_2 >> 2);
    puVar4 = param_5;
    puVar5 = puVar6;
    puVar8 = puVar9;
    do {
      param_5 = puVar4 + 0xc;
      uVar7 = (uint)CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]);
      puVar9 = puVar8 + 4;
      *puVar5 = uVar7;
      puVar6 = puVar5 + 4;
      *param_1 = ((*puVar8 ^ uVar7) >> 1 & 0x7f7f7f) + (*puVar8 & uVar7);
      uVar7 = (uint)CONCAT21(CONCAT11(puVar4[3],puVar4[4]),puVar4[5]);
      puVar5[1] = uVar7;
      param_1[1] = ((puVar8[1] ^ uVar7) >> 1 & 0x7f7f7f) + (puVar8[1] & uVar7);
      uVar7 = (uint)CONCAT21(CONCAT11(puVar4[6],puVar4[7]),puVar4[8]);
      puVar5[2] = uVar7;
      param_1[2] = ((puVar8[2] ^ uVar7) >> 1 & 0x7f7f7f) + (puVar8[2] & uVar7);
      uVar7 = (uint)CONCAT21(CONCAT11(puVar4[9],puVar4[10]),puVar4[0xb]);
      puVar5[3] = uVar7;
      param_1[3] = ((puVar8[3] ^ uVar7) >> 1 & 0x7f7f7f) + (puVar8[3] & uVar7);
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
      param_3 = (uint *)((int)param_3 + -1);
      puVar4 = param_5;
      puVar5 = puVar6;
      puVar8 = puVar9;
    } while (param_3 != (uint *)0x0);
  }
  for (; param_2 != (int *)0x0; param_2 = (int *)((int)param_2 - 1)) {
    puVar4 = param_5 + 1;
    puVar1 = param_5 + 2;
    uVar2 = *param_5;
    param_5 = param_5 + 3;
    uVar7 = (uint)CONCAT21(CONCAT11(uVar2,*puVar4),*puVar1);
    *puVar6 = uVar7;
    *param_1 = ((*puVar9 ^ uVar7) >> 1 & 0x7f7f7f) + (*puVar9 & uVar7);
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  return;
}


