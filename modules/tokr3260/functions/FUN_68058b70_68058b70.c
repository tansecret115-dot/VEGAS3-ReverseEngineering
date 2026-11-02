/* Module: tokr3260.dll
   Function: FUN_68058b70
   Address: 68058b70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_68058b70(int param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = FUN_68058d10((int)param_2,param_1);
  if (iVar1 != -999999) {
    if (0 < param_1) {
      do {
        param_1 = param_1 + -1;
        *param_2 = *param_2 + *param_2;
        param_2 = param_2 + 1;
      } while (param_1 != 0);
    }
    return 0;
  }
  return 0xfff0bdc1;
}


