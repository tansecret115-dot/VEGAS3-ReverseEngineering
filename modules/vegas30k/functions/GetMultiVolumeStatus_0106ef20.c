/* Module: vegas30k.dll
   Function: GetMultiVolumeStatus
   Address: 0106ef20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::GetMultiVolumeStatus(void) */

int CArchive2::GetMultiVolumeStatus(void)

{
  int in_stack_00000004;
  
                    /* 0x6ef20  97  ?GetMultiVolumeStatus@CArchive2@@QAGHXZ */
  return *(int *)(in_stack_00000004 + 0x898);
}


