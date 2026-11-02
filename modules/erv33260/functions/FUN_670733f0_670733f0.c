/* Module: erv33260.dll
   Function: FUN_670733f0
   Address: 670733f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_670733f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_ac [3];
  undefined4 local_a0 [5];
  undefined4 local_8c [34];
  
  FUN_67077b20(local_ac);
  puVar2 = local_a0;
  puVar3 = param_1;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0xc] = 0;
  puVar2 = local_8c;
  puVar3 = param_1 + 5;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}


