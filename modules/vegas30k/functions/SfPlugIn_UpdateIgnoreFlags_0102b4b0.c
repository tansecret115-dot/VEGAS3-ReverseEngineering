/* Module: vegas30k.dll
   Function: SfPlugIn_UpdateIgnoreFlags
   Address: 0102b4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tSFPLUGIN_LIST_NODE * __stdcall SfPlugIn_UpdateIgnoreFlags(struct tSFPLUGIN_LIST_NODE *)
    */

tSFPLUGIN_LIST_NODE * SfPlugIn_UpdateIgnoreFlags(tSFPLUGIN_LIST_NODE *param_1)

{
  int iVar1;
  
  for (; param_1 != (tSFPLUGIN_LIST_NODE *)0x0; param_1 = *(tSFPLUGIN_LIST_NODE **)param_1) {
    iVar1 = FUN_0102b4e0(param_1 + 0x10,0);
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | iVar1 << 0x18;
  }
  return (tSFPLUGIN_LIST_NODE *)0x0;
}


