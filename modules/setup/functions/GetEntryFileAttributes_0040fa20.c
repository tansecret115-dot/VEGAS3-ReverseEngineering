/* Module: Setup.exe
   Function: GetEntryFileAttributes
   Address: 0040fa20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetEntryFileAttributes(char const *,int &) */

long CArchive2::GetEntryFileAttributes(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_stack_0000000c;
  int local_360 [17];
  undefined4 local_31c;
  
                    /* 0xfa20  26  ?GetEntryFileAttributes@CArchive2@@QAGJPBDAAH@Z */
  iVar1 = FUN_00411440(param_1,(LPCSTR)param_2,local_360);
  if (-1 < iVar1) {
    *in_stack_0000000c = local_31c;
  }
  return iVar1;
}


