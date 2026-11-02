/* Module: vegas30.exe
   Function: FUN_005bad50
   Address: 005bad50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005bad50(int *param_1)

{
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


