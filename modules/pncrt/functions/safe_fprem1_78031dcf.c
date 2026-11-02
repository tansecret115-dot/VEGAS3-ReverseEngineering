/* Module: pncrt.dll
   Function: safe_fprem1
   Address: 78031dcf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* safe_fprem1 */

void __cdecl safe_fprem1(void)

{
                    /* 0x31dcf  426  _safe_fprem1 */
  adj_fprem1();
  return;
}


