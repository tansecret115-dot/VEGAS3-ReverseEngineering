/* Module: mcmpgdec.dll
   Function: FUN_1000b810
   Address: 1000b810
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000b810(int *param_1,byte param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x10 << (param_2 & 0x1f);
  iVar1 = *param_1;
  if (param_5 != 0) {
    iVar1 = iVar1 >> 1;
  }
  if ((int)param_3 < 1) {
    if (((int)param_3 < 0) &&
       (iVar1 = (iVar1 + -1) - ((~param_3 << (param_2 & 0x1f)) + param_4), iVar1 < -iVar2)) {
      iVar1 = iVar1 + iVar2 * 2;
    }
  }
  else {
    iVar1 = (param_3 - 1 << (param_2 & 0x1f)) + param_4 + 1 + iVar1;
    if (iVar2 <= iVar1) {
      iVar1 = iVar1 + iVar2 * -2;
    }
  }
  *param_1 = iVar1;
  if (param_5 != 0) {
    *param_1 = iVar1 * 2;
  }
  return;
}


