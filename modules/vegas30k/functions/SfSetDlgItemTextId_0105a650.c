/* Module: vegas30k.dll
   Function: SfSetDlgItemTextId
   Address: 0105a650
   Source: Ghidra pseudocode (Stage 10 batch) */


int SfSetDlgItemTextId(undefined4 param_1,HWND param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  CHAR *lpString;
  LPCSTR lpsz;
  int iVar2;
  BOOL BVar3;
  CHAR local_800 [2048];
  
                    /* 0x5a650  1191  SfSetDlgItemTextId */
  lpString = (CHAR *)_SfGetString_8(param_1,param_4);
  if (*lpString == '\0') {
    lpString = (CHAR *)_SfGetString2_8(param_1,param_4);
  }
  cVar1 = *lpString;
  lpsz = lpString;
  do {
    if (cVar1 == '\0') {
      iVar2 = lstrlenA(lpString);
LAB_0105a6ab:
      BVar3 = SetDlgItemTextA(param_2,param_3,lpString);
      if (BVar3 == 0) {
        return 0;
      }
      return iVar2;
    }
    if ((cVar1 == '%') || (cVar1 == '$')) {
      iVar2 = _SfVPrintF_12(local_800,lpString,&stack0x00000014);
      lpString = local_800;
      goto LAB_0105a6ab;
    }
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  } while( true );
}


