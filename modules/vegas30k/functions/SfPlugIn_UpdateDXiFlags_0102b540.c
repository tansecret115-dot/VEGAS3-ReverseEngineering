/* Module: vegas30k.dll
   Function: SfPlugIn_UpdateDXiFlags
   Address: 0102b540
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tSFPLUGIN_LIST_NODE * __stdcall SfPlugIn_UpdateDXiFlags(struct tSFPLUGIN_LIST_NODE *) */

tSFPLUGIN_LIST_NODE * SfPlugIn_UpdateDXiFlags(tSFPLUGIN_LIST_NODE *param_1)

{
  uint uVar1;
  uint uVar2;
  
  for (; param_1 != (tSFPLUGIN_LIST_NODE *)0x0; param_1 = *(tSFPLUGIN_LIST_NODE **)param_1) {
    if ((*(uint *)(param_1 + 0xc) & 0x1800000) == 0) {
      SfPlugIn_MiniProg_UpdateMiniProgress((char *)(param_1 + 0x20));
      uVar1 = FUN_0102b590(param_1);
      uVar2 = (uVar1 & 1) << 4 | *(uint *)(param_1 + 0xc) & 0xffffffef;
      *(uint *)(param_1 + 0xc) = uVar2;
      if ((uVar1 & 1) != 0) {
        *(uint *)(param_1 + 0xc) = uVar2 | 0xc0400000;
      }
    }
  }
  return (tSFPLUGIN_LIST_NODE *)0x0;
}


