/* Module: Setup.exe
   Function: SfSetWindowTextId
   Address: 00409040
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl SfSetWindowTextId(undefined4 *param_1,HWND param_2,uint param_3)

{
  BYTE BVar1;
  uchar *lpString;
  BYTE *lpsz;
  int iVar2;
  BOOL BVar3;
  uchar local_800 [2048];
  
                    /* 0x9040  334  SfSetWindowTextId */
  lpString = (uchar *)_SfGetString_8(param_1,param_3);
  if (*lpString == '\0') {
    lpString = _SfGetString2_8(param_1,param_3);
  }
  BVar1 = *lpString;
  lpsz = lpString;
  do {
    if (BVar1 == '\0') {
      iVar2 = lstrlenA((LPCSTR)lpString);
LAB_0040909b:
      BVar3 = SetWindowTextA(param_2,(LPCSTR)lpString);
      if (BVar3 == 0) {
        return 0;
      }
      return iVar2;
    }
    if ((BVar1 == '%') || (BVar1 == '$')) {
      iVar2 = _SfVPrintF_12(local_800,lpString,(uint *)&stack0x00000010);
      lpString = local_800;
      goto LAB_0040909b;
    }
    lpsz = (BYTE *)CharNextA((LPCSTR)lpsz);
    BVar1 = *lpsz;
  } while( true );
}


