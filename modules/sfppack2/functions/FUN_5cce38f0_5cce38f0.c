/* Module: sfppack2.dll
   Function: FUN_5cce38f0
   Address: 5cce38f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5cce38f0(int param_1)

{
  if (*(int *)(param_1 + 0x30) < -0xfa) {
    *(undefined4 *)(param_1 + 0x30) = 0xffffff06;
    return 0;
  }
  if (0xfa < *(int *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0xfa;
    return 0;
  }
  return 1;
}


