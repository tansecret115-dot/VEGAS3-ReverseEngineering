/* Module: Setup.exe
   Function: SfSetDlgItemTextId
   Address: 00409170
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl SfSetDlgItemTextId(undefined4 *param_1,HWND param_2,int param_3,uint param_4)

{
  BYTE BVar1;
  uchar *lpString;
  BYTE *lpsz;
  int iVar2;
  BOOL BVar3;
  uchar local_800 [2048];
  
                    /* 0x9170  324  SfSetDlgItemTextId */
  lpString = (uchar *)_SfGetString_8(param_1,param_4);
  if (*lpString == '\0') {
    lpString = _SfGetString2_8(param_1,param_4);
  }
  BVar1 = *lpString;
  lpsz = lpString;
  do {
    if (BVar1 == '\0') {
      iVar2 = lstrlenA((LPCSTR)lpString);
LAB_004091cb:
      BVar3 = SetDlgItemTextA(param_2,param_3,(LPCSTR)lpString);
      if (BVar3 == 0) {
        return 0;
      }
      return iVar2;
    }
    if ((BVar1 == '%') || (BVar1 == '$')) {
      iVar2 = _SfVPrintF_12(local_800,lpString,(uint *)&stack0x00000014);
      lpString = local_800;
      goto LAB_004091cb;
    }
    lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
    BVar1 = *lpsz;
  } while( true );
}


