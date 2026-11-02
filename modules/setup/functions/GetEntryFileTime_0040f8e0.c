/* Module: Setup.exe
   Function: GetEntryFileTime
   Address: 0040f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryFileTime(char const *,struct _FILETIME &) */

long CArchive2::GetEntryFileTime(char *param_1,_FILETIME *param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [5];
  undefined4 local_34c;
  undefined4 local_348;
  
                    /* 0xf8e0  28  ?GetEntryFileTime@CArchive2@@QAGJPBDAAU_FILETIME@@@Z */
  iVar1 = FUN_00411440(param_1,(LPCSTR)param_2,local_360);
  if (-1 < iVar1) {
    *in_stack_0000000c = local_34c;
    in_stack_0000000c[1] = local_348;
  }
  return iVar1;
}


