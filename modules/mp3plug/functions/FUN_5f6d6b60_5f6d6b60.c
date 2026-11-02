/* Module: mp3plug.dll
   Function: FUN_5f6d6b60
   Address: 5f6d6b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d6b60(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *param_2 = iVar3;
    iVar3 = 1;
  }
  for (; iVar3 < (int)param_3; iVar3 = iVar3 + 2) {
    iVar1 = param_1[iVar3];
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = param_1[iVar3 + 1];
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    param_2[iVar3 + 1] = iVar2;
    param_2[iVar3] = iVar1;
  }
  return;
}


