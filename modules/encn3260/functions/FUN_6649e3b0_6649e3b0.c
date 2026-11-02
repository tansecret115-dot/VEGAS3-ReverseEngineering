/* Module: encn3260.dll
   Function: FUN_6649e3b0
   Address: 6649e3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649e3b0(int param_1)

{
  int *piVar1;
  
  param_1 = *(int *)(param_1 + 0x24);
  while (param_1 != 0) {
    piVar1 = (int *)FUN_664bab40(&param_1);
    if (*piVar1 != 0) {
      piVar1 = *(int **)(*piVar1 + 0xc);
      (**(code **)(*piVar1 + 0x40))(piVar1);
    }
  }
  return 0;
}


