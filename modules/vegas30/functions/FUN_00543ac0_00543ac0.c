/* Module: vegas30.exe
   Function: FUN_00543ac0
   Address: 00543ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00543ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  GetCurrentThreadId();
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x58) = param_6;
  *(undefined4 *)(param_1 + 0x54) = param_5;
  *(undefined4 *)(param_1 + 0x5c) = param_7;
  return;
}


