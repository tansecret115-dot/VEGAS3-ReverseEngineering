/* Module: pncrt.dll
   Function: FUN_78023f90
   Address: 78023f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78023f90(char *param_1,int param_2,int *param_3)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_78023f30((int)cVar1,param_3);
  } while (*param_3 != -1);
  return;
}


