/* Module: rv303260.dll
   Function: FUN_6720e650
   Address: 6720e650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6720e650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(char **)(param_1 + 0x20) + -8) != 0) {
    iVar1 = _putenv(*(char **)(param_1 + 0x20));
    if (iVar1 != 0) {
      uVar2 = 0x80004005;
    }
    thunk_FUN_6720ebd0((int *)(param_1 + 0x20));
  }
  return uVar2;
}


