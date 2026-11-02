/* Module: vegas30k.dll
   Function: GetEntryCRC32
   Address: 0106f350
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCRC32(char const *,int &) */

long CArchive2::GetEntryCRC32(char *param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [32];
  undefined4 local_340;
  
                    /* 0x6f350  82  ?GetEntryCRC32@CArchive2@@QAGJPBDAAH@Z */
  lVar1 = FUN_01070e10(param_2,local_360);
  if (-1 < lVar1) {
    *in_stack_0000000c = local_340;
  }
  return lVar1;
}


