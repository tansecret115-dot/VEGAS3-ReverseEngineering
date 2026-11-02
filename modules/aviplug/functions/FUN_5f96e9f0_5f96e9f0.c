/* Module: aviplug.dll
   Function: FUN_5f96e9f0
   Address: 5f96e9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96e9f0(double *param_1,double *param_2)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  
  iVar1 = 8;
  pdVar2 = param_2;
  do {
    FUN_5f96e000(pdVar2,(double *)(((int)param_1 - (int)param_2) + (int)pdVar2));
    pdVar2 = pdVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar3 = (int)param_2 - (int)param_1;
  iVar1 = 8;
  do {
    FUN_5f96e6d0(param_1,(double *)(iVar3 + (int)param_1));
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


