/* Module: tokr3260.dll
   Function: FUN_68054f90
   Address: 68054f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68054f90(undefined4 param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (0 < param_3) {
    do {
      iVar1 = ftol();
      *param_2 = iVar1 - param_5;
      if (param_4 < iVar1 - param_5) {
        *param_2 = param_4;
      }
      if (*param_2 < 1) {
        *param_2 = 1;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


