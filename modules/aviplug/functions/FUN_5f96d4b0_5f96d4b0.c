/* Module: aviplug.dll
   Function: FUN_5f96d4b0
   Address: 5f96d4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96d4b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 8;
  piVar2 = param_1;
  do {
    FUN_5f96caa0(piVar2);
    piVar2 = piVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 8;
  do {
    FUN_5f96cf00(param_1);
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


