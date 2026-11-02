/* Module: vegas30k.dll
   Function: GetModifyTime
   Address: 0106ce00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetModifyTime(struct _FILETIME &) */

long CArchive2::GetModifyTime(_FILETIME *param_1)

{
  LPFILETIME in_stack_00000008;
  _FILETIME local_10;
  _FILETIME local_8;
  
                    /* 0x6ce00  96  ?GetModifyTime@CArchive2@@QAGJAAU_FILETIME@@@Z */
  if ((param_1[4].dwHighDateTime != 0) && ((HANDLE)param_1[1].dwLowDateTime != (HANDLE)0x0)) {
    GetFileTime((HANDLE)param_1[1].dwLowDateTime,&local_8,&local_10,in_stack_00000008);
  }
  return 0;
}


