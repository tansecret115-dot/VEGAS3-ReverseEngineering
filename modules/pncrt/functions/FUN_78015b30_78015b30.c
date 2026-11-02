/* Module: pncrt.dll
   Function: FUN_78015b30
   Address: 78015b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78015b30(void)

{
  if (DAT_780425d0 == 0) {
    _lock(0xb);
    if (DAT_780425d0 == 0) {
      FUN_78015b90();
      DAT_780425d0 = DAT_780425d0 + 1;
    }
    _unlock(0xb);
  }
  return;
}


