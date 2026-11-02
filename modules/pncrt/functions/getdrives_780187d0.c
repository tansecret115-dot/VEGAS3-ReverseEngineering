/* Module: pncrt.dll
   Function: getdrives
   Address: 780187d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* getdrives */

void __cdecl getdrives(void)

{
                    /* WARNING: Could not recover jumptable at 0x780187d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* 0x187d0  264  _getdrives */
  GetLogicalDrives();
  return;
}


