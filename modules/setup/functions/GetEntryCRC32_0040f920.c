/* Module: Setup.exe
   Function: GetEntryCRC32
   Address: 0040f920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCRC32(int,int &) */

long CArchive2::GetEntryCRC32(int param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [8];
  undefined4 local_340;
  
                    /* 0xf920  18  ?GetEntryCRC32@CArchive2@@QAGJHAAH@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_004113d0((void *)param_1,(int)param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_340;
    return lVar1;
  }
  return 0;
}


