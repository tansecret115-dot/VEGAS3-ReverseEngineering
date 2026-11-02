/* Module: Setup.exe
   Function: GetArchiveSEAStatus
   Address: 0040e9d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::GetArchiveSEAStatus(void) */

int CArchive2::GetArchiveSEAStatus(void)

{
  int iVar1;
  int in_stack_00000004;
  
                    /* 0xe9d0  14  ?GetArchiveSEAStatus@CArchive2@@QAGHXZ */
  iVar1 = 0;
  if ((-1 < *(int *)(in_stack_00000004 + 0x58)) &&
     ((0 < *(int *)(in_stack_00000004 + 0x58) || (*(int *)(in_stack_00000004 + 0x54) != 0)))) {
    iVar1 = 1;
  }
  return iVar1;
}


