/* Module: vegas30.exe
   Function: FUN_00458480
   Address: 00458480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00458480(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) ^ 0x100;
    if (*(int *)(param_1 + 0xab4) != 0) {
      (**(code **)(*(int *)(param_1 + 0xab4) + 0x20))(param_1,1);
    }
    FUN_004530a0(param_1,0x7fff);
  }
  return;
}


