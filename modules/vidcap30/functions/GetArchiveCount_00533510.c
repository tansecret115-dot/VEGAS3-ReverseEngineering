/* Module: vidcap30.exe
   Function: GetArchiveCount
   Address: 00533510
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::GetArchiveCount(void) */

long CArchive2::GetArchiveCount(void)

{
  long lVar1;
  int in_stack_00000004;
  
                    /* 0x133510  16  ?GetArchiveCount@CArchive2@@QAGJXZ */
  lVar1 = -1;
  if ((*(int *)(in_stack_00000004 + 0x24) != 0) && (*(int *)(in_stack_00000004 + 0x30) == 0xc054d55)
     ) {
    lVar1 = *(long *)(in_stack_00000004 + 0x40);
  }
  return lVar1;
}


