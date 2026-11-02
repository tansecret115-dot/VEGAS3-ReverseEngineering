/* Module: rnco3260.dll
   Function: FUN_636f7e70
   Address: 636f7e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f7e70(uint *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  
  for (; ((((uint)param_1 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar2 = *param_3;
    puVar3 = param_3 + 2;
    puVar1 = param_3 + 1;
    param_3 = param_3 + 3;
    *param_1 = (uint)CONCAT21(CONCAT11(uVar2,*puVar1),*puVar3);
    param_1 = param_1 + 1;
  }
  if (3 < (int)param_2) {
    uVar5 = param_2 >> 2;
    puVar3 = param_3;
    puVar4 = param_1;
    do {
      param_3 = puVar3 + 0xc;
      *puVar4 = (uint)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
      param_1 = puVar4 + 4;
      param_2 = param_2 - 4;
      puVar4[1] = (uint)CONCAT21(CONCAT11(puVar3[3],puVar3[4]),puVar3[5]);
      puVar4[2] = (uint)CONCAT21(CONCAT11(puVar3[6],puVar3[7]),puVar3[8]);
      uVar5 = uVar5 - 1;
      puVar4[3] = (uint)CONCAT21(CONCAT11(puVar3[9],puVar3[10]),puVar3[0xb]);
      puVar3 = param_3;
      puVar4 = param_1;
    } while (uVar5 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar2 = *param_3;
    puVar3 = param_3 + 2;
    puVar1 = param_3 + 1;
    param_3 = param_3 + 3;
    *param_1 = (uint)CONCAT21(CONCAT11(uVar2,*puVar1),*puVar3);
    param_1 = param_1 + 1;
  }
  return;
}


