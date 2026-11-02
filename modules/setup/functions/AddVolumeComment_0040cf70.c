/* Module: Setup.exe
   Function: AddVolumeComment
   Address: 0040cf70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __stdcall CArchive2::AddVolumeComment(char const *) */

void CArchive2::AddVolumeComment(char *param_1)

{
  uint uVar1;
  uchar *in_stack_00000008;
  
                    /* 0xcf70  5  ?AddVolumeComment@CArchive2@@QAGXPBD@Z */
  if (*(int *)(param_1 + 0x24) != 1) {
    uVar1 = lstrlenA((LPCSTR)in_stack_00000008);
    if (0x400 < uVar1) {
      lstrcpynA(param_1 + 0x68,(LPCSTR)in_stack_00000008,0x400);
      param_1[0x467] = '\0';
      return;
    }
    _mbscpy((uchar *)(param_1 + 0x68),in_stack_00000008);
  }
  return;
}


