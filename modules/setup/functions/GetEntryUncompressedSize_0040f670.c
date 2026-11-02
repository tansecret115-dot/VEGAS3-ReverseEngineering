/* Module: Setup.exe
   Function: GetEntryUncompressedSize
   Address: 0040f670
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryUncompressedSize(int,__int64 &) */

long CArchive2::GetEntryUncompressedSize(int param_1,__int64 *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [11];
  undefined4 local_334;
  undefined4 local_330;
  
                    /* 0xf670  30  ?GetEntryUncompressedSize@CArchive2@@QAGJHAA_J@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_004113d0((void *)param_1,(int)param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_334;
    in_stack_0000000c[1] = local_330;
    return lVar1;
  }
  return 0;
}


