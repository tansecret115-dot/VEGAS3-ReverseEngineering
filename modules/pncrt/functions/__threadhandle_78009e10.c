/* Module: pncrt.dll
   Function: __threadhandle
   Address: 78009e10
   Source: Ghidra pseudocode (Stage 10 batch) */


HANDLE __threadhandle(void)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x78009e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x9e10  144  __threadhandle */
  pvVar1 = GetCurrentThread();
  return pvVar1;
}


