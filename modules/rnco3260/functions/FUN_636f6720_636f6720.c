/* Module: rnco3260.dll
   Function: FUN_636f6720
   Address: 636f6720
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_636f6720(uint *param_1,uint param_2,uint3 *param_3)

{
  uint3 uVar1;
  uint3 *puVar2;
  uint *puVar3;
  uint uVar4;
  
  for (; ((((uint)param_1 & 3) != 0 && (((uint)param_3 & 3) != 0)) && (param_2 != 0));
      param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = (uint3 *)((int)param_3 + 3);
    *param_1 = (uint)uVar1;
    param_1 = param_1 + 1;
  }
  if (3 < (int)param_2) {
    uVar4 = param_2 >> 2;
    puVar2 = param_3;
    puVar3 = param_1;
    do {
      param_3 = puVar2 + 3;
      *puVar3 = (uint)*puVar2;
      param_1 = puVar3 + 4;
      param_2 = param_2 - 4;
      puVar3[1] = (uint)*(uint3 *)((int)puVar2 + 3);
      puVar3[2] = (uint)*(uint3 *)((int)puVar2 + 6);
      uVar4 = uVar4 - 1;
      puVar3[3] = (uint)*(uint3 *)((int)puVar2 + 9);
      puVar2 = param_3;
      puVar3 = param_1;
    } while (uVar4 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *param_3;
    param_3 = (uint3 *)((int)param_3 + 3);
    *param_1 = (uint)uVar1;
    param_1 = param_1 + 1;
  }
  return;
}


