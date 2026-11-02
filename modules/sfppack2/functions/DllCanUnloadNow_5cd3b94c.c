/* Module: sfppack2.dll
   Function: DllCanUnloadNow
   Address: 5cd3b94c
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x6b94c  3  DllCanUnloadNow */
  if ((DAT_5cd75474 < 1) && (DAT_5cd7547c == 0)) {
    return 0;
  }
  return 1;
}


