/* Module: pncrt.dll
   Function: FUN_780084b0
   Address: 780084b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_780084b0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  if (DAT_78041ac0 != (FARPROC)0x0) {
    bVar2 = FUN_78008490(DAT_78041ac0);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iVar3 = (*DAT_78041ac0)(param_1);
      return iVar3;
    }
  }
  return 0;
}


