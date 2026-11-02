/* Module: Setup.exe
   Function: GetEntryCompressedSize
   Address: 0040f720
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCompressedSize(int,__int64 &) */

long CArchive2::GetEntryCompressedSize(int param_1,__int64 *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [9];
  undefined4 local_33c;
  undefined4 local_338;
  
                    /* 0xf720  20  ?GetEntryCompressedSize@CArchive2@@QAGJHAA_J@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_004113d0((void *)param_1,(int)param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_33c;
    in_stack_0000000c[1] = local_338;
    return lVar1;
  }
  return 0;
}


