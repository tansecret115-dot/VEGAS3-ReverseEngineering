/* Module: cook3260.dll
   Function: FUN_633a5790
   Address: 633a5790
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_633a5790(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = 0;
  param_1[8] = 0;
  iVar2 = 0;
  piVar1 = param_2 + 9;
  do {
    param_1 = param_1 + 1;
    if (iVar3 != *param_1) {
      piVar1[-8] = iVar2;
      *piVar1 = iVar3;
      iVar3 = *param_1;
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
      if (iVar4 == 8) break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  *param_2 = iVar4;
  return;
}


