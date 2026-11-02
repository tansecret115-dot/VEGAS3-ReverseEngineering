/* Module: vegas30.exe
   Function: FUN_004565a0
   Address: 004565a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004565a0(int param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffdff;
  FUN_00455e00(param_1);
  return;
}


