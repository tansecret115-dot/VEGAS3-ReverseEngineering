/* Module: vidcap30.exe
   Function: GetEntryCompressedSize
   Address: 005359d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCompressedSize(char const *,__int64 &) */

long CArchive2::GetEntryCompressedSize(char *param_1,__int64 *param_2)

{
  long lVar1;
  undefined4 *in_stack_0000000c;
  undefined1 local_360 [36];
  undefined4 local_33c;
  undefined4 local_338;
  
                    /* 0x1359d0  25  ?GetEntryCompressedSize@CArchive2@@QAGJPBDAA_J@Z */
  lVar1 = FUN_00537680(param_2,local_360);
  if (-1 < lVar1) {
    *in_stack_0000000c = local_33c;
    in_stack_0000000c[1] = local_338;
  }
  return lVar1;
}


