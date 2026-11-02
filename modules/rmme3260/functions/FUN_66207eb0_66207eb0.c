/* Module: rmme3260.dll
   Function: FUN_66207eb0
   Address: 66207eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66207eb0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x4c))(param_1);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*param_1 + 0x44))(param_1);
    if (-1 < iVar1) {
      (**(code **)(*param_1 + 0x48))(param_1);
    }
  }
  return;
}


