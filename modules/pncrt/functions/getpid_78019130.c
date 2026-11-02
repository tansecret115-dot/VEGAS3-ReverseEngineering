/* Module: pncrt.dll
   Function: getpid
   Address: 78019130
   Source: Ghidra pseudocode (Stage 10 batch) */


/* getpid */

void __cdecl getpid(void)

{
                    /* WARNING: Could not recover jumptable at 0x78019130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x19130  267  _getpid */
  GetCurrentProcessId();
  return;
}


