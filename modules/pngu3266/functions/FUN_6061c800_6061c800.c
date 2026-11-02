/* Module: pngu3266.dll
   Function: FUN_6061c800
   Address: 6061c800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6061c800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(*(char **)(param_1 + 0x20) + -8) != 0) {
    iVar1 = _putenv(*(char **)(param_1 + 0x20));
    if (iVar1 != 0) {
      uVar2 = 0x80004005;
    }
    thunk_FUN_60618b70((int *)(param_1 + 0x20));
  }
  return uVar2;
}


