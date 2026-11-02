/* Module: sftrkfx1.dll
   Function: FUN_5cba2ff0
   Address: 5cba2ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cba2ff0(int param_1)

{
  if (*(float *)(param_1 + 0x44) < _DAT_5cc03f24) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    return 0;
  }
  if (_DAT_5cc03f30 < *(float *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 0x43fa0000;
    return 0;
  }
  return 1;
}


