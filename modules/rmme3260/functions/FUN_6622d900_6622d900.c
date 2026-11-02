/* Module: rmme3260.dll
   Function: FUN_6622d900
   Address: 6622d900
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_6622d900(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    _DAT_6627ce18 = _DAT_6627ce18 + -1;
    if (_DAT_6627ce18 == 0) {
      FUN_66258c40();
      FUN_66258410();
    }
  }
  return;
}


