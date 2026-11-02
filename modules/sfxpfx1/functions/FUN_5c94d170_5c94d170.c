/* Module: sfxpfx1.dll
   Function: FUN_5c94d170
   Address: 5c94d170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c94d170(int param_1)

{
  if (*(int *)(param_1 + 0x28) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  if (1000 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 1000;
    return 0;
  }
  return 1;
}


