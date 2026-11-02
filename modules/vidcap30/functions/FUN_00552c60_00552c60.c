/* Module: vidcap30.exe
   Function: FUN_00552c60
   Address: 00552c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00552c60(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x35;
  *(undefined4 *)(*param_1 + 0x18) = param_2;
  (**(code **)*param_1)(param_1);
  return;
}


