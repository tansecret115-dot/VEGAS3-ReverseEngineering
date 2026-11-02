/* Module: vegas30.exe
   Function: FUN_004583c0
   Address: 004583c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004583c0(int param_1,undefined4 param_2)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0xab0) != 0)) {
    (**(code **)(*(int *)(param_1 + 0xab0) + 4))(param_1,param_2);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffff7;
  }
  return;
}


