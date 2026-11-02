/* Module: vidcap30.exe
   Function: GetEntryUncompressedSize
   Address: 00535920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryUncompressedSize(char const *,__int64 &) */

long CArchive2::GetEntryUncompressedSize(char *param_1,__int64 *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [44];
  undefined4 local_334;
  undefined4 local_330;
  
                    /* 0x135920  35  ?GetEntryUncompressedSize@CArchive2@@QAGJPBDAA_J@Z */
  lVar1 = FUN_00537680(param_2,local_360);
  if (-1 < lVar1) {
    *in_stack_0000000c = local_334;
    in_stack_0000000c[1] = local_330;
  }
  return lVar1;
}


