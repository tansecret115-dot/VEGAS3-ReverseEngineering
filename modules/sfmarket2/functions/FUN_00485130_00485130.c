/* Module: sfmarket2.dll
   Function: FUN_00485130
   Address: 00485130
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00485130(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x30;
  (**(code **)*param_1)(param_1);
  return;
}


