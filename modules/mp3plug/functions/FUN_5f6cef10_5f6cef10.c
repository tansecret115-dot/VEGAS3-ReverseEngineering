/* Module: mp3plug.dll
   Function: FUN_5f6cef10
   Address: 5f6cef10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6cef10(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != 1) && (param_2 != 1)) {
    iVar3 = param_1;
    iVar4 = param_2;
    if (param_2 < param_1) {
      iVar3 = param_2;
      iVar4 = param_1;
    }
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = iVar4 * iVar2 + -1;
    } while (iVar1 % iVar3 != 0);
    iVar1 = iVar1 / iVar3;
    iVar3 = iVar2;
    if (param_2 < param_1) {
      iVar3 = iVar1;
      iVar1 = iVar2;
    }
    *param_3 = iVar1;
    *param_4 = iVar3;
    return;
  }
  *param_3 = 0;
  *param_4 = 0;
  return;
}


