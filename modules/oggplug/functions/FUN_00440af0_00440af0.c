/* Module: oggplug.dll
   Function: FUN_00440af0
   Address: 00440af0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_00440af0(float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  *param_1 = *param_1 * _DAT_0044d71c;
  if (1 < param_2) {
    if (param_2 < 2) goto LAB_00440b2f;
    do {
      iVar2 = (param_2 - iVar3) + 1;
      pfVar1 = param_1 + param_2;
      do {
        iVar2 = iVar2 + -1;
        pfVar1[-2] = pfVar1[-2] - *pfVar1;
        *pfVar1 = *pfVar1 + *pfVar1;
        pfVar1 = pfVar1 + -1;
      } while (iVar2 != 0);
LAB_00440b2f:
      iVar3 = iVar3 + 1;
    } while (iVar3 <= param_2);
  }
  return;
}


