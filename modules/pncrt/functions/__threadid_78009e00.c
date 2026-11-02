/* Module: pncrt.dll
   Function: __threadid
   Address: 78009e00
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD __threadid(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x78009e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x9e00  145  __threadid */
  DVar1 = GetCurrentThreadId();
  return DVar1;
}


