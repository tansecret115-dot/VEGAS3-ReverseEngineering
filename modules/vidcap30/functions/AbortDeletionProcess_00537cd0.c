/* Module: vidcap30.exe
   Function: AbortDeletionProcess
   Address: 00537cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __stdcall CArchive2::AbortDeletionProcess(void) */

void CArchive2::AbortDeletionProcess(void)

{
  int in_stack_00000004;
  
                    /* 0x137cd0  3  ?AbortDeletionProcess@CArchive2@@QAGXXZ */
  if (*(int *)(in_stack_00000004 + 0x24) == 3) {
    _SfList_DeleteList_16(*(undefined4 *)(in_stack_00000004 + 0x10),0,0xffffffff,0);
  }
  return;
}


