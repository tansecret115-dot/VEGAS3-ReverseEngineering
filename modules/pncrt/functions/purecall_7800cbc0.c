/* Module: pncrt.dll
   Function: purecall
   Address: 7800cbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* purecall */

void __cdecl purecall(void)

{
                    /* 0xcbc0  412  _purecall */
  _amsg_exit(0x19);
  return;
}


