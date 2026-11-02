/* Module: sfxpfx2.dll
   Function: DllCanUnloadNow
   Address: 5c8c7d4c
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x37d4c  3  DllCanUnloadNow */
  if ((DAT_5c8eec2c < 1) && (DAT_5c8eec34 == 0)) {
    return 0;
  }
  return 1;
}


