/* Module: dsetup.dll
   Function: FUN_00404f72
   Address: 00404f72
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00404f72(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_0040a358;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_0040a39c)) && (ppuVar1 != &PTR_DAT_0040a38c)) &&
       ((ppuVar1 != &PTR_DAT_0040a37c && (ppuVar1 != &PTR_DAT_0040a35c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_0040310c(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x40a418);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_0040a37c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_0040a38c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_0040a39c);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_0040a35c);
  return;
}


