/* Module: sfxpfx1.dll
   Function: FUN_5c948140
   Address: 5c948140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5c948140(int param_1)

{
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    return 0;
  }
  if (200 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 200;
    return 0;
  }
  return 1;
}


