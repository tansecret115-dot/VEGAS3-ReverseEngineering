/* Module: rmme3260.dll
   Function: FUN_66234080
   Address: 66234080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66234080(int param_1)

{
  int *piVar1;
  
  param_1 = *(int *)(param_1 + 0x24);
  while (param_1 != 0) {
    piVar1 = (int *)FUN_66250bf0(&param_1);
    if (*piVar1 != 0) {
      piVar1 = *(int **)(*piVar1 + 0xc);
      (**(code **)(*piVar1 + 0x40))(piVar1);
    }
  }
  return 0;
}


