/* Module: vegas30k.dll
   Function: DtGetDirEntryPath
   Address: 010188d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall DtGetDirEntryPath(struct tagDIR_ENTRY *,char *) */

long DtGetDirEntryPath(tagDIR_ENTRY *param_1,char *param_2)

{
  long lVar1;
  
                    /* 0x188d0  49  ?DtGetDirEntryPath@@YGJPAUtagDIR_ENTRY@@PAD@Z */
  if (*(tagDIR_ENTRY **)(param_1 + 0x21c) == (tagDIR_ENTRY *)0x0) {
    _mbscpy((uchar *)param_2,(uchar *)(param_1 + 0x110));
    return 0;
  }
  lVar1 = DtGetDirEntryPath(*(tagDIR_ENTRY **)(param_1 + 0x21c),param_2);
  if (-1 < lVar1) {
    _mbscat((uchar *)param_2,"\\");
    _mbscat((uchar *)param_2,(uchar *)(param_1 + 0x110));
    return lVar1;
  }
  return lVar1;
}


