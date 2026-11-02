/* Module: vegas30k.dll
   Function: GetEntryCRC32
   Address: 0106f2f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCRC32(int,int &) */

long CArchive2::GetEntryCRC32(int param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [32];
  undefined4 local_340;
  
                    /* 0x6f2f0  81  ?GetEntryCRC32@CArchive2@@QAGJHAAH@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_01070da0(param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_340;
    return lVar1;
  }
  return 0;
}


