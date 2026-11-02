/* Module: vidpcore.dll
   Function: DllCanUnloadNow
   Address: 5de06930
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x6930  1  DllCanUnloadNow */
  return (uint)(DAT_5df42794 != 0);
}


