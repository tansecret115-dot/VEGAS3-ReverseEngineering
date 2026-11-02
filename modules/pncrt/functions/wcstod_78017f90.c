/* Module: pncrt.dll
   Function: wcstod
   Address: 78017f90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __cdecl wcstod(wchar_t *_Str,wchar_t **_EndPtr)

{
  double dVar1;
  wchar_t wVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  byte *_Memory;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  wchar_t *_Str_00;
  wchar_t *pwVar9;
  byte *_MbCh;
  undefined8 local_20;
  uint local_18 [6];
  
                    /* 0x17f90  760  wcstod */
  iVar8 = 0;
  iVar4 = iswctype(*_Str,8);
  _Str_00 = _Str;
  while (iVar4 != 0) {
    pwVar9 = _Str_00 + 1;
    _Str_00 = _Str_00 + 1;
    iVar4 = iswctype(*pwVar9,8);
  }
  sVar5 = wcslen(_Str_00);
  _Memory = malloc(sVar5 * 2 + 2);
  wVar2 = *_Str_00;
  _MbCh = _Memory;
  pwVar9 = _Str_00;
  while ((wVar2 != L'\0' && (iVar4 = wctomb((char *)_MbCh,*pwVar9), 0 < iVar4))) {
    pwVar9 = pwVar9 + 1;
    iVar8 = iVar8 + iVar4;
    _MbCh = _MbCh + 1;
    wVar2 = *pwVar9;
  }
  _Memory[iVar8] = 0;
  puVar6 = (uint *)FUN_780300d0(local_18,_Memory);
  free(_Memory);
  if (_EndPtr != (wchar_t **)0x0) {
    *_EndPtr = _Str_00 + puVar6[1];
  }
  dVar1 = _DAT_78037868;
  uVar3 = *puVar6;
  if ((uVar3 & 0x240) == 0) {
    if ((uVar3 & 0x81) != 0) {
      if (*_Str_00 != L'-') {
        local_20 = (double)CONCAT44(DAT_780410f8,_HUGE);
        piVar7 = _errno();
        *piVar7 = 0x22;
        return local_20;
      }
      dVar1 = (double)CONCAT44(DAT_780410f8,_HUGE);
      piVar7 = _errno();
      *piVar7 = 0x22;
      return -dVar1;
    }
    if ((uVar3 & 0x100) != 0) {
      piVar7 = _errno();
      *piVar7 = 0x22;
      return 0.0;
    }
    dVar1 = *(double *)(puVar6 + 4);
  }
  else if (_EndPtr != (wchar_t **)0x0) {
    *_EndPtr = _Str;
    return dVar1;
  }
  return dVar1;
}


