/* Module: pncrt.dll
   Function: _fdopen
   Address: 78024cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl _fdopen(int _FileHandle,char *_Format)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FILE *pFVar5;
  char *pcVar6;
  
                    /* 0x24cd0  225  _fdopen */
  if (((DAT_78042840 <= (uint)_FileHandle) ||
      ((*(byte *)((&__pioinfo)[_FileHandle >> 5] + 4 + (_FileHandle & 0x1fU) * 0x24) & 1) == 0)) ||
     (pFVar5 = (FILE *)FUN_780282f0(), pFVar5 == (FILE *)0x0)) {
    return (FILE *)0x0;
  }
  cVar1 = *_Format;
  if (cVar1 != 'a') {
    if (cVar1 == 'r') {
      pFVar5->_flag = 1;
      goto LAB_78024d47;
    }
    if (cVar1 != 'w') {
      FUN_78009510(0);
      return (FILE *)0x0;
    }
  }
  pFVar5->_flag = 2;
LAB_78024d47:
  bVar2 = true;
  bVar4 = false;
  bVar3 = false;
  pcVar6 = _Format + 1;
  pFVar5->_flag = pFVar5->_flag | _commode;
  cVar1 = *pcVar6;
  do {
    if ((cVar1 == '\0') || (!bVar2)) {
      pFVar5->_file = _FileHandle;
      FUN_78009510((uint)pFVar5);
      return pFVar5;
    }
    switch(cVar1) {
    case '+':
      if ((pFVar5->_flag & 0x80U) != 0) break;
      pFVar5->_flag = pFVar5->_flag & 0xfffffffcU | 0x80;
      goto LAB_78024dc5;
    case 'b':
    case 't':
      if (!bVar3) {
        bVar3 = true;
        goto LAB_78024dc5;
      }
      break;
    case 'c':
      if (!bVar4) {
        bVar4 = true;
        pFVar5->_flag = pFVar5->_flag | 0x4000;
        goto LAB_78024dc5;
      }
      break;
    case 'n':
      if (!bVar4) {
        bVar4 = true;
        pFVar5->_flag = pFVar5->_flag & 0xffffbfff;
        goto LAB_78024dc5;
      }
    }
    bVar2 = false;
LAB_78024dc5:
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
  } while( true );
}


