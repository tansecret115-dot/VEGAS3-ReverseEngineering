/* Module: sfpagepeel.dll
   Function: DllCanUnloadNow
   Address: 004019f0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x19f0  1  DllCanUnloadNow */
  return (uint)(DAT_0047d4b4 != 0);
}


