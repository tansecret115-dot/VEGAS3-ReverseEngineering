/* Module: oggplug.dll
   Function: FUN_00435e80
   Address: 00435e80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_00435e80(int *param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = FUN_00435aa0(param_1,param_2,param_3);
  if (param_4 == 0) {
    if (0 < iVar3) {
      iVar2 = iVar1 * iVar3 * 4;
      do {
        iVar2 = iVar2 + 4;
        *param_2 = *param_2 - *(float *)(param_1[3] + -4 + iVar2);
        param_2 = param_2 + param_3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return iVar1;
    }
  }
  else if ((param_4 == 1) && (0 < iVar3)) {
    iVar2 = iVar1 * iVar3 * 4;
    do {
      if (*(float *)(param_1[3] + iVar2) == _DAT_0044d6f0) {
        *param_2 = 0.0;
      }
      else {
        *param_2 = *param_2 / *(float *)(param_1[3] + iVar2);
      }
      iVar2 = iVar2 + 4;
      param_2 = param_2 + param_3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return iVar1;
  }
  return iVar1;
}


