/* Module: stl2plg.dll
   Function: FUN_00417b60
   Address: 00417b60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00417b60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      if ((FILE *)param_1[1] != (FILE *)0x0) {
        iVar2 = fclose((FILE *)param_1[1]);
      }
    }
    else if (iVar1 == 1) {
      if (param_1[4] != 0) {
        param_1[4] = 0;
        free(param_1);
        return 0;
      }
    }
    else if (iVar1 == 2) {
      if (param_1[2] == 0) {
        param_1[2] = 2;
        free(param_1);
        return -1;
      }
      if (param_1[2] == 1) {
        param_1[1] = 0;
        param_1[2] = 2;
        free(param_1);
        return 0;
      }
    }
    free(param_1);
  }
  return iVar2;
}


