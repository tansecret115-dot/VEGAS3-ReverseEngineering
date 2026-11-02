/* Module: vegas30k.dll
   Function: SfPlugIn_DontQueryFirstUntested
   Address: 0102b980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tSFPLUGIN_LIST_NODE * __stdcall SfPlugIn_DontQueryFirstUntested(struct tSFPLUGIN_LIST_NODE
   *) */

tSFPLUGIN_LIST_NODE * SfPlugIn_DontQueryFirstUntested(tSFPLUGIN_LIST_NODE *param_1)

{
                    /* 0x2b980  484
                       ?SfPlugIn_DontQueryFirstUntested@@YGPAUtSFPLUGIN_LIST_NODE@@PAU1@@Z */
  if (param_1 != (tSFPLUGIN_LIST_NODE *)0x0) {
    while (((*(uint *)(param_1 + 0xc) & 0x1c00000) != 0 ||
           ((*(uint *)(param_1 + 0xc) & 0x200000) == 0))) {
      param_1 = *(tSFPLUGIN_LIST_NODE **)param_1;
      if (param_1 == (tSFPLUGIN_LIST_NODE *)0x0) {
        return (tSFPLUGIN_LIST_NODE *)0x0;
      }
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x400000;
  }
  return (tSFPLUGIN_LIST_NODE *)0x0;
}


