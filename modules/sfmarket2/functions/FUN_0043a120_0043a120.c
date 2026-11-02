/* Module: sfmarket2.dll
   Function: FUN_0043a120
   Address: 0043a120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043a120(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    *param_1 = *param_1 + 1;
    return 0;
  }
  return 0x80070057;
}


