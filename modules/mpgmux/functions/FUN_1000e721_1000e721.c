/* Module: mpgmux.dll
   Function: FUN_1000e721
   Address: 1000e721
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000e721(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10019b08;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10019b4c)) && (ppuVar1 != &PTR_DAT_10019b3c)) &&
       ((ppuVar1 != &PTR_DAT_10019b2c && (ppuVar1 != &PTR_DAT_10019b0c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000c3f0(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10019bc8);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019b2c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019b3c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019b4c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10019b0c);
  return;
}


