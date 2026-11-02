/* Module: extmondrv.dll
   Function: FUN_00406bf0
   Address: 00406bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406bf0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar2 = 0;
  piVar1 = &DAT_0044e110;
  do {
    if (param_1 == *piVar1) {
      puVar4 = &DAT_0044e110 + iVar2 * 8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
      return 1;
    }
    piVar1 = piVar1 + 8;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_0044e190);
  return 0;
}


