/* Module: vegas30k.dll
   Function: IsEntryInArchive
   Address: 0106f470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::IsEntryInArchive(char const *) */

int CArchive2::IsEntryInArchive(char *param_1)

{
  int iVar1;
  LPCSTR in_stack_00000008;
  undefined1 local_360 [84];
  CHAR local_30c [780];
  
                    /* 0x6f470  122  ?IsEntryInArchive@CArchive2@@QAGHPBD@Z */
  if (((*(int *)(param_1 + 0x24) != 0) &&
      (iVar1 = FUN_01070e10(in_stack_00000008,local_360), iVar1 == 0)) &&
     (iVar1 = lstrcmpiA(in_stack_00000008,local_30c), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


