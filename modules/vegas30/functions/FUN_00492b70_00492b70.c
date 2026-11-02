/* Module: vegas30.exe
   Function: FUN_00492b70
   Address: 00492b70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492b70(int param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 0x20c) & 2) != 0) {
    FUN_00492a80(param_1,param_2);
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) & 0xfffffffd;
  }
  return;
}


