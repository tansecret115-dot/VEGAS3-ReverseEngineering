/* Module: sftrans1.dll
   Function: DllCanUnloadNow
   Address: 00405f20
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x5f20  1  DllCanUnloadNow */
  return (uint)(DAT_00577264 != 0);
}


