/* Module: vidcap30.exe
   Function: FUN_00427420
   Address: 00427420
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427420(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


