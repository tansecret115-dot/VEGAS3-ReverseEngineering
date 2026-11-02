/* Module: sfnetmedia.dll
   Function: FUN_00428e10
   Address: 00428e10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428e10(LPCSTR param_1,int *param_2)

{
  char cVar1;
  LPCSTR lpsz;
  HGLOBAL hMem;
  LPVOID pvVar2;
  int iVar3;
  
  if (param_1 != (LPCSTR)0x0) {
    iVar3 = 1;
    cVar1 = *param_1;
    lpsz = param_1;
    while (cVar1 != '\0') {
      if (cVar1 == ',') {
        iVar3 = iVar3 + 1;
      }
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    }
    hMem = GlobalAlloc(0x40,iVar3 * 4 + 4);
    pvVar2 = GlobalLock(hMem);
    *param_2 = (int)pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        *(LPCSTR *)(*param_2 + -4 + iVar3 * 4) = param_1;
        do {
          param_1 = CharNextA(param_1);
          if (*param_1 == '\0') break;
        } while (*param_1 != ',');
        if (*param_1 == ',') {
          *param_1 = '\0';
          param_1 = CharNextA(param_1);
        }
        if (*param_1 == '\0') {
          *(undefined4 *)(*param_2 + iVar3 * 4) = 0;
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}


