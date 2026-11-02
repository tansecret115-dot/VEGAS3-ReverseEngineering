/* Module: rnco3260.dll
   Function: FUN_63700ce0
   Address: 63700ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_63700ce0(undefined1 *param_1,int param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_4 >> 1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *param_3;
    do {
      param_3 = param_3 + 1;
      iVar1 = iVar1 - param_2;
    } while (-1 < iVar1);
    iVar1 = iVar1 + param_4;
    param_1 = param_1 + 1;
  }
  return;
}


