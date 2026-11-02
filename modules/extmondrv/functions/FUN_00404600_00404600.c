/* Module: extmondrv.dll
   Function: FUN_00404600
   Address: 00404600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404600(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_1[8] = 1;
    param_1[10] = 1;
  }
  return;
}


