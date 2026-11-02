/* Module: vidcap30.exe
   Function: GetMultiVolumeStatus
   Address: 00535790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::GetMultiVolumeStatus(void) */

int CArchive2::GetMultiVolumeStatus(void)

{
  int in_stack_00000004;
  
                    /* 0x135790  37  ?GetMultiVolumeStatus@CArchive2@@QAGHXZ */
  return *(int *)(in_stack_00000004 + 0x898);
}


