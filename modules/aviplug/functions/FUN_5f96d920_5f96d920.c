/* Module: aviplug.dll
   Function: FUN_5f96d920
   Address: 5f96d920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96d920(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 8;
  piVar2 = param_1;
  do {
    FUN_5f96d530(piVar2);
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 4;
  do {
    FUN_5f96d7c0(param_1);
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


