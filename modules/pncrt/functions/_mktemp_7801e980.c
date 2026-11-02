/* Module: pncrt.dll
   Function: _mktemp
   Address: 7801e980
   Source: Ghidra pseudocode (Stage 10 batch) */


char * __cdecl _mktemp(char *_TemplateName)

{
  uchar *puVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uchar *_Pos;
  
                    /* 0x1e980  397  _mktemp */
  iVar7 = 0;
  uVar3 = __threadid();
  uVar2 = *_TemplateName;
  _Pos = (uchar *)_TemplateName;
  while (uVar2 != '\0') {
    puVar1 = _Pos + 1;
    _Pos = _Pos + 1;
    uVar2 = *puVar1;
  }
  while ((_Pos = _Pos + -1, _TemplateName <= _Pos &&
         (iVar4 = _ismbstrail((uchar *)_TemplateName,_Pos), iVar4 == 0))) {
    if (*_Pos != 'X') {
      return (char *)0x0;
    }
    if (4 < iVar7) break;
    iVar7 = iVar7 + 1;
    *_Pos = (char)((ulonglong)uVar3 % 10) + '0';
    uVar3 = uVar3 / 10;
  }
  if ((*_Pos == 'X') && (4 < iVar7)) {
    *_Pos = 'a';
    iVar4 = 0x62;
    piVar5 = _errno();
    iVar7 = *piVar5;
    piVar5 = _errno();
    *piVar5 = 0;
    while( true ) {
      iVar6 = _access(_TemplateName,0);
      if ((iVar6 != 0) && (piVar5 = _errno(), *piVar5 != 0xd)) {
        piVar5 = _errno();
        *piVar5 = iVar7;
        return _TemplateName;
      }
      piVar5 = _errno();
      *piVar5 = 0;
      if (iVar4 == 0x7b) break;
      *_Pos = (uchar)iVar4;
      iVar4 = iVar4 + 1;
    }
    piVar5 = _errno();
    *piVar5 = iVar7;
  }
  return (char *)0x0;
}


