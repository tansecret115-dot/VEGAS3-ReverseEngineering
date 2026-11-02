/* Module: Setup.exe
   Function: IsEntryInArchive
   Address: 0040faa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::IsEntryInArchive(char const *) */

int CArchive2::IsEntryInArchive(char *param_1)

{
  int iVar1;
  LPCSTR in_stack_00000008;
  int local_360 [21];
  CHAR local_30c [780];
  
                    /* 0xfaa0  42  ?IsEntryInArchive@CArchive2@@QAGHPBD@Z */
  if (((*(int *)(param_1 + 0x24) != 0) &&
      (iVar1 = FUN_00411440(param_1,in_stack_00000008,local_360), iVar1 == 0)) &&
     (iVar1 = lstrcmpiA(in_stack_00000008,local_30c), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


