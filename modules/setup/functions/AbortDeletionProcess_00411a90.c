/* Module: Setup.exe
   Function: AbortDeletionProcess
   Address: 00411a90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __stdcall CArchive2::AbortDeletionProcess(void) */

void CArchive2::AbortDeletionProcess(void)

{
  int in_stack_00000004;
  
                    /* 0x11a90  3  ?AbortDeletionProcess@CArchive2@@QAGXXZ */
  if (*(int *)(in_stack_00000004 + 0x24) == 3) {
    _SfList_DeleteList_16(*(int **)(in_stack_00000004 + 0x10),0,-1,0);
  }
  return;
}


