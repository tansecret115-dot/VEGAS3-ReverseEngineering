/* Module: sfcdi.dll
   Function: FUN_5bf18b10
   Address: 5bf18b10
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf18b10(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x4c + *(int *)(param_1 + 0x3c) * 0x28);
  FUN_5bf18a80(param_1);
  return piVar1[3] + *piVar1;
}


