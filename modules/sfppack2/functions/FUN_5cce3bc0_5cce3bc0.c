/* Module: sfppack2.dll
   Function: FUN_5cce3bc0
   Address: 5cce3bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce3bc0(int param_1)

{
  if (4 < *(uint *)(param_1 + 0x6c)) {
    *(undefined4 *)(param_1 + 0x6c) = 4;
    return 0;
  }
  return 1;
}


