/* Module: pncrt.dll
   Function: tmpfile
   Address: 78027bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


FILE * __cdecl tmpfile(void)

{
  FILE *pFVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
                    /* 0x27bc0  731  tmpfile */
  FUN_78009cc0();
  _lock(3);
  if (DAT_78042660 == '\0') {
    FUN_78027ce0(1);
  }
  else {
    iVar2 = FUN_78027d60((uchar *)&DAT_78042660);
    if (iVar2 != 0) goto LAB_78027c90;
  }
  pFVar1 = (FILE *)FUN_780282f0();
  if (pFVar1 == (FILE *)0x0) goto LAB_78027c90;
  iVar2 = _sopen(&DAT_78042660,0x8542,0x40,0x180);
  if (iVar2 == -1) {
    do {
      piVar3 = _errno();
      if (*piVar3 != 0x11) break;
      iVar4 = FUN_78027d60((uchar *)&DAT_78042660);
      if (iVar4 != 0) break;
      iVar2 = _sopen(&DAT_78042660,0x8542,0x40,0x180);
    } while (iVar2 == -1);
    if (iVar2 != -1) goto LAB_78027c6a;
  }
  else {
LAB_78027c6a:
    pcVar5 = _mbsdup(&DAT_78042660);
    pFVar1->_tmpfname = pcVar5;
    if (pcVar5 != (char *)0x0) {
      pFVar1->_cnt = 0;
      pFVar1->_ptr = (char *)0x0;
      pFVar1->_base = (char *)0x0;
      pFVar1->_flag = _commode | 0x80;
      pFVar1->_file = iVar2;
      FUN_78009510((uint)pFVar1);
      _unlock(3);
      return pFVar1;
    }
    _close(iVar2);
  }
  FUN_78009510((uint)pFVar1);
LAB_78027c90:
  _unlock(3);
  return (FILE *)0x0;
}


