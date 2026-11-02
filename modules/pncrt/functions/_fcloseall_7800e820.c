/* Module: pncrt.dll
   Function: _fcloseall
   Address: 7800e820
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _fcloseall(void)

{
  FILE *_File;
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xe820  223  _fcloseall */
  iVar2 = 0;
  _lock(2);
  iVar3 = 3;
  if (3 < DAT_7803fa78) {
    do {
      _File = *(FILE **)(DAT_78042850 + iVar3 * 4);
      if (_File != (FILE *)0x0) {
        if (((_File->_flag & 0x83) != 0) && (iVar1 = fclose(_File), iVar1 != -1)) {
          iVar2 = iVar2 + 1;
        }
        if (0x13 < iVar3) {
          DeleteCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_78042850 + iVar3 * 4) + 0x20));
          free(*(void **)(DAT_78042850 + iVar3 * 4));
          *(undefined4 *)(DAT_78042850 + iVar3 * 4) = 0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_7803fa78);
  }
  _unlock(2);
  return iVar2;
}


