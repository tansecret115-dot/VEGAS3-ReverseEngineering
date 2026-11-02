/* Module: sfppack1.dll
   Function: DllCanUnloadNow
   Address: 5cdfcacc
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x4cacc  3  DllCanUnloadNow */
  if ((DAT_5ce2905c < 1) && (DAT_5ce29064 == 0)) {
    return 0;
  }
  return 1;
}


