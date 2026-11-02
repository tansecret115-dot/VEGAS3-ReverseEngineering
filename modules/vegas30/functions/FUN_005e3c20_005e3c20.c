/* Module: vegas30.exe
   Function: FUN_005e3c20
   Address: 005e3c20
   Source: Ghidra pseudocode (Stage 10 batch) */


char * FUN_005e3c20(char *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  LPCSTR lpString;
  size_t _Size;
  char *pcVar4;
  code *pcVar5;
  
  bVar2 = false;
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar5 = CharNextA_exref;
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  while( true ) {
    while ((((cVar1 = *param_1, cVar1 != ';' || (param_2 != 0)) && (cVar1 != '\0')) &&
           ((cVar1 != '\"' && (iVar3 = _ismbcspace((int)cVar1), iVar3 == 0))))) {
      param_1 = (char *)(*pcVar5)(param_1);
    }
    if (*param_1 == '\0') break;
    if (*param_1 == '\"') {
      lpString = (LPCSTR)(*pcVar5)(param_1);
      _Size = 0;
      if (lpString != (LPCSTR)0x0) {
        iVar3 = lstrlenA(lpString);
        _Size = iVar3 + 1;
        pcVar5 = CharNextA_exref;
      }
      memmove(param_1,lpString,_Size);
      if (bVar2) {
        if (*param_1 == '\"') {
          param_1 = (char *)(*pcVar5)(param_1);
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = true;
      }
    }
    else {
      if (!bVar2) break;
      do {
        iVar3 = _ismbcspace((int)*param_1);
        while (iVar3 != 0) {
          param_1 = (char *)(*pcVar5)(param_1);
          iVar3 = _ismbcspace((int)*param_1);
        }
      } while (*param_1 == ';');
    }
  }
  pcVar4 = param_1;
  if (*param_1 != '\0') {
    pcVar4 = (char *)(*pcVar5)(param_1);
    *param_1 = '\0';
    param_1 = pcVar4;
  }
  do {
    iVar3 = _ismbcspace((int)*pcVar4);
    while (iVar3 != 0) {
      pcVar4 = (char *)(*pcVar5)(pcVar4);
      iVar3 = _ismbcspace((int)*pcVar4);
    }
  } while (*pcVar4 == ';');
  if (pcVar4 != param_1) {
    do {
      iVar3 = _ismbcspace((int)*param_1);
      while (iVar3 != 0) {
        param_1 = (char *)(*pcVar5)(param_1);
        iVar3 = _ismbcspace((int)*param_1);
      }
    } while (*param_1 == ';');
  }
  return param_1;
}


