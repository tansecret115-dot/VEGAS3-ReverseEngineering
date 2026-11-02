/* Module: extmondrv.dll
   Function: FUN_00409fc0
   Address: 00409fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409fc0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0044e3d8;
  do {
    if (param_1 == *piVar1) {
      *param_2 = (&DAT_0044e4e0)[iVar2 * 0x46];
      return;
    }
    piVar1 = piVar1 + 0x46;
    iVar2 = iVar2 + 1;
  } while (piVar1 < &DAT_0044e838);
  return;
}


