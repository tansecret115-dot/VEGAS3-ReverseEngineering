/* Module: rmme3260.dll
   Function: FUN_6622d8e0
   Address: 6622d8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_6622d8e0(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    _DAT_6627ce18 = _DAT_6627ce18 + 1;
  }
  return;
}


