/* Module: vegas30k.dll
   Function: syncoutStopSmpte
   Address: 01180430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutStopSmpte,4 */

undefined4 syncoutStopSmpte(int param_1)

{
                    /* 0x180430  1448  _syncoutStopSmpte@4 */
  if (param_1 == 0) {
    return 0xffffffff;
  }
  FUN_0117ff20(param_1);
  return 0;
}


