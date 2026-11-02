/* Module: vegas30k.dll
   Function: FUN_011679b0
   Address: 011679b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011679b0(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x30;
  (**(code **)*param_1)(param_1);
  return;
}


