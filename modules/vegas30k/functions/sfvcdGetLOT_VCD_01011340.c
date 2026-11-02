/* Module: vegas30k.dll
   Function: sfvcdGetLOT_VCD
   Address: 01011340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagSFVCD_LOT * __stdcall sfvcdGetLOT_VCD(struct tagDIR_ENTRY *) */

tagSFVCD_LOT * sfvcdGetLOT_VCD(tagDIR_ENTRY *param_1)

{
  tagDIR_ENTRY *ptVar1;
  
                    /* 0x11340  628  ?sfvcdGetLOT_VCD@@YGPAUtagSFVCD_LOT@@PAUtagDIR_ENTRY@@@Z */
  ptVar1 = DtGetLocalDirEntry(param_1,"VCD");
  if (ptVar1 != (tagDIR_ENTRY *)0x0) {
    ptVar1 = DtGetLocalDirEntry(ptVar1,"LOT.VCD");
    if (ptVar1 != (tagDIR_ENTRY *)0x0) {
      return *(tagSFVCD_LOT **)(ptVar1 + 0x350);
    }
  }
  return (tagSFVCD_LOT *)0x0;
}


