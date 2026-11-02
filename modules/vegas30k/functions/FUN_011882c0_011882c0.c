/* Module: vegas30k.dll
   Function: FUN_011882c0
   Address: 011882c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011882c0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x288 + *(int *)(param_1 + 0x488) * 4) = param_2;
  *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
  return 0;
}


