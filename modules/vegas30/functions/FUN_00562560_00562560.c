/* Module: vegas30.exe
   Function: FUN_00562560
   Address: 00562560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00562560(int param_1)

{
  if ((*(int *)(param_1 + 0x20) != 0) && (*(code **)(param_1 + 0x28) != (code *)0x0)) {
    (**(code **)(param_1 + 0x28))(*(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}


