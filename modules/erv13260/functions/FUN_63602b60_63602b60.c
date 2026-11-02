/* Module: erv13260.dll
   Function: FUN_63602b60
   Address: 63602b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63602b60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(char **)(param_1 + 0x20) + -8) != 0) {
    iVar1 = _putenv(*(char **)(param_1 + 0x20));
    if (iVar1 != 0) {
      uVar2 = 0x80004005;
    }
    thunk_FUN_63603090((int *)(param_1 + 0x20));
  }
  return uVar2;
}


