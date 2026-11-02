/* Module: stl2plg.dll
   Function: FUN_00455c70
   Address: 00455c70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455c70(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x14) = 0x30;
  (**(code **)*param_1)(param_1);
  return;
}


