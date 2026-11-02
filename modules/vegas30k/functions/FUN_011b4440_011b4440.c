/* Module: vegas30k.dll
   Function: FUN_011b4440
   Address: 011b4440
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b4440(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc7c) != 0) {
    *(undefined4 *)(param_1 + 0xc80) = param_2;
    *(undefined4 *)(param_1 + 0xc78) = 1;
    *(undefined4 *)(param_1 + 0xc84) = param_3;
  }
  return 0;
}


