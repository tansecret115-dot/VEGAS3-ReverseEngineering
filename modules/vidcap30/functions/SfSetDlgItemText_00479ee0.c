/* Module: vidcap30.exe
   Function: SfSetDlgItemText
   Address: 00479ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


int SfSetDlgItemText(HWND param_1,int param_2,CHAR *param_3)

{
  char cVar1;
  LPCSTR lpsz;
  int iVar2;
  BOOL BVar3;
  CHAR local_800 [2048];
  
                    /* 0x79ee0  609  SfSetDlgItemText */
  if (param_3 == (LPCSTR)0x0) {
    return 0;
  }
  cVar1 = *param_3;
  lpsz = param_3;
  do {
    if (cVar1 == '\0') {
      iVar2 = lstrlenA(param_3);
LAB_00479f2c:
      BVar3 = SetDlgItemTextA(param_1,param_2,param_3);
      if (BVar3 == 0) {
        iVar2 = 0;
      }
      return iVar2;
    }
    if ((cVar1 == '%') || (cVar1 == '$')) {
      iVar2 = _SfVPrintF_12(local_800,param_3,&stack0x00000010);
      param_3 = local_800;
      goto LAB_00479f2c;
    }
    lpsz = CharNextA(lpsz);
    cVar1 = *lpsz;
  } while( true );
}


