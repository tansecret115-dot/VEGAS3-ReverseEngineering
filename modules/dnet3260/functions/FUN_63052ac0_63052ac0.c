/* Module: dnet3260.dll
   Function: FUN_63052ac0
   Address: 63052ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63052ac0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(char **)(param_1 + 0x20) + -8) != 0) {
    iVar1 = _putenv(*(char **)(param_1 + 0x20));
    if (iVar1 != 0) {
      uVar2 = 0x80004005;
    }
    thunk_FUN_63052f80((int *)(param_1 + 0x20));
  }
  return uVar2;
}


