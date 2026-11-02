/* Module: Setup.exe
   Function: GetEntryCRC32
   Address: 0040f980
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryCRC32(char const *,int &) */

long CArchive2::GetEntryCRC32(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [8];
  undefined4 local_340;
  
                    /* 0xf980  19  ?GetEntryCRC32@CArchive2@@QAGJPBDAAH@Z */
  iVar1 = FUN_00411440(param_1,(LPCSTR)param_2,local_360);
  if (-1 < iVar1) {
    *in_stack_0000000c = local_340;
  }
  return iVar1;
}


