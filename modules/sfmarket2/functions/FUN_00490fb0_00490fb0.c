/* Module: sfmarket2.dll
   Function: FUN_00490fb0
   Address: 00490fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00490fb0(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x169) + 0xc) = 0;
  (**(code **)(*(int *)(param_1 + 0x179) + 8))(param_1);
  (**(code **)(*(int *)(param_1 + 0x179) + 0xc))(param_1);
  return;
}


