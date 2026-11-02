/* Module: mpegin.dll
   Function: FUN_10010e79
   Address: 10010e79
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10010e79(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1001b340;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1001b384)) && (ppuVar1 != &PTR_DAT_1001b374)) &&
       ((ppuVar1 != &PTR_DAT_1001b364 && (ppuVar1 != &PTR_DAT_1001b344)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000e22b(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1001b400);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1001b364);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1001b374);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1001b384);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1001b344);
  return;
}


