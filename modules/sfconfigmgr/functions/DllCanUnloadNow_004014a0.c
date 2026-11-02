/* Module: sfconfigmgr.dll
   Function: DllCanUnloadNow
   Address: 004014a0
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x14a0  1  DllCanUnloadNow */
  return (uint)(DAT_00422fe4 != 0);
}


