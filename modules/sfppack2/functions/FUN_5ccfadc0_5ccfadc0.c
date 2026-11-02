/* Module: sfppack2.dll
   Function: FUN_5ccfadc0
   Address: 5ccfadc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5ccfadc0(int param_1)

{
  if (*(uint *)(param_1 + 0xb0) < 3) {
    *(undefined4 *)(param_1 + 0xb0) = 3;
    return 0;
  }
  if (0x10 < *(uint *)(param_1 + 0xb0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x10;
    return 0;
  }
  return 1;
}


