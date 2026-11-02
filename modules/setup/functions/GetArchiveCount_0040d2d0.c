/* Module: Setup.exe
   Function: GetArchiveCount
   Address: 0040d2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetArchiveCount(void) */

long CArchive2::GetArchiveCount(void)

{
  long lVar1;
  int in_stack_00000004;
  
                    /* 0xd2d0  13  ?GetArchiveCount@CArchive2@@QAGJXZ */
  lVar1 = -1;
  if ((*(int *)(in_stack_00000004 + 0x24) != 0) && (*(int *)(in_stack_00000004 + 0x30) == 0xc054d55)
     ) {
    lVar1 = *(long *)(in_stack_00000004 + 0x40);
  }
  return lVar1;
}


