/* Module: vegas30k.dll
   Function: SfPlugIn_InitRemovedFlags
   Address: 0102b300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tSFPLUGIN_LIST_NODE * __stdcall SfPlugIn_InitRemovedFlags(struct tSFPLUGIN_LIST_NODE *) */

tSFPLUGIN_LIST_NODE * SfPlugIn_InitRemovedFlags(tSFPLUGIN_LIST_NODE *param_1)

{
  for (; param_1 != (tSFPLUGIN_LIST_NODE *)0x0; param_1 = *(tSFPLUGIN_LIST_NODE **)param_1) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x800000;
  }
  return (tSFPLUGIN_LIST_NODE *)0x0;
}


