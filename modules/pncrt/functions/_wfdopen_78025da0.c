/* Module: pncrt.dll
   Function: _wfdopen
   Address: 78025da0
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl _wfdopen(int _FileHandle,wchar_t *_Mode)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FILE *pFVar5;
  wchar_t *pwVar6;
  
                    /* 0x25da0  520  _wfdopen */
  if (((DAT_78042840 <= (uint)_FileHandle) ||
      ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) == 0)) ||
     (pFVar5 = (FILE *)FUN_780282f0(), pFVar5 == (FILE *)0x0)) {
    return (FILE *)0x0;
  }
  wVar1 = *_Mode;
  if (wVar1 != L'a') {
    if (wVar1 == L'r') {
      pFVar5->_flag = 1;
      goto LAB_78025e1d;
    }
    if (wVar1 != L'w') {
      FUN_78009510(0);
      return (FILE *)0x0;
    }
  }
  pFVar5->_flag = 2;
LAB_78025e1d:
  bVar2 = true;
  pwVar6 = _Mode + 1;
  bVar4 = false;
  pFVar5->_flag = pFVar5->_flag | _commode;
  wVar1 = *pwVar6;
  bVar3 = false;
  do {
    if ((wVar1 == L'\0') || (!bVar2)) {
      pFVar5->_file = _FileHandle;
      FUN_78009510((uint)pFVar5);
      return pFVar5;
    }
    switch(wVar1) {
    case L'+':
      if ((pFVar5->_flag & 0x80U) != 0) break;
      pFVar5->_flag = pFVar5->_flag & 0xfffffffcU | 0x80;
      goto LAB_78025ea1;
    case L'b':
    case L't':
      if (!bVar3) {
        bVar3 = true;
        goto LAB_78025ea1;
      }
      break;
    case L'c':
      if (!bVar4) {
        bVar4 = true;
        pFVar5->_flag = pFVar5->_flag | 0x4000;
        goto LAB_78025ea1;
      }
      break;
    case L'n':
      if (!bVar4) {
        bVar4 = true;
        pFVar5->_flag = pFVar5->_flag & 0xffffbfff;
        goto LAB_78025ea1;
      }
    }
    bVar2 = false;
LAB_78025ea1:
    wVar1 = pwVar6[1];
    pwVar6 = pwVar6 + 1;
  } while( true );
}


