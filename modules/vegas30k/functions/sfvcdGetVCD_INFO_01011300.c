/* Module: vegas30k.dll
   Function: sfvcdGetVCD_INFO
   Address: 01011300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagSFVCD_INFO * __stdcall sfvcdGetVCD_INFO(struct tagDIR_ENTRY *) */

tagSFVCD_INFO * sfvcdGetVCD_INFO(tagDIR_ENTRY *param_1)

{
  tagDIR_ENTRY *ptVar1;
  
                    /* 0x11300  630  ?sfvcdGetVCD_INFO@@YGPAUtagSFVCD_INFO@@PAUtagDIR_ENTRY@@@Z */
  ptVar1 = DtGetLocalDirEntry(param_1,"VCD");
  if (ptVar1 != (tagDIR_ENTRY *)0x0) {
    ptVar1 = DtGetLocalDirEntry(ptVar1,"INFO.VCD");
    if (ptVar1 != (tagDIR_ENTRY *)0x0) {
      return *(tagSFVCD_INFO **)(ptVar1 + 0x350);
    }
  }
  return (tagSFVCD_INFO *)0x0;
}


