/* Module: tokr3260.dll
   Function: FUN_68055100
   Address: 68055100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_68055100(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  if (0 < param_2) {
    do {
      iVar1 = *param_1;
      if (iVar1 == 0) {
        iVar1 = FUN_68053920(iVar2);
        *param_3 = *param_3 + iVar1;
      }
      else if (iVar1 == 1) {
        iVar1 = FUN_68053920(iVar2);
        param_3[1] = param_3[1] + iVar1;
      }
      else if (iVar1 < 7) {
        iVar1 = FUN_68053920(iVar2);
        param_3[2] = param_3[2] + iVar1;
      }
      else {
        iVar1 = FUN_68053920(iVar2);
        param_3[3] = param_3[3] + iVar1;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
    } while (iVar2 < param_2);
  }
  return;
}


