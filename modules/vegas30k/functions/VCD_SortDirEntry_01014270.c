/* Module: vegas30k.dll
   Function: VCD_SortDirEntry
   Address: 01014270
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall VCD_SortDirEntry(void *,struct tagDIR_ENTRY *) */

long VCD_SortDirEntry(void *param_1,tagDIR_ENTRY *param_2)

{
  long lVar1;
  
                    /* 0x14270  585  ?VCD_SortDirEntry@@YGJPAXPAUtagDIR_ENTRY@@@Z */
  lVar1 = _SfList_Sort_12(*(undefined4 *)(param_2 + 0x214),param_1,&LAB_01014240);
  return lVar1;
}


