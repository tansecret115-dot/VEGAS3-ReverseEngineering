/* Module: vegas30k.dll
   Function: sfvcdGetPSD_VCD
   Address: 01011380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct tagSFVCD_PSD * __stdcall sfvcdGetPSD_VCD(struct tagDIR_ENTRY *) */

tagSFVCD_PSD * sfvcdGetPSD_VCD(tagDIR_ENTRY *param_1)

{
  tagDIR_ENTRY *ptVar1;
  
                    /* 0x11380  629  ?sfvcdGetPSD_VCD@@YGPAUtagSFVCD_PSD@@PAUtagDIR_ENTRY@@@Z */
  ptVar1 = DtGetLocalDirEntry(param_1,"VCD");
  if (ptVar1 != (tagDIR_ENTRY *)0x0) {
    ptVar1 = DtGetLocalDirEntry(ptVar1,"PSD.VCD");
    if (ptVar1 != (tagDIR_ENTRY *)0x0) {
      return *(tagSFVCD_PSD **)(ptVar1 + 0x350);
    }
  }
  return (tagSFVCD_PSD *)0x0;
}


