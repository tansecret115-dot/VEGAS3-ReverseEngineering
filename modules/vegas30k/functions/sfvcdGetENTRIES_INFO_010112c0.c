/* Module: vegas30k.dll
   Function: sfvcdGetENTRIES_INFO
   Address: 010112c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagSFVCD_ENTRIES * __stdcall sfvcdGetENTRIES_INFO(struct tagDIR_ENTRY *) */

tagSFVCD_ENTRIES * sfvcdGetENTRIES_INFO(tagDIR_ENTRY *param_1)

{
  tagDIR_ENTRY *ptVar1;
  
                    /* 0x112c0  627
                       ?sfvcdGetENTRIES_INFO@@YGPAUtagSFVCD_ENTRIES@@PAUtagDIR_ENTRY@@@Z */
  ptVar1 = DtGetLocalDirEntry(param_1,"VCD");
  if (ptVar1 != (tagDIR_ENTRY *)0x0) {
    ptVar1 = DtGetLocalDirEntry(ptVar1,"ENTRIES.VCD");
    if (ptVar1 != (tagDIR_ENTRY *)0x0) {
      return *(tagSFVCD_ENTRIES **)(ptVar1 + 0x350);
    }
  }
  return (tagSFVCD_ENTRIES *)0x0;
}


