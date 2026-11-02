/* Module: sfppack1.dll
   Function: FUN_5cdb3830
   Address: 5cdb3830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_5cdb3830(int param_1)

{
  if (*(double *)(param_1 + 0x30) < _DAT_5ce12bf0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    return 0;
  }
  if (_DAT_5ce12be8 < *(double *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0x30) = 0xa0000000;
    *(undefined4 *)(param_1 + 0x34) = 0x41c7a836;
    return 0;
  }
  return 1;
}


