/* Module: sftrkfx1.dll
   Function: FUN_5cba3030
   Address: 5cba3030
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cba3030(int param_1)

{
  if (*(float *)(param_1 + 0x48) < _DAT_5cc03f24) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    return 0;
  }
  if (_DAT_5cc03f34 < *(float *)(param_1 + 0x48)) {
    *(undefined4 *)(param_1 + 0x48) = 0x459c4000;
    return 0;
  }
  return 1;
}


