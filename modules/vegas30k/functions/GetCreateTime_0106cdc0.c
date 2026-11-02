/* Module: vegas30k.dll
   Function: GetCreateTime
   Address: 0106cdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetCreateTime(struct _FILETIME &) */

long CArchive2::GetCreateTime(_FILETIME *param_1)

{
  LPFILETIME in_stack_00000008;
  _FILETIME local_10;
  _FILETIME local_8;
  
                    /* 0x6cdc0  79  ?GetCreateTime@CArchive2@@QAGJAAU_FILETIME@@@Z */
  if ((param_1[4].dwHighDateTime != 0) && ((HANDLE)param_1[1].dwLowDateTime != (HANDLE)0x0)) {
    GetFileTime((HANDLE)param_1[1].dwLowDateTime,in_stack_00000008,&local_8,&local_10);
  }
  return 0;
}


