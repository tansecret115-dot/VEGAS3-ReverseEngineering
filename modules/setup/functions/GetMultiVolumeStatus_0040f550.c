/* Module: Setup.exe
   Function: GetMultiVolumeStatus
   Address: 0040f550
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __stdcall CArchive2::GetMultiVolumeStatus(void) */

int CArchive2::GetMultiVolumeStatus(void)

{
  int in_stack_00000004;
  
                    /* 0xf550  33  ?GetMultiVolumeStatus@CArchive2@@QAGHXZ */
  return *(int *)(in_stack_00000004 + 0x898);
}


