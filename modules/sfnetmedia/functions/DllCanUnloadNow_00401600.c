/* Module: sfnetmedia.dll
   Function: DllCanUnloadNow
   Address: 00401600
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x1600  1  DllCanUnloadNow */
  return (uint)(DAT_0044184c != 0);
}


