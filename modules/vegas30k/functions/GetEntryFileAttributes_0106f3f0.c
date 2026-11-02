/* Module: vegas30k.dll
   Function: GetEntryFileAttributes
   Address: 0106f3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryFileAttributes(char const *,int &) */

long CArchive2::GetEntryFileAttributes(char *param_1,int *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [68];
  undefined4 local_31c;
  
                    /* 0x6f3f0  89  ?GetEntryFileAttributes@CArchive2@@QAGJPBDAAH@Z */
  lVar1 = FUN_01070e10(param_2,local_360);
  if (-1 < lVar1) {
    *in_stack_0000000c = local_31c;
  }
  return lVar1;
}


