/* Module: vfplugs.dll
   Function: DllCanUnloadNow
   Address: 004026b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x26b0  1  DllCanUnloadNow */
  return (uint)(DAT_0049453c != 0);
}


