/* Module: extmondrv.dll
   Function: FUN_00406c40
   Address: 00406c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00406c40(int param_1)

{
  double *pdVar1;
  int iVar2;
  
  iVar2 = 0;
  pdVar1 = (double *)&DAT_0044e120;
  do {
    if ((*(int *)((int)pdVar1 + -0xc) == *(int *)(param_1 + 4)) &&
       (*(int *)(pdVar1 + -1) == *(int *)(param_1 + 8))) {
      if (*(double *)(param_1 + 0x10) - _DAT_0044e230 <= *pdVar1) {
        if (*pdVar1 <= *(double *)(param_1 + 0x10) + _DAT_0044e230) {
          return (&DAT_0044e110)[iVar2 * 8];
        }
      }
    }
    pdVar1 = pdVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (pdVar1 < &DAT_0044e1a0);
  return 0;
}


