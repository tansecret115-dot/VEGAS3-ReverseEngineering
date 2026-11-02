/* Module: sfppack1.dll
   Function: FUN_5cdba0d0
   Address: 5cdba0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cdba0d0(int param_1)

{
  if (*(double *)(param_1 + 0x48) < _DAT_5ce12bf0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return 0;
  }
  if (_DAT_5ce13470 < *(double *)(param_1 + 0x48)) {
    *(undefined4 *)(param_1 + 0x48) = 0x28000000;
    *(undefined4 *)(param_1 + 0x4c) = 0x41aadbd2;
    return 0;
  }
  return 1;
}


