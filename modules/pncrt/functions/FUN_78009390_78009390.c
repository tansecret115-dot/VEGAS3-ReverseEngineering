/* Module: pncrt.dll
   Function: FUN_78009390
   Address: 78009390
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78009390(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_7803d188;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_7803d1cc)) && (ppuVar1 != &PTR_DAT_7803d1bc)) &&
       ((ppuVar1 != &PTR_DAT_7803d1ac && (ppuVar1 != &PTR_DAT_7803d18c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x7803d248);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_7803d1ac);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_7803d1bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_7803d1cc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_7803d18c);
  return;
}


