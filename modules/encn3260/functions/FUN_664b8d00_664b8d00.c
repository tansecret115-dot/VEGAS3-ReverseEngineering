/* Module: encn3260.dll
   Function: FUN_664b8d00
   Address: 664b8d00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_664b8d00(int *param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if ((((*param_2 < (int)param_3) && (param_2[1] < (int)param_4)) && (0 < param_2[2])) &&
     (0 < param_2[3])) {
    if (*param_2 < 0) {
      iVar1 = ftol();
      *param_1 = -iVar1;
      *param_2 = 0;
    }
    if (param_2[1] < 0) {
      iVar1 = ftol();
      param_1[1] = -iVar1;
      param_2[1] = 0;
    }
    if (param_3 < (uint)param_2[2]) {
      iVar1 = ftol();
      param_1[2] = param_1[2] - iVar1;
      param_2[2] = param_3;
    }
    if (param_4 < (uint)param_2[3]) {
      iVar1 = ftol();
      param_1[3] = param_1[3] - iVar1;
      param_2[3] = param_4;
    }
    iVar1 = FUN_664b8c70(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_664b8c70(param_2), iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}


