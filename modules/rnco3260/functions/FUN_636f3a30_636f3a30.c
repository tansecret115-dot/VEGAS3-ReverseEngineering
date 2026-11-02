/* Module: rnco3260.dll
   Function: FUN_636f3a30
   Address: 636f3a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f3a30(int param_1)

{
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  (**(code **)(*(int *)(param_1 + 100) + 0x50))(param_1 + 100);
  return 0;
}


