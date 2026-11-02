/* Module: sfmarket2.dll
   Function: FUN_0045b2d0
   Address: 0045b2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045b2d0(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x35;
  *(undefined4 *)(*param_1 + 0x18) = param_2;
  (**(code **)*param_1)(param_1);
  return;
}


