/* Module: sfmarket2.dll
   Function: DllCanUnloadNow
   Address: 004015e0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x15e0  1  DllCanUnloadNow */
  return (uint)(DAT_004a9c1c != 0);
}


