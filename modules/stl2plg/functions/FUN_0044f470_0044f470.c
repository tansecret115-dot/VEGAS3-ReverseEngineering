/* Module: stl2plg.dll
   Function: FUN_0044f470
   Address: 0044f470
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f470(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(*(int *)(param_1 + 4) + 0x28))(param_1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  return;
}


