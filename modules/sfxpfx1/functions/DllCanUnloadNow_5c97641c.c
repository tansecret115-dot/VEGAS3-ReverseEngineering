/* Module: sfxpfx1.dll
   Function: DllCanUnloadNow
   Address: 5c97641c
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x3641c  3  DllCanUnloadNow */
  if ((DAT_5c99dfd4 < 1) && (DAT_5c99dfdc == 0)) {
    return 0;
  }
  return 1;
}


