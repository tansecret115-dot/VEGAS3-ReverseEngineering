/* Module: rmme3260.dll
   Function: FUN_66209b30
   Address: 66209b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66209b30(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 100))();
  }
  param_1[9] = iVar1;
  return;
}


