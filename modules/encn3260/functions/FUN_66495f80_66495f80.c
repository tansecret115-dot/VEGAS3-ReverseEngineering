/* Module: encn3260.dll
   Function: FUN_66495f80
   Address: 66495f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66495f80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2[6] + *param_2;
  for (iVar1 = param_2[7] + param_2[1]; 999999 < iVar1; iVar1 = iVar1 + -1000000) {
    iVar2 = iVar2 + 1;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}


