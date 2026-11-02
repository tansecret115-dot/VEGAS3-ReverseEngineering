/* Module: encn3260.dll
   Function: FUN_664973c0
   Address: 664973c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_664973c0(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    _DAT_664f0610 = _DAT_664f0610 + 1;
  }
  return;
}


