/* Module: vidcap30.exe
   Function: SfSetWindowTextId
   Address: 00479e40
   Source: Ghidra pseudocode (Stage 10 batch) */


int SfSetWindowTextId(undefined4 param_1,HWND param_2,undefined4 param_3)

{
  char cVar1;
  CHAR *lpString;
  LPCSTR lpsz;
  int iVar2;
  BOOL BVar3;
  CHAR local_800 [2048];
  
                    /* 0x79e40  620  SfSetWindowTextId */
  lpString = (CHAR *)_SfGetString_8(param_1,param_3);
  if (*lpString == '\0') {
    lpString = (CHAR *)_SfGetString2_8(param_1,param_3);
  }
  cVar1 = *lpString;
  lpsz = lpString;
  do {
    if (cVar1 == '\0') {
      iVar2 = lstrlenA(lpString);
LAB_00479e9b:
      BVar3 = SetWindowTextA(param_2,lpString);
      if (BVar3 == 0) {
        return 0;
      }
      return iVar2;
    }
    if ((cVar1 == '%') || (cVar1 == '$')) {
      iVar2 = _SfVPrintF_12(local_800,lpString,&stack0x00000010);
      lpString = local_800;
      goto LAB_00479e9b;
    }
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  } while( true );
}


