/* Module: erv23260.dll
   Function: FUN_63803920
   Address: 63803920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_63803920(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_c0 [3];
  undefined4 local_b4 [5];
  undefined4 local_a0 [39];
  
  FUN_63808900(local_c0);
  puVar2 = local_b4;
  puVar3 = param_1;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0xc] = 0;
  puVar2 = local_a0;
  puVar3 = param_1 + 5;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}


