/* Module: Setup.exe
   Function: GetEntryUncompressedSize
   Address: 0040f6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryUncompressedSize(char const *,__int64 &) */

long CArchive2::GetEntryUncompressedSize(char *param_1,__int64 *param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [11];
  undefined4 local_334;
  undefined4 local_330;
  
                    /* 0xf6e0  31  ?GetEntryUncompressedSize@CArchive2@@QAGJPBDAA_J@Z */
  iVar1 = FUN_00411440(param_1,(LPCSTR)param_2,local_360);
  if (-1 < iVar1) {
    *in_stack_0000000c = local_334;
    in_stack_0000000c[1] = local_330;
  }
  return iVar1;
}


