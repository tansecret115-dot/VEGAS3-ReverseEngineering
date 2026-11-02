/* Module: encn3260.dll
   Function: FUN_664973e0
   Address: 664973e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_664973e0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    _DAT_664f0610 = _DAT_664f0610 + -1;
    if (_DAT_664f0610 == 0) {
      FUN_664c5570();
      FUN_664c4d40();
    }
  }
  return;
}


