/* Module: vegas30k.dll
   Function: SfDvdiAddTitleSearchPointer
   Address: 01087240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfDvdiAddTitleSearchPointer(struct tagSFVMG_INFO *,unsigned int) */

long SfDvdiAddTitleSearchPointer(tagSFVMG_INFO *param_1,uint param_2)

{
  long lVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x87240  364  ?SfDvdiAddTitleSearchPointer@@YGJPAUtagSFVMG_INFO@@I@Z */
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  lVar1 = _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x24),&local_c,0xc,param_2,0);
  return lVar1;
}


