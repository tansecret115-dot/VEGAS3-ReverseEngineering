/* Module: vegas30k.dll
   Function: FUN_0115de90
   Address: 0115de90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0115de90(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x35;
  *(undefined4 *)(*param_1 + 0x18) = param_2;
  (**(code **)*param_1)(param_1);
  return;
}


