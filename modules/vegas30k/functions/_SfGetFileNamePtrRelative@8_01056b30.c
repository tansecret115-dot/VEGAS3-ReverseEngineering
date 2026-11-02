/* Module: vegas30k.dll
   Function: _SfGetFileNamePtrRelative@8
   Address: 01056b30
   Source: Ghidra pseudocode (Stage 10 batch) */


char * _SfGetFileNamePtrRelative_8(LPCSTR param_1,LPCSTR param_2)

{
  char cVar1;
  LPCSTR lpsz;
  LPCSTR lpsz_00;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
                    /* 0x56b30  950  _SfGetFileNamePtrRelative@8 */
  pcVar4 = CharNextA_exref;
  cVar1 = *param_1;
  lpsz = param_1;
  while (cVar1 != '\0') {
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  }
  cVar1 = *param_2;
  lpsz_00 = param_2;
  while (cVar1 != '\0') {
    lpsz_00 = CharNextA(lpsz_00);
    cVar1 = *lpsz_00;
  }
  do {
    if (lpsz == param_1) goto LAB_01056bcb;
    if (lpsz_00 == param_2) {
      return lpsz_00;
    }
    lpsz = CharPrevA(param_1,lpsz);
    lpsz_00 = CharPrevA(param_2,lpsz_00);
    uVar2 = _mbctoupper((int)*lpsz);
    uVar3 = _mbctoupper((int)*lpsz_00);
    pcVar4 = CharNextA_exref;
  } while (uVar2 == uVar3);
  lpsz_00 = CharNextA(lpsz_00);
LAB_01056bcb:
  if (lpsz_00 != param_2) {
    cVar1 = *lpsz_00;
    while ((cVar1 != '\0' && (cVar1 != '\\'))) {
      lpsz_00 = (LPCSTR)(*pcVar4)(lpsz_00);
      cVar1 = *lpsz_00;
    }
    cVar1 = *lpsz_00;
    while ((cVar1 != '\0' && (cVar1 == '\\'))) {
      lpsz_00 = (LPCSTR)(*pcVar4)(lpsz_00);
      cVar1 = *lpsz_00;
    }
  }
  return lpsz_00;
}


