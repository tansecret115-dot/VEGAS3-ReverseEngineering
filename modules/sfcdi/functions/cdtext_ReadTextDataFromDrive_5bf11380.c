/* Module: sfcdi.dll
   Function: cdtext_ReadTextDataFromDrive
   Address: 5bf11380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdtext_ReadTextDataFromDrive(struct HSFCD__ *,struct _sfcdtext *) */

long cdtext_ReadTextDataFromDrive(HSFCD__ *param_1,_sfcdtext *param_2)

{
  long lVar1;
  ulong local_408;
  _cdtextpack *local_404;
  _cdtextpack local_400 [1024];
  
                    /* 0x11380  224  ?cdtext_ReadTextDataFromDrive@@YGJPAUHSFCD__@@PAU_sfcdtext@@@Z
                        */
  local_404 = local_400;
  local_408 = 0x400;
  lVar1 = cdr_ReadCDText(param_1,(tCDRPARAMS_READCDTEXT *)&local_408,
                         (_func_int_void_ptr_uint_long *)0x0);
  if (-1 < lVar1) {
    if (local_408 == 0) {
      return -0x7fffbffb;
    }
    lVar1 = cdtext_PacketsToSfCDText(param_2,local_404,local_408);
    if (-1 < lVar1) {
      *(undefined4 *)(param_2 + 0x18) = 1;
    }
  }
  return lVar1;
}


