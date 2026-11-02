/* Module: sfppack3.dll
   Function: DllCanUnloadNow
   Address: 5cc7245c
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT DllCanUnloadNow(void)

{
                    /* 0x4245c  3  DllCanUnloadNow */
  if ((DAT_5cc9db34 < 1) && (DAT_5cc9db3c == 0)) {
    return 0;
  }
  return 1;
}


