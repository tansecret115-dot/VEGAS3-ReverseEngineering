/* Module: sfppack1.dll
   Function: FUN_5cdc88f0
   Address: 5cdc88f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cdc88f0(int param_1)

{
  if (*(int *)(param_1 + 0x6c) < -100) {
    *(undefined4 *)(param_1 + 0x6c) = 0xffffff9c;
    return 0;
  }
  if (100 < *(int *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x6c) = 100;
    return 0;
  }
  return 1;
}


