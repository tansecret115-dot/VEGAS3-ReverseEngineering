/* Module: vegas30.exe
   Function: FUN_00458430
   Address: 00458430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458430(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0xab0) != 0)) {
    (**(code **)(*(int *)(param_1 + 0xab0) + 0x1c))(param_1,param_2);
  }
  return;
}


