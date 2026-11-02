/* Module: Setup.exe
   Function: GetEntryCompressedSize
   Address: 0040f790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCompressedSize(char const *,__int64 &) */

long CArchive2::GetEntryCompressedSize(char *param_1,__int64 *param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [9];
  undefined4 local_33c;
  undefined4 local_338;
  
                    /* 0xf790  21  ?GetEntryCompressedSize@CArchive2@@QAGJPBDAA_J@Z */
  iVar1 = FUN_00411440(param_1,(LPCSTR)param_2,local_360);
  if (-1 < iVar1) {
    *in_stack_0000000c = local_33c;
    in_stack_0000000c[1] = local_338;
  }
  return iVar1;
}


