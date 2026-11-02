/* Module: Setup.exe
   Function: GetEntryFileAttributes
   Address: 0040f9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryFileAttributes(int,int &) */

long CArchive2::GetEntryFileAttributes(int param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [17];
  undefined4 local_31c;
  
                    /* 0xf9c0  25  ?GetEntryFileAttributes@CArchive2@@QAGJHAAH@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_004113d0((void *)param_1,(int)param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_31c;
    return lVar1;
  }
  return 0;
}


