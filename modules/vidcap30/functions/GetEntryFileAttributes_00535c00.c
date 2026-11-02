/* Module: vidcap30.exe
   Function: GetEntryFileAttributes
   Address: 00535c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryFileAttributes(int,int &) */

long CArchive2::GetEntryFileAttributes(int param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [68];
  undefined4 local_31c;
  
                    /* 0x135c00  29  ?GetEntryFileAttributes@CArchive2@@QAGJHAAH@Z */
  if ((-1 < (int)param_2) && (lVar1 = GetArchiveCount(), (int)param_2 < lVar1)) {
    lVar1 = FUN_00537610(param_2,local_360);
    if (lVar1 < 0) {
      return lVar1;
    }
    *in_stack_0000000c = local_31c;
    return lVar1;
  }
  return 0;
}


