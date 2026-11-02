/* Module: pncrt.dll
   Function: safe_fprem
   Address: 78031dc9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* safe_fprem */

void __cdecl safe_fprem(void)

{
                    /* 0x31dc9  425  _safe_fprem */
  adj_fprem();
  return;
}


