/* Module: sfs4rw.dll
   Function: FUN_00489320
   Address: 00489320
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489320(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 0x169) + 0xc) = 0;
  (**(code **)(*(int *)(param_1 + 0x179) + 8))(param_1);
  (**(code **)(*(int *)(param_1 + 0x179) + 0xc))(param_1);
  return;
}


