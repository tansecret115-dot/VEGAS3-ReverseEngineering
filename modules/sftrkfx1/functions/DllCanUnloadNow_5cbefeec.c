/* Module: sftrkfx1.dll
   Function: DllCanUnloadNow
   Address: 5cbefeec
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x4feec  3  DllCanUnloadNow */
  if ((DAT_5cc16d34 < 1) && (DAT_5cc16d3c == 0)) {
    return 0;
  }
  return 1;
}


