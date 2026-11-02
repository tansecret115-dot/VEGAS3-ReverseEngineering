/* Module: pncrt.dll
   Function: FUN_780156d0
   Address: 780156d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_780156d0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_78042510 != 0) {
    FUN_78015770(param_1,param_3,param_4);
    return;
  }
  if (*param_4 <= param_2) {
    *param_4 = 0;
    return;
  }
  iVar1 = param_2 - 1;
  if (param_2 != 0) {
    do {
      *(char *)(*param_3 + iVar1) = (char)(param_1 % 10) + '0';
      param_1 = param_1 / 10;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *param_3 = *param_3 + iVar2;
  *param_4 = *param_4 - iVar2;
  return;
}


