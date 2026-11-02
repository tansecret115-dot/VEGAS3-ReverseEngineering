/* Module: vegas30k.dll
   Function: AddVolumeComment
   Address: 0106c940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __stdcall CArchive2::AddVolumeComment(char const *) */

void CArchive2::AddVolumeComment(char *param_1)

{
  uint uVar1;
  uchar *in_stack_00000008;
  
                    /* 0x6c940  16  ?AddVolumeComment@CArchive2@@QAGXPBD@Z */
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


