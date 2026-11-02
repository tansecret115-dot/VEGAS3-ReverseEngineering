/* Module: vidcap30.exe
   Function: GetEntryFileTime
   Address: 00535ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryFileTime(int,struct _FILETIME &) */

long CArchive2::GetEntryFileTime(int param_1,_FILETIME *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [20];
  undefined4 local_34c;
  undefined4 local_348;
  
                    /* 0x135ab0  31  ?GetEntryFileTime@CArchive2@@QAGJHAAU_FILETIME@@@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_00537610(param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_34c;
    in_stack_0000000c[1] = local_348;
    return lVar1;
  }
  return 0;
}


