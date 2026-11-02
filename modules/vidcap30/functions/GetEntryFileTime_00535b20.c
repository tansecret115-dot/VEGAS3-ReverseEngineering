/* Module: vidcap30.exe
   Function: GetEntryFileTime
   Address: 00535b20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryFileTime(char const *,struct _FILETIME &) */

long CArchive2::GetEntryFileTime(char *param_1,_FILETIME *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [20];
  undefined4 local_34c;
  undefined4 local_348;
  
                    /* 0x135b20  32  ?GetEntryFileTime@CArchive2@@QAGJPBDAAU_FILETIME@@@Z */
  lVar1 = FUN_00537680(param_2,local_360);
  if (-1 < lVar1) {
    *in_stack_0000000c = local_34c;
    in_stack_0000000c[1] = local_348;
  }
  return lVar1;
}


